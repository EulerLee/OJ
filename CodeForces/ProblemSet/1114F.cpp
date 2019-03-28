#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const ll mod = 1e9 + 7;

vector<ll> prime;
vector<ll> revprime;

template <typename T>
T input() {
    T res;
    cin >> res;
    return res;
}

ll quickpow(ll x, ll n)
{
    ll ans = 1ll;
    while(n) {
        if(n&1) {
            ans *= x;
            ans %= mod;
        }
        x *= x;
        x %= mod;
        n >>= 1;
    }
    return ans;
}

void getprime()
{
    prime.push_back(2ll);
    vector<bool> isp(301, true);
    for(ll i = 3; i <= 300; i += 2) {
        if(isp[i]) {
            prime.push_back(i);
            for(ll k = 2; k*i <= 300; ++k) {
                isp[k*i] = false;
            }
        }
    }
    REP(i, prime.size()) {
        revprime.push_back(quickpow(prime[i], mod-2));
    }
}

inline ll getmask(ll a)
{
    ll m = 0ll;
    REP(i, prime.size()) {
        if(a%prime[i] == 0) {
            m |= 1ll<<i;
        }
    }
    return m;
}

inline ll geteuler(ll a, ll m)
{
    ll ans = a;
    REP(i, prime.size()) {
        if((m>>i)&1) {
            ans *= prime[i]-1;
            ans %= mod;
            ans *= revprime[i];
            ans %= mod;
        }
    }
    return ans;
}

const ll MAXN = 1ll<<20;
ll N, dat[MAXN*2-1], mul[MAXN*2-1], mask[MAXN*2-1], maskm[MAXN*2-1];

void init(ll _n)
{
    N = 1ll;
    while(N < _n) N *= 2;
    REP(i, N*2-1) {
        dat[i] = 1;
        mul[i] = 1;
        mask[i] = 0;
        maskm[i] = 0;
    }
}

void update(ll k, ll a)
{
    k += N-1;
    mask[k] = getmask(a);
    dat[k] = a;
    while(k > 0) {
        k = (k-1)>>1;
        dat[k] = dat[k*2+1]*dat[k*2+2]%mod;
        mask[k] = mask[k*2+1]|mask[k*2+2];
    }
}

void set_mul(ll a, ll b, ll x, ll m, ll l, ll r, ll k)
{
    if(r <= a || b <= l) return;
    if(a <= l && r <= b) {
        mul[k] = mul[k]*x%mod;
        maskm[k] |= m;
        return;
    }
    dat[k] *= quickpow(x, min(b, r)-max(a, l));
    dat[k] %= mod;
    mask[k] |= m;
    set_mul(a, b, x, m, l, (l+r)>>1, k*2+1);
    set_mul(a, b, x, m, (l+r)>>1, r, k*2+2);
}

ll getproduct(ll a, ll b, ll l, ll r, ll k)
{
    if(r <= a || b <= l) return 1;
    if(a <= l && r <= b) {
        return dat[k]*quickpow(mul[k], r-l)%mod;
    }
    ll vl = getproduct(a, b, l, (l+r)>>1, k*2+1);
    ll vr = getproduct(a, b, (l+r)>>1, r, k*2+2);
    return vl*vr%mod*quickpow(mul[k], min(b, r)-max(a, l))%mod;
}

ll getmm(ll a, ll b, ll l, ll r, ll k)
{
    if(r <= a || b <= l) return 0;
    if(a <= l && r <= b) {
        return mask[k]|maskm[k];
    }
    ll ml = getmm(a, b, l, (l+r)>>1, k*2+1);
    ll mr = getmm(a, b, (l+r)>>1, r, k*2+2);
    return ml|mr|maskm[k];
}

ll gettot(ll a, ll b)
{
    ll m = getmm(a, b, 0, N, 0);
    ll p = getproduct(a, b, 0, N, 0);
    //cout << m << " " << p << endl;
    return geteuler(p, m);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n, q;
    cin >> n >> q;
    init(n);
    getprime();
    vector<ll> A(n, 0);
    REP(i, n) cin >> A[i];
    REP(i, n) {
        update(i, A[i]);
    }
    while(q--) {
        if(input<string>() == "MULTIPLY") {
            ll l, r, x;
            cin >> l >> r >> x;
            ll m = getmask(x);
            set_mul(l-1, r, x, m, 0, N, 0);
        }else {
            ll l, r;
            cin >> l >> r;
            cout << gettot(l-1, r) << endl;

        }
    }
}
