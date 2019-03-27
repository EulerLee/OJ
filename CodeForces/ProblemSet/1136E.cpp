#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;

const int MAXN = 1<<18;
ll N, dat[2*MAXN - 1], maxb[2*MAXN - 1], sum[2*MAXN - 1];

template <typename T>
T input() {
    T res;
    cin >> res;
    return res;
}

void init(int n_)
{
    N = 1;
    while(N < n_) {
        N *= 2;
    }
    for(int i = 0; i < 2*N-1; ++i) {
        dat[i] = INF;
        maxb[i] = 0;
        sum[i] = 0;
    }
}

void update(int k, int a)
{
    k += N-1;
    dat[k] = a;
    maxb[k] = a;
    sum[k] = a;
    while(k > 0) {
        k = (k-1) / 2;
        sum[k] = sum[k*2 + 1] + sum[k*2 + 2];
        maxb[k] = max(maxb[k*2+1], maxb[k*2+2]);
    }
}

void set_update(int a, int b, ll v, ll l, ll r, ll k)
{
    if(r <= a || b <= l) return;
    if(a <= l && r <= b) {
        dat[k] = v;
        maxb[k] = v;
        sum[k] = v*(r-l);
        return;
    }
    dat[k] = INF;
    set_update(a, b, v, l, (l+r)/2, k*2+1);
    set_update(a, b, v, (l+r)/2, r, k*2+2);
    maxb[k] = max(maxb[k*2+1], maxb[k*2+2]);
    sum[k] = sum[k*2 + 1] + sum[k*2 + 2];
}

int getsum(int a, int b, int k, int l, int r)
{
    if(r <= a || b <= l) return 0;
    if(l <= a && b <= r) {
        if(dat[k] != INF) return dat[k]*(b-a);
    }
    if(a <= l && r <= b) {
        if(dat[k] != INF) {
            return dat[k]*(r-l);
        }
        return sum[k];
    }
    if(r - l == 1) return sum[k];
    else {
        ll vl = getsum(a, b, k*2 + 1, l, (l+r)/2);
        ll vr = getsum(a, b, k*2 + 2, (l+r)/2, r);
        return vl + vr;
    }
}

int findind(int a, int v, int l, int r, int k)
{
    if(maxb[k] < v) {
        return -1;
    }
    if(r <= a) return -1;
    int pl = findind(a, v, (l+r)/2, r, 2*k+2);
    int pr = findind(a, v, l, (l+r)/2, 2*k+1);
    if(pl != -1) return pl;
    else return pr;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, q;
    cin >> n;
    vector<int> A(n, 0);
    vector<int> T(n, 0);
    REP(i, n) {
        cin >> A[i];
    }
    REP(i, n-1) {
        int tmp;
        cin >> tmp;
        T[i+1] = T[i]+tmp;
    }
    REP(i, n) {
        A[i] -= T[i];
    }
    REP(i, n-1) {
        T[i+1] += T[i];
    }
    /*cout << endl;
    REP(i, n) cout << T[i] << " "; cout << endl;
    REP(i, n) cout << A[i] << " "; cout << endl;*/
    init(n);
    REP(i, n) {
        update(i, A[i]);
    }
    cin >> q;
    while(q--) {
        if(input<string>() == "+") {
            int k = input<int>();
            int x = input<int>();
            --k;
            ll bk = getsum(k, k+1, 0, 0, N);
            bk += x;
            int pos = findind(k, x, 0, N, 0);
            if(pos == -1) {
                set_update(k, n, bk, 0, N, 0);
            }else {
                set_update(k, pos, bk, 0, N, 0);
            }
        }else {
            int l = input<int>();
            int r = input<int>();
            --l, --r;
            ll ans = getsum(l, r+1, 0, 0, N) + (l==0 ? T[r]:T[r] - T[l-1]);
            cout << ans << endl;
        }
    }
}
