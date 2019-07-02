#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define RANGE(i, x, n) for(int i = x; i < n; ++i)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int INF = 0x3f3f3f3f;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

const int MAXN = 2e5+10;
const int MOD = 998244353;
vector<int> E[MAXN];
ll ans = 1;

ll fact(ll n)
{
    if(n == 0) return 1;
    else return n*fact(n-1)%MOD;
}

void DFS(int v = 0, int p = -1)
{
    ans *= fact(E[v].size());
    ans %= MOD;
    for(auto u: E[v]) {
        if(u != p) {
            DFS(u, v);
        }
    }
}

int main()
{
    accelerate();
    ll n;
    cin >> n;
    REP(i, n-1) {
        int x, y;
        cin >> x >> y;
        --x, --y;
        E[x].push_back(y);
        E[y].push_back(x);
    }
    DFS();
    cout << n*ans%MOD << endl;
}
