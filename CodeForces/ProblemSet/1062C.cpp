#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll MAXN = 1<<18;
const ll MOD = 1e9+7;
// [1, n]
ll BIT[MAXN + 1], N;
ll sum(ll i)
{
    ll s = 0;
    while(i > 0) {
        s += BIT[i];
        i -= i & -i;
    }
    return s;
}

void add(ll i, ll x)
{
    while(i <= N) {
        BIT[i] += x;
        i += i & -i;
    }
}

ll quickpow(ll x, ll n)
{
    ll ans = 1;
    while(n) {
        if(n&1) {
            ans *= x;
            ans %= MOD;
        }
        x *= x;
        x %= MOD;
        n >>= 1;
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n, q;
    cin >> N >> q;
    n = N;
    string s;
    cin >> s;
    for(ll i = 0; i < s.size(); ++i) {
        if(s[i] == '1') {
            add(i+1, 1);
        }
    }
    while(q--) {
        ll l, r;
        cin >> l >> r;
        ll k1 = sum(l-1);
        ll k2 = sum(r);
        ll k = k2-k1;
        ll N1 = r-l+1;
        if(k == 0) {
            cout << 0 << endl;
            continue;
        }
        ll ans = 1ll*(quickpow(2, k) - 1) * quickpow(2, N1 - k) % MOD;
        cout << ans << endl;
    }
}
