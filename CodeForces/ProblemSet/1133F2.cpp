#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;

const int MAXN = 2e5+10;
int n, m, D;
vector<int> E[MAXN];
int vis[MAXN];

int par[MAXN], ran[MAXN];
void init(int _n)
{
    REP(i, _n) {
        par[i] = i;
        ran[i] = 0;
    }
}

int find(int x)
{
    if(par[x] == x) return x;
    return par[x] = find(par[x]);
}

bool same(int x, int y)
{
    return find(x) == find(y);
}

void comb(int x, int y)
{
    x = find(x);
    y = find(y);
    if(x == y) return;
    if(ran[x] > ran[y]) {
        par[y] = x;
    }else {
        par[x] = y;
        if(ran[x] == ran[y]) {
            ++ran[y];
        }
    }
}

void input()
{
    cin >> n >> m >> D;
    REP(i, m) {
        int a, b;
        cin >> a >> b;
        --a, --b;
        E[a].push_back(b);
        E[b].push_back(a);
    }
}

void DFS(int v)
{
    vis[v] = 1;
    for(auto x: E[v]) {
        if(vis[x]) continue;
        comb(v, x);
        DFS(x);
    }
}

void printDFS(int v)
{
    cout << v+1 << endl;
    vis[v] = 1;
    for(auto x: E[v]) {
        if(vis[x]) continue;
        cout << v+1 << " ";
        printDFS(x);
    }
}


void solve()
{
    if(E[0].size() < D) {
        cout << "NO" << endl;
        return;
    }
    init(n);
    int cnt = 0;
    vis[0] = 1;
    RANGE(i, 1, n) {
        if(vis[i]) continue;
        ++cnt;
        DFS(i);
    }
    if(cnt > D) {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    vector<int> pv;
    int k = 0;
    for(auto x: E[0]) {
        if(!same(0, x)) {
            pv.push_back(x);
            comb(0, x);
        }else {
            if(k < D-cnt) {
                pv.push_back(x);
                ++k;
            }
        }
    }
    memset(vis, 0, sizeof vis);
    vis[0] = 1;
    for(auto x: pv) {
        vis[x] = 1;
    }
    for(auto x: pv) {
        cout << 1 << " ";
        printDFS(x);
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
