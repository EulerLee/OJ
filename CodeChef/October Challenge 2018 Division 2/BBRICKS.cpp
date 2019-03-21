#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)

const ll MOD = 1e9+7;
ll dp[1001];
map<ll, ll> fact;

ll mod_inverse(ll a, ll m)
{
        ll x, y;
        extgcd(a, m, x, y);
        return (m + x&m)%m;
}

ll mod_fact(ll n, ll p, ll &e)
{
        e = 0;
        if(n == 0) return 1;
        ll res = mod_fact(n/p, p, e);
        e += n/p;

        if(n/p%2 != 0) return res * (p - fact[n%p])%p;
        return res * fact[n%p]%p;
}

ll mod_comb(ll n, ll k, ll p = 1e9+7)
{
        if(n < 0 || k < 0 || n < k) return 0;
        ll e1, e2, e3;
        ll a1 = mod_fact(n, p, e1),
        a2 = mod_fact(k, p, e2);
        a3 = mod_fact(n-k, p, e3);
        if(e1 > e2 + e3) return 0;
        return a1 * mod_inverse(a2 * a3 % p, p) % p;

}

ll count(ll N, ll d)
{
        ll res = 0;
        REP(i, d/2) {
                ll m = d-i;
                if(N-m+1 <= 0) continue;
                ll tmp = (N-m+1)*mod_comb(m, d-m)%MOD;
                res = (res + tmp)%MOD;
                if(m != d-m) {
                        res = (res + tmp)%MOD;
                }
        }
}

int main()
{
        int T;
        cin >> T;
        while(T--) {
                ll N, K;
                cin >> N >> K;
                int flag = 0;
                ll ans = mod_comb(2*N, K);
                RANGE(d, 2, K+1) {
                        ll tmp = (count(N, d) * mod_comb(2*N-d, K-d))%MOD;
                        if(flag == 1) {
                                ans += tmp;
                                ans %= MOD;
                        }else {
                                ans -= tmp;
                                ans %= MOD;
                        }
                }
                cout << ans << endl;
        }
}
