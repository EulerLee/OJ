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

const int MAXN = 2e5+10;
int par[MAXN], ran[MAXN];
int sum[MAXN];
int maxe[MAXN], mine[MAXN];

void init_dsj(int n_)
{
    for(int i = 0; i < n_; ++i) {
        par[i] = i;
        ran[i] = 0;
        sum[i] = 1;
        maxe[i] = mine[i] = i;
    }
}

int find_dsj(int x)
{
    if(par[x] == x) return x;
    return par[x] = find_dsj(par[x]);
}

void combine_dsj(int x, int y)
{
    x = find_dsj(x);
    y = find_dsj(y);
    if(x == y) return;
    if(ran[x] < ran[y]) {
        par[x] = y;
        sum[y] += sum[x];
        maxe[y] = max(maxe[y], maxe[x]);
        mine[y] = min(mine[y], mine[x]);
    }else {
        par[y] = x;
        sum[x] += sum[y];
        maxe[x] = max(maxe[x], maxe[y]);
        mine[x] = min(mine[x], mine[y]);
        if(ran[x] == ran[y]) {
            ++ran[x];
        }
    }
}

bool same_dsj(int x, int y)
{
    return find_dsj(x) == find_dsj(y);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    init_dsj(n);
    for(int i = 0; i < m; ++i) {
        int x, y;
        cin >> x >> y;
        --x, --y;
        combine_dsj(x, y);
    }
    int ans = 0;
    int i = 0;
    while(i < n) {
        int t = find_dsj(i);
        if(sum[t] == 1) {
            ++i;
            continue;
        }
        while(i < maxe[find_dsj(t)]) {
            if(find_dsj(i) != find_dsj(t)) {
                ++ans;
                combine_dsj(i, t);
            }
            ++i;
        }
        ++i;
    }
    cout << ans << endl;
}
