#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define RANGE(i, x, n) for(int i = x; i < n; ++i)
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

const int MAXN = 2e5+10;
int n;
vector<int> E[MAXN];
vector<int> a;
ll dp[MAXN];
ll sum[MAXN];
ll ans = 0;

void input()
{
    cin >> n;
    a.resize(n);
    REP(i, n) {
        cin >> a[i];
    }
    REP(i, n-1) {
        int x, y;
        cin >> x >> y;
        --x, --y;
        E[x].push_back(y);
        E[y].push_back(x);
    }
}

void DFS_cnt(int v = 0, int fa = -1)
{
    sum[v] += a[v];
    for(auto u: E[v]) {
        if(u != fa) {
            DFS_cnt(u, v);
            dp[v] += dp[u] + sum[u];
            sum[v] += sum[u];
        }
    }
}

void DFS(int v = 0, int fa = -1)
{
    if(fa == -1) {
        ans = max(ans, dp[v]);
    }else {
        dp[v] = dp[fa]-(dp[v]+sum[v])+(sum[0]-sum[v])+dp[v];
        ans = max(ans, dp[v]);
    }

    for(auto u: E[v]) {
        if(u != fa) {
            DFS(u, v);
        }
    }
}

int main()
{
    accelerate();
    input();
    DFS_cnt();
    DFS();
    cout << ans << endl;
}
