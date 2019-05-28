#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define RANGE(i, x, n) for(int i = x; i < n; ++i)
#define REG(x, y) make_pair(min(x, y), max(x, y))
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int INF = 0x3f3f3f3f;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

const ll mod = 998244353;
const int MAXN = 2e5+10;
int n;
vector<int> E[MAXN];
ll dp[MAXN][3];

ll quick_pow(ll x, ll n)
{
    ll ans = 1;
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

void DFS(int v = 0, int pa = -1)
{
    int cnt = 0;
    for(auto u: E[v]) {
        if(u != pa) {
            DFS(u, v);
            ++cnt;
        }
    }
    if(cnt == 0) {
        dp[v][0] = 0;
        dp[v][1] = 0;
        dp[v][2] = 1;
        return;
    }

    dp[v][0] = 1;
    dp[v][1] = 0;
    dp[v][2] = 1;
    ll tmp = 1;
    for(auto u: E[v]) {
        if(u != pa) {
            dp[v][0] *= (dp[u][0]+dp[u][2]);
            dp[v][0] %= mod;
            tmp = tmp*(dp[u][0]+dp[u][1]+dp[u][2])%mod;
        }
    }
    for(auto u: E[v]) {
        if(u != pa) {
            dp[v][1] += dp[v][0]*quick_pow((dp[u][0]+dp[u][2])%mod, mod-2)%mod*(dp[u][1]+dp[u][2])%mod;
            dp[v][1] %= mod;
            dp[v][2] *= ((dp[u][0]+dp[u][2])%mod + dp[u][1]+dp[u][2]%mod)%mod;
            dp[v][2] %= mod;
        }
    }
    dp[v][2] = ((dp[v][2]-dp[v][0])%mod-dp[v][1])%mod;
    dp[v][2] = (dp[v][2]+mod)%mod;
    //cout << v+1 << " :\t" << dp[v][0] << " " << dp[v][1] << " " << dp[v][2] << endl;
}

int main()
{
    accelerate();
    cin >> n;
    REP(i, n-1) {
        int p;
        cin >> p;
        --p;
        E[i+1].push_back(p);
        E[p].push_back(i+1);
    }
    DFS();
    cout << (dp[0][0]+dp[0][2])%mod << endl;
}
