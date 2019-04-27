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

ll quick_pow(ll x, ll n, ll mod)
{
    ll ans = 1%mod;
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

ll gcd(ll a, ll b)
{
    if(b == 0) return a;
    return gcd(b, a%b);
}

/*ll ext_gcd(ll a, ll b, ll &x, ll &y)
{
    if(b == 0) {
        x = 1;
        y = 0;
        return a;
    }else {
        ll res = ext_gcd(b, a%b, x, y);
        ll tmp = y;
        y = x-(a/b)*y;
        x = tmp;
        return res;
    }
}*/

ll ext_gcd(ll a, ll b, ll &u, ll &v)
{
        ll d = a;
        if(b != 0) {
                d = ext_gcd(b, a%b, v, u);
                v -= a/b*u;
        }else {
                u = 1;
                v = 0;
        }
        return d;
}

ll getx0(ll a, ll b, ll m)
{
    ll x, y;
    ext_gcd(a, m, x, y);
    return (-b*x%m+m)%m;
}

int main()
{
    accelerate();

    ll n, k;
    cin >> n >> k;
    vector<ll> A(n);
    vector<ll> S(n);
    REP(i, n) {
        cin >> A[i];
        ll tmp = A[i];
        while(tmp) {
            S[i]++;
            tmp /= 10;
        }
        S[i] = quick_pow(10, S[i], k);
        A[i] %= k;
    }

    vector<ll> sd(11);
    REP(i, 11) {
        sd[i] = quick_pow(10, i, k);
    }
    set<ll> D;
    REP(i, 10) {
        D.insert(gcd(k, sd[i+1]));
    }

    map<ll, map<ll, ll>> cnt;
    REP(i, n) {
        for(auto d: D) {
            cnt[d][A[i]%(k/d)]++;
        }
    }

    ll ans = 0;
    REP(i, n) {
        ll d = gcd(S[i], k);
        if(A[i]%d == 0) {
            ll x0 = getx0(S[i]/d, A[i]/d, k/d);
            ll m = k/d;
            ans += cnt[d][x0];
            if(A[i]%m == x0) ans--;
        }
    }
    cout << ans << endl;
}
