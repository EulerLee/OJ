#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <iostream>
#include <string>
#include <vector>
#include <string>
#include <cstring>
#include <map>
#include <set>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <unordered_set>
#include <unordered_map>
#include <tuple>
#include <queue>
#include <bitset>
#define PII pair<int, int>
#define T3I tuple<int, int, int>
using namespace std;

typedef long long ll;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int INF = 0x3f3f3f3f;

const int MAXN = 2e5+10;
ll L[MAXN], R[MAXN];
vector<int> E[MAXN];
ll dp[MAXN][2];

ll DFS(int v = 0, int pre = -1)
{
    int cnt = 0;
    dp[v][0] = dp[v][1] = 0;
    for(auto u: E[v]) {
        if(u != pre) {
            DFS(u, v);
            ++cnt;
            ll v00 = abs(L[v] - L[u]) + dp[u][0];
            ll v01 = abs(L[v] - R[u]) + dp[u][1];
            ll v10 = abs(R[v] - L[u]) + dp[u][0];
            ll v11 = abs(R[v] - R[u]) + dp[u][1];
            dp[v][0] += max(v00, v01);
            dp[v][1] += max(v10, v11);
        }
    }
    return max(dp[v][0], dp[v][1]);
}

void solve()
{
    memset(dp, 0, sizeof dp);
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> L[i] >> R[i];
        E[i].clear();
    }
    for(int i = 0; i < n-1; ++i) {
        int u, v;
        cin >> u >> v;
        --u, --v;
        E[u].push_back(v);
        E[v].push_back(u);
    }
    cout << DFS() << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while(T--) {
        solve();
    }
}