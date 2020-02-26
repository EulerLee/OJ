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
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int INF = 0x3f3f3f3f;
const int MAXN = 1e5+1;
const int MAXQ = 3e5+1;

int n, m, k, q;
ll dst[MAXN];
vector<pair<int, ll>> E[MAXN];
struct Edge {
    ll a, b, w;
    Edge(int a = 0, int b = 0, ll w = 0) : a(a), b(b), w(w) {}
};
vector<Edge> es;

void djk(int n, int K)
{
    //fill(dst, dst+n, LLINF);
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> Q;
    for(int v = 0; v < n; ++v) {
        if(v >= K) {
            dst[v] = LLINF;
            continue;
        }
        dst[v] = 0;
        Q.push(pair<ll, int>(0, v));
    }
    while(!Q.empty()) {
        auto p = Q.top();
        Q.pop();
        int v = p.second;
        if(dst[v] < p.first) continue;
        for(auto e: E[v]) {
            int u = e.first;
            ll d = e.second;
            if(dst[u] > dst[v]+d) {
                dst[u] = dst[v] + d;
                Q.push(pair<ll, int>(dst[u], u));
            }
        }
    }
}

ll ans[MAXQ];
int par[MAXN];
int ran[MAXN];
int tok2v[2*MAXQ];
vector<int> v2tok[MAXN];

void init_dsj(int n)
{
    for(int i = 0; i < n; ++i) {
        par[i] = i;
        ran[i] = 1;
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
void unite(int x, int y, ll w)
{
    x = find(x);
    y = find(y);
    if(x == y) return;
    if(ran[x] > ran[y]) swap(x, y);

    for(auto tok: v2tok[x]) {
        int tk = tok^1;
        int qry = tok/2;
        int u = find(tok2v[tk]);
        if(u == y) {
            ans[qry] = w;
        }else {
            v2tok[y].push_back(tok);
        }
    }

    par[x] = y;
    ran[y] += ran[x];
    v2tok[x].clear();
    v2tok[x].shrink_to_fit();
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m >> k >> q;
    for(int i = 0; i < m; ++i) {
        int x, y;
        ll w;
        cin >> x >> y >> w;
        --x, --y;
        E[x].emplace_back(y, w);
        E[y].emplace_back(x, w);
        es.emplace_back(x, y, w);
    }
    djk(n, k);
    for(auto &e: es) {
        e.w += dst[e.a] + dst[e.b];
    }
    auto cmp = [](const Edge &a, const Edge &b) {
        return a.w < b.w;
    };
    sort(es.begin(), es.end(), cmp);
    init_dsj(n);
    for(int i = 0; i < q; ++i) {
        int x, y;
        cin >> x >> y;
        --x, --y;
        int tk1 = i*2, tk2 = i*2+1;
        tok2v[tk1] = x;
        tok2v[tk2] = y;

        v2tok[x].push_back(tk1);
        v2tok[y].push_back(tk2);
    }
    for(auto &e: es) {
        unite(e.a, e.b, e.w);
    }
    for(int i = 0; i < q; ++i) {
        cout << ans[i] << endl;
    }
}
