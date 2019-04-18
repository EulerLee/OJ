#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int INF = 0x3f3f3f3f;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

const int MAXN = 2e5+10;
int vis[MAXN];
vector<int> G[MAXN];
vector<pair<int, int>> Edge;
int n, m;

bool DFS(int r, int v = 0)
{
    if(vis[v]) {
        if(vis[v] != r) return false;
        else return true;
    }
    vis[v] = r;
    for(auto u: G[v]) {
        if(!DFS(r == 1? 2 : 1, u)) return false;
    }
    return true;
}

void input()
{
    cin >> n >> m;
    Edge.resize(m);
    REP(i, m) {
        int x, y;
        cin >> x >> y;
        --x, --y;
        G[x].push_back(y);
        G[y].push_back(x);
        Edge[i] = make_pair(x, y);
    }
}

int main()
{
    accelerate();
    input();

    if(DFS(1)) {
        cout << "YES" << endl;
        REP(i, m) {
            int v = Edge[i].first;
            if(vis[v] == 1) {
                cout << 0;
            }else {
                cout << 1;
            }
        }
        cout << endl;
        return 0;
    }
    memset(vis, 0, sizeof vis);
    if(DFS(2)) {
        cout << "YES" << endl;
        REP(i, m) {
            int v = Edge[i].first;
            if(vis[v] == 1) {
                cout << 0;
            }else {
                cout << 1;
            }
        }
        cout << endl;
    }else {
        cout << "NO" << endl;
    }
}
