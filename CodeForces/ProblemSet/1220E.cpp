#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <unordered_map>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <queue>
#include <set>
#include <stack>
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

const int MAXN = 2e5+10;
vector<int> G[MAXN];
ll W[MAXN];
int deg[MAXN];
ll ext[MAXN];

int main()
{
    accelerate();
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; ++i) {
        cin >> W[i];
    }
    for(int i = 0; i < m; ++i) {
        int x, y;
        cin >> x >> y;
        --x, --y;
        G[x].push_back(y);
        G[y].push_back(x);
        ++deg[x];
        ++deg[y];
    }
    int s;
    cin >> s;
    --s;

    stack<int> S;
    for(int i = 0; i < n; ++i) {
        if(G[i].size() == 1 && i != s) {
            S.push(i);
        }
    }
    while(!S.empty()) {
        int v = S.top();
        S.pop();
        deg[v] = 0;
        for(auto u: G[v]) {
            if(deg[u]) {
                --deg[u];
                ext[u] = max(ext[u], ext[v]+W[v]);
                if(deg[u] == 1 && u != s) {
                    S.push(u);
                }
            }
        }
    }
    ll res = 0;
    ll maxext = 0;
    for(int i = 0; i < n; ++i) {
        if(deg[i] != 0 || i == s) {
            res += W[i];
            maxext = max(maxext, ext[i]);
        }
    }
    cout << res+maxext << endl;
}
