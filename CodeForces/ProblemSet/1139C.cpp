#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;

const int MAXN = 1e5+1;
int par[MAXN];
int ran[MAXN];
void init(int n)
{
    REP(i, n) {
        par[i] = i;
        ran[i] = 0;
    }
}

int find(int x)
{
    if(par[x] == x) {
        return x;
    }else {
        return par[x] = find(par[x]);
    }
}

void unite(int x, int y)
{
    x = find(x);
    y = find(y);
    if(x == y) return;
    if(ran[x] < ran[y]) {
        par[x] = y;
    }else {
        par[y] = x;
        if(ran[x] == ran[y]) ran[x]++;
    }
}

bool same(int x, int y)
{
    return find(x) == find(y);
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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n, k;
    cin >> n >> k;
    init(n);
    REP(i, n-1) {
        int x, y, c;
        cin >> x >> y >> c;
        if(c == 0) {
            unite(x-1, y-1);
        }
    }

    map<int, ll> cnt;
    REP(i, n) {
        cnt[find(i)]++;
    }
    ll ans = 0;
    for(auto e: cnt) {
        ll x = e.second;
        if(x > 1) {
            ans += quickpow(x, k);
            ans %= mod;
        }else {
            ans++;
            ans %= mod;
        }
    }
    ans = quickpow(n, k) - ans;
    ans %= mod;
    if(ans < 0) ans += mod;
    cout << ans << endl;
}
