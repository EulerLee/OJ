#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")
// 拓扑排序
#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

const int MAXN = 1e5+10;
int n, m;
vector<int> G[MAXN];
vector<pair<int, int>> E(MAXN);

void input()
{
    cin >> n >> m;
    REP(i, m) {
        int x, y, w;
        cin >> x >> y >> w;
        --x, --y;
        G[x].push_back(i);
        E[i].first = y;
        E[i].second = w;
    }
}

int vis[MAXN];
bool DFS(int v, int W)
{
    if(vis[v] == 1) return false;
    vis[v] = 1;
    for(auto p: G[v]) {
        auto e = E[p];
        if(e.second <= W) continue;
        if(!DFS(e.first, W)) {
            return false;
        }
    }
    vis[v] = 2;
    return true;
}

bool able(int W)
{
    memset(vis, 0, sizeof vis);
    REP(i, n) {
        if(vis[i] == 0) {
            if(!DFS(i, W)) {
                return false;
            }
        }
    }
    return true;
}

vector<int> order(MAXN);
void DFS_order(int v, int W, int &t)
{
    vis[v] = 1;
    order[v] = t;
    ++t;
    for(auto p: G[v]) {
        auto e = E[p];
        if(e.second <= W) continue;
        DFS_order(e.first, W, t);
    }
}

vector<int> ans;
void DFS_ans(int v, int W)
{
    if(vis[v]) return;
    vis[v] = 1;
    for(auto p: G[v]) {
        auto e = E[p];
        if(e.second <= W) {
            if(order[v] > order[e.first]) {
                ans.push_back(p);
            }
        }else {
            DFS_ans(e.first, W);
        }
    }
}

int main()
{
    accelerate();
    input();
    int l = 0, r = 1e9;
    int m = (l+r)>>1;
    int ansW;
    if(able(0)) {
        ansW = 0;
    }else {
        while(r-l > 1) {
            if(able(m)) {
                r = m;
            }else {
                l = m;
            }
            m = (l+r)>>1;
        }
        ansW = r;
    }
    memset(vis, 0, sizeof vis);
    int t = 0;
    REP(i, n) {
        if(vis[i]) continue;
        DFS_order(i, ansW, t);
    }
    memset(vis, 0, sizeof vis);
    REP(i, n) {
        if(vis[i]) continue;
        DFS_ans(i, ansW);
    }
    cout << ansW << " " << ans.size() << endl;
    if(ans.size() > 0){
        for(auto x: ans) cout << x+1 << " "; cout << endl;
    }
}
