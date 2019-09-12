#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <unordered_map>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <queue>
using namespace std;
typedef long long ll;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

struct Edge{
    int x;
    int y;
    int w;
    Edge(int x = 0, int y = 0, int w = 0) : x(x), y(y), w(w) {}
    bool operator<(const Edge &r) const {
        return w > r.w;
    }
};

const int MAXN = 2e5+10;
vector<int> G[MAXN];
priority_queue<Edge> Q;

int par[MAXN], ran[MAXN];
int sum[MAXN];
void init(int n)
{
    for(int i = 0; i < n; ++i) {
        par[i] = i;
        ran[i] = 0;
        sum[i] = 1;
    }
}

int find(int x)
{
    if(x == par[x]) return x;
    return par[x] = find(par[x]);
}

void combine(int x, int y)
{
    x = find(x);
    y = find(y);
    if(x == y) return;
    if(ran[x] > ran[y]) {
        par[y] = x;
        sum[x] += sum[y];
    }else {
        par[x] = y;
        sum[y] += sum[x];
        if(ran[x] == ran[y]) {
            ++ran[y];
        }
    }
}

bool issame(int x, int y)
{
    return find(x) == find(y);
}

int main()
{
    accelerate();
    int n, m;
    cin >> n >> m;
    init(n);
    for(int i = 0; i < n-1; ++i) {
        int x, y, w;
        cin >> x >> y >> w;
        --x, --y;
        G[x].push_back(y);
        G[y].push_back(x);
        Q.push(Edge(min(x, y), max(x, y), w));
    }
    if(Q.empty()) {
        for(int i = 0; i < m; ++i) {
            int q;
            cin >> q;
            cout << 0 << " ";
        }
        cout << endl;
        return 0;
    }
    int cur = Q.top().w;
    vector<ll> res(MAXN, 0);
    ll tmp = 0;
    while(!Q.empty()) {
        auto e = Q.top();
        Q.pop();
        ll sl = sum[find(e.x)];
        ll sr = sum[find(e.y)];
        combine(e.x, e.y);
        ll sd = sum[find(e.x)];
        if(e.w == cur) {
            tmp += sd*(sd-1)/2 - sl*(sl-1)/2 - sr*(sr-1)/2;
        }else {
            res[cur] = tmp;
            tmp = sd*(sd-1)/2 - sl*(sl-1)/2 - sr*(sr-1)/2;
            cur = e.w;
        }
    }
    res[cur] = tmp;
    for(int i = 1; i < MAXN; ++i) {
        res[i] += res[i-1];
    }
    for(int i = 0; i < m; ++i) {
        int q;
        cin >> q;
        cout << res[q] << " ";
    }
    cout << endl;
}
