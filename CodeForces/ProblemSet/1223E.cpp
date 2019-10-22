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
#include <queue>
#include <unordered_set>
#define PILL pair<int, ll>
using namespace std;

typedef long long ll;

const int MAXN = 5e5+10;
int n, k;
vector<pair<int, int>> E[MAXN];
ll dp[MAXN][2];

void print_DFS(int v = 0, int pa = -1)
{
    cout << v+1 << ":\t" << dp[v][0] << " " << dp[v][1] << endl;
    for(auto e: E[v]) {
        int u = e.first;
        if(u != pa) print_DFS(u, v);
    }
}

void clac(int v = 0, int pa = -1)
{
    dp[v][0] = dp[v][1] = 0;
    auto cmp = [](const PILL &a, const PILL &b){return a.second < b.second;};
    priority_queue<PILL, vector<PILL>, decltype(cmp)> Q(cmp);
    for(auto e: E[v]) {
        int u = e.first;
        int w = e.second;
        if(u != pa) {
            clac(u, v);
            Q.emplace(u, dp[u][1]+w-dp[u][0]);
        }
    }
    int m = min(k-1, (int)E[v].size());
    while(m-- && !Q.empty()) {
        int u = Q.top().first;
        ll w = Q.top().second;
        if(w <= 0) break;
        Q.pop();
        dp[v][1] += dp[u][0]+w;
        dp[v][0] += dp[u][0]+w;
    }
    if(!Q.empty()) {
        int u = Q.top().first;
        ll w = Q.top().second;
        Q.pop();
        dp[v][1] += dp[u][0];
        dp[v][0] += dp[u][0]+(w>0? w : 0);
    }
    while(!Q.empty()) {
        int u = Q.top().first;
        ll w = Q.top().second;
        Q.pop();
        dp[v][1] += dp[u][0];
        dp[v][0] += dp[u][0];
    }
}


void solve()
{
    cin >> n >> k;
    for(int i=0; i<n; ++i) {
        E[i].clear();
    }
    for(int i=0; i<n-1; ++i) {
        int x, y, w;
        cin >> x >> y >> w;
        --x, --y;
        E[x].emplace_back(y, w);
        E[y].emplace_back(x, w);
    }
    clac();
    //print_DFS();
    cout << dp[0][0] << endl;
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
