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
#include <bitset>
#define PII pair<int, int>
#define T3I tuple<int, int, int>
using namespace std;

typedef long long ll;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int INF = 0x3f3f3f3f;

const int MAXN = 2e5+10;
vector<int> E[MAXN];
ll sum[MAXN];
ll cnt[MAXN];
ll nb[MAXN];

void DFS(int v = 0)
{
    if(E[v].size() == 0) {
        cnt[v] = 1;
        return;
    }
    ll maxe = -1;
    for(auto u: E[v]) {
        DFS(u);
        sum[v] += sum[u];
        cnt[v] += cnt[u];
        maxe = max(maxe, nb[u]);
    }
    nb[v] = max(maxe, (sum[v]+cnt[v]-1)/cnt[v]);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    for(int i = 0; i < n-1; ++i) {
        int x;
        cin >> x;
        E[x-1].push_back(i+1);
    }
    for(int i = 0; i < n; ++i) {
        cin >> nb[i];
        sum[i] = nb[i];
    }
    DFS();
    cout << nb[0] << endl;
}
