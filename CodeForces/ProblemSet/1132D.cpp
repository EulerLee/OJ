#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int n, k;


const int MAXN = 2e6+10;
int N;
ll dat[MAXN*2-1];
ll datp[MAXN*2-1];

void init()
{
    N = 1;
    while(N < n) N *= 2;

    REP(i, 2*N-1) {
        dat[i] = INF;
    }
    REP(i, N) {
        datp[i+N-1] = i;
    }
}

void update(int k, ll a)
{
    k += N-1;
    dat[k] = a;
    while(k > 0) {
        k = (k-1)>>1;
        if(dat[k*2+1] < dat[k*2+2]) {
            dat[k] = dat[k*2+1];
            datp[k] = datp[k*2+1];
        }else {
            dat[k] = dat[k*2+2];
            datp[k] = datp[k*2+2];
        }
    }
}

ll getmin(int a, int b, int l, int r, int k, int &pos)
{
    if(b <= l || a >= r) {
        pos = -1;
        return INF;
    }else if(a <= l && r <= b) {
        pos = datp[k];
        return dat[k];
    }else {
        int pl, pr;
        ll vl = getmin(a, b, l, (l+r)>>1, k*2+1, pl);
        ll vr = getmin(a, b, (l+r)>>1, r, k*2+2, pr);
        if(vl < vr) {
            pos = pl;
            return vl;
        }else {
            pos = pr;
            return vr;
        }
    }
}

bool ok(ll x, vector<ll> A, vector<ll> B)
{
    init();
    REP(i, n) {
        update(i, A[i]/B[i]);
    }
    REP(spt, k) {
        int pos = -1;
        ll res = getmin(0, N, 0, N, 0, pos);
        if(res < spt) {
            return false;
        }
        A[pos] += x;
        update(pos, A[pos]/B[pos]);
    }
    return true;
}

int main()
{
    accelerate();
    cin >> n >> k;
    vector<ll> A(n);
    vector<ll> B(n);
    REP(i, n) cin >> A[i];
    REP(i, n) cin >> B[i];

    ll r = 1ll*k*1e7+1;
    ll l = -1;
    ll m = (l+r)>>1;
    while(r-l > 1) {
        if(ok(m, A, B)) {
            r = m;
        }else {
            l = m;
        }
        m = (l+r)>>1;
    }
    if(ok(r, A, B)) cout << r << endl;
    else cout << -1 << endl;
}
