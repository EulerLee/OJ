#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <unordered_map>
#include <cstdlib>
#include <cstring>
#include <cmath>
using namespace std;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

const int MAXN = 5010;
vector<int> G[MAXN];
int vis[MAXN];
int n, m;
vector<int> res;
map<pair<int, int>, int> edgeindex;
int circled = 0;

void DFS(int v = 0)
{
    //cout << v << " " << color << endl;
    if(vis[v] != 0) {
        return;
    }
    vis[v] = 1;
    for(auto u: G[v]) {
        if(vis[u] == 1) continue;
        res[edgeindex[make_pair(v, u)]] = 1;
        DFS(u);
    }
    vis[v] = 2;
}

int main()
{
    accelerate();
    cin >> n >> m;
    res.resize(m);
    for(int i = 0; i < m; ++i) {
        int x, y;
        cin >> x >> y;
        --x, --y;
        G[x].push_back(y);
        edgeindex[make_pair(x, y)] = i;
    }
    for(int i = 0; i < n; ++i) {
        if(vis[i] == 0) DFS(i);
    }

    for(auto &x: res) {
        if(x == 0) {
            x = 2;
            circled = 1;
        }
    }
    cout << 1+circled << endl;
    for(auto x: res) cout << x << " "; cout << endl;

}
