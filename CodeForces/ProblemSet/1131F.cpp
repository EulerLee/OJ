#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

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

const int MAXN = 150010;
int ran[MAXN], par[MAXN];
vector<int> ans[MAXN];
void init_dsu(int n)
{
    REP(i, n) {
        par[i] = i;
        ran[i] = 1;
        ans[i].push_back(i);
    }
}

int find_dsu(int x)
{
    if(par[x] == x) return x;
    return par[x] = find_dsu(par[x]);
}

void comb_dsu(int x, int y)
{
    x = find_dsu(x);
    y = find_dsu(y);
    if(x == y) return;
    if(ran[x] < ran[y]) {
        par[x] = y;
        ans[y].insert(ans[y].end(), ans[x].begin(), ans[x].end());
        ans[x].clear();
    }else {
        par[y] = x;
        ans[x].insert(ans[x].end(), ans[y].begin(), ans[y].end());
        ans[y].clear();
        if(ran[x] == ran[y]) {
            ++ran[x];
        }
    }
}

bool same_dsu(int x, int y)
{
    return find_dsu(x) == find_dsu(y);
}

int main()
{
    accelerate();
    int n;
    cin >> n;
    init_dsu(n);
    REP(i, n-1) {
        int x, y;
        cin >> x >> y;
        --x, --y;
        comb_dsu(x, y);
    }
    for(auto x: ans[find_dsu(0)]) cout << x+1 << " "; cout << endl;
}
