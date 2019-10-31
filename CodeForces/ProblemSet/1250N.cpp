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
#define PII pair<int, int>
#define T3I tuple<int, int, int>
#define STA(a, b) min(a, b), max(a, b)
using namespace std;

typedef long long ll;
const int MAXN = 1e5+1;
const int INF = 0x3f3f3f3f;
unordered_map<int, vector<PII>> G;
unordered_map<int, int> dep;
unordered_map<int, int> vis;
unordered_map<int, int> cut;
map<PII, int> E;
vector<PII> res;
int cnt = 0;

int DFS(int v, int pa = -1, int depth = 0, int root = 1)
{
    if(vis[v] != 0) return dep[v];
    vis[v] = 1;
    if(root == 1) {
        ++cnt;
        //cout << v << endl;
    }
    dep[v] = depth;
    int actr = depth;
    int tot = 0;
    int edge = -1;
    for(auto e: G[v]) {
        int u = e.first;
        edge = e.second;
        if(u == pa) continue;
        if(vis[u] == 0) {
            int tmp = DFS(u, v, depth+1, 0);
            ++tot;
            actr = min(actr, tmp);
            if(root == 1 && tot > 1) cut[v] = 1;
            if(root == 0 && actr >= depth) cut[v] = 1;
        }else {
            actr = min(actr, dep[u]);
        }
    }
    vis[v] = 2;
    cut[v] = 0;
    if(res.size() < cnt) {
        res.emplace_back(edge, v);
    }
    return actr;
}

void solve()
{
    int n;
    cin >> n;
    G.clear();
    res.clear();
    vis.clear();
    cut.clear();
    dep.clear();
    cnt = 0;
    for(int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        --x, --y;
        G[x].emplace_back(y, i);
        G[y].emplace_back(x, i);
        vis[x] = vis[y] = 0;
        E[make_pair(STA(x, y))]++;
    }
    for(auto e: G) {
        int v = e.first;
        if(vis[v] == 0) DFS(v);
    }
    int ans = res.size()-1;
    cout << ans << endl;
    if(ans > 0) {
        int v = res[0].second;
        for(int i = 1; i < res.size(); ++i) {
            cout << res[i].first+1 << " " << res[i].second+1 << " " << v+1 << endl;
        }
    }
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
