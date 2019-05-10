#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
const int INF = 0x3f3f3f3f;

int RMQ_N;
const int MAXN = 1e6;
int datC[MAXN], datD[MAXN];

void init_RMQ(int n)
{
    RMQ_N = 1;
    while(RMQ_N < n) RMQ_N *= 2;
    memset(datC, 0, sizeof datC);
    memset(datD, 0, sizeof datD);
}

void RMQ_updateC(int k, int a)
{
    k += RMQ_N-1;
    datC[k] = a;
    while(k > 0) {
        k = (k-1)>>1;
        datC[k] = max(datC[k*2+1], datC[k*2+2]);
    }
}

int RMQ_queryC(int a, int b, int i, int j, int k)
{
    if(a >= j || b <= i) {
        return 0;
    }else if(a <= i && j <= b) {
        return datC[k];
    }else {
        int vl = RMQ_queryC(a, b, i, (i+j)>>1, k*2+1);
        int vr = RMQ_queryC(a, b, (i+j)>>1, j, k*2+2);
        return max(vl, vr);
    }
}

void RMQ_updateD(int k, int a)
{
    k += RMQ_N-1;
    datD[k] = a;
    while(k > 0) {
        k = (k-1)>>1;
        datD[k] = max(datD[k*2+1], datD[k*2+2]);
    }
}

int RMQ_queryD(int a, int b, int i, int j, int k)
{
    if(a >= j || b <= i) {
        return 0;
    }else if(a <= i && j <= b) {
        return datD[k];
    }else {
        int vl = RMQ_queryD(a, b, i, (i+j)>>1, k*2+1);
        int vr = RMQ_queryD(a, b, (i+j)>>1, j, k*2+2);
        return max(vl, vr);
    }
}

bool check_enough(vector<int> &C, vector<int> &D, int L, int R, int A, int K)
{
    int snd = C[A];
    if(L == R) return D[A] <= snd+K;
    if(L == A) {
        int vl = RMQ_queryC(A+1, R, 0, RMQ_N, 0);
        if(vl > snd) return false;
        vl = RMQ_queryD(A, R, 0, RMQ_N, 0);
        return vl <= snd+K;
    }else {
        int vl = RMQ_queryC(L, A-1, 0, RMQ_N, 0);
        if(vl >= snd) return false;
        vl = RMQ_queryD(L, A, 0, RMQ_N, 0);
        return vl <= snd+K;
    }
}

bool check_over(vector<int> &C, vector<int> &D, int L, int R, int A, int K)
{
    int snd = C[A];
    if(L == R) return D[A]+K < snd;
    if(L == A) {
        int vl = RMQ_queryC(A+1, R, 0, RMQ_N, 0);
        if(vl > snd) return false;
        vl = RMQ_queryD(A, R, 0, RMQ_N, 0);
        return vl+K < snd;
    }else {
        int vl = RMQ_queryC(L, A-1, 0, RMQ_N, 0);
        if(vl >= snd) return false;
        vl = RMQ_queryD(L, A, 0, RMQ_N, 0);
        return vl+K < snd;
    }
}

void solve()
{
    int N, K;
    cin >> N >> K;
    init_RMQ(N);
    vector<int> C(N);
    vector<int> D(N);
    REP(i, N) {
        cin >> C[i];
        RMQ_updateC(i, C[i]);
    }
    REP(i, N) {
        cin >> D[i];
        RMQ_updateD(i, D[i]);
    }

    ll ans = 0;
    REP(i, N) {
        if(C[i]+K < D[i]) continue;
        int L = 0, R = 0;

        int l, r, m;
        l = 0, r = N-i;
        m = (l+r)>1;
        while(r-l > 1) {
            if(check_enough(C, D, i, i+m, i, K)) {
                l = m;
            }else {
                r = m;
            }
            m = (l+r)>>1;
        }
        R = i+l;

        l = 0, r = N-i;
        m = (l+r)>1;
        while(r-l > 1) {
            if(check_over(C, D, i, i+m, i, K)) {
                l = m;
            }else {
                r = m;
            }
            m = (l+r)>>1;
        }
        int R1 = i+l;
        if(!check_over(C, D, i, i+l, i, K)) {
            R1--;
        }

        l = 0, r = i+1;
        m = (l+r)>1;
        while(r-l > 1) {
            if(check_enough(C, D, i-m, i, i, K)) {
                l = m;
            }else {
                r = m;
            }
            m = (l+r)>>1;
        }
        L = i-l;

        l = 0, r = i+1;
        m = (l+r)>1;
        while(r-l > 1) {
            if(check_over(C, D, i-m, i, i, K)) {
                l = m;
            }else {
                r = m;
            }
            m = (l+r)>>1;
        }
        int L1 = i-l;
        if(!check_over(C, D, i-l, i, i, K)) {
            L1++;
        }

        ans += (R-R1)*(i-L+1) + (L1-L)*(R-i+1);
        cout << endl;
        cout << i << ":\t" << L << " " << L1 << " " << R1 << " " << R << endl;
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    for(int ti = 1; ti <= T; ++ti) {
        cout << "Case #" << ti << ": ";
        solve();
    }
}
