#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;

const int MAXN = 2e5+10;
int n, m;
vector<int> E[MAXN];

void input()
{
    cin >> n >> m;
    REP(i, m) {
        int a, b;
        cin >> a >> b;
        --a, --b;
        E[a].push_back(b);
        E[b].push_back(a);
    }
}

int vis[MAXN];
void DFS(int v)
{
    cout << v+1 << endl;
    vis[v] = 1;
    for(auto x: E[v]) {
        if(vis[x]) continue;
        cout << v+1 << " ";
        DFS(x);
    }
}

void solve()
{
    int sta = 0;
    int maxd = E[sta].size();
    RANGE(i, 1, n) {
        if(maxd < E[i].size()) {
            maxd = E[i].size();
            sta = i;
        }
    }
    vis[sta] = 1;
    for(auto x: E[sta]) {
        vis[x] = 1;
    }
    for(auto x: E[sta]) {
        cout << sta+1 << " ";
        DFS(x);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    input();
    solve();
}
