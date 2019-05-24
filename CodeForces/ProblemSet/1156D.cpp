#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define RANGE(i, x, n) for(int i = x; i < n; ++i)
#define REG(x, y) make_pair(min(x, y), max(x, y))
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
ll dp[MAXN][4];
ll ans;
int n;
vector<int> E[MAXN];
map<pair<int, int>, int> C;

void DFS(int v = 0, int fa = -1)
{
    for(auto u: E[v]) {
        if(u != fa) {
            DFS(u, v);
            if(C[REG(u, v)] == 0) {
                dp[v][0] += dp[u][0] + 1;
                dp[v][2] += dp[u][2] + dp[u][1];
            }else {
                dp[v][1] += dp[u][1] + 1;
                dp[v][3] += dp[u][3] + dp[u][0];
            }
        }
    }
    ans += 2*dp[v][0] + 2*dp[v][1] + dp[v][2] + dp[v][3];
    for(auto u: E[v]) {
        if(u != fa) {
            if(C[REG(u, v)] == 0) {
                // out
                ans += (dp[u][0]+1)*(dp[v][0] - dp[u][0]-1);
                ans += (dp[u][0]+1)*(dp[v][2] - (dp[u][2] + dp[u][1]) + dp[v][1]);
                // in
                //ans += (dp[u][0]+1)*(dp[v][0] - dp[u][0]-1);
            }else {
                // out
                ans += (dp[u][1]+1)*(dp[v][1] - dp[u][1]-1);
                ans += (dp[u][0] + dp[u][3])*(dp[v][1] - dp[u][1]-1);
                // in
                //ans += (dp[u][1]+1)*(dp[v][1] - dp[u][1]-1);
                //ans += (dp[u][1]+1)*(dp[v][0] + dp[v][3]-dp[u][3]-dp[u][0]);
            }
        }
    }
}

int main()
{
    accelerate();
    cin >> n;
    REP(i, n-1) {
        int x, y;
        cin >> x >> y;
        --x, --y;
        E[x].push_back(y);
        E[y].push_back(x);
        cin >> C[REG(x, y)];
    }
    DFS();
    cout << ans << endl;
    /*REP(i, n) {
        cout << i+1 << ":\t" << dp[i][0] << " " << dp[i][1] << " " << dp[i][2] << " " << dp[i][3] << endl;
    }*/
}
