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
using namespace std;

const int MAXN = 3e5+10;
int n;
vector<int> E[MAXN];
int dp[MAXN][2];

void DFS(int v, int pa)
{
    if(E[v].size() == 1) {
        dp[v][0] = 1;
        dp[v][1] = 0;
        return;
    }
    for(auto u: E[v]) {
        if(u != pa) {
            DFS(u, v);
        }
    }
    dp[v][1] = 0;
    dp[v][0] = 1;
    for(auto u: E[v]) {
        if(u != pa) {
            dp[v][1] = max(dp[v][1], dp[u][1]);
            dp[v][0] = max(dp[v][0], dp[u][0]);
        }
    }
    int max1 = dp[v][1];
    dp[v][1] += E[v].size()-1;
    int flg = 0;
    int max2 = 0;
    for(auto u: E[v]) {
        if(u != pa) {
            if(dp[u][1] == max1 && flg == 0) flg = 1;
            else if(dp[u][1] == max1 && flg == 1) {
                //dp[v][0] = max(dp[v][0], dp[v][0]*2 + (int)E[v].size()+1);
                //return;
                max2 = max1;
                break;
            }else {
                max2 = max(max2, dp[u][1]);
            }
        }
    }
    dp[v][0] = max(dp[v][0], max1 + max2 + (int)E[v].size()+1);
}

void solve()
{
    cin >> n;
    for(int i = 0; i < n; ++i) {
        E[i].clear();
    }
    for(int i = 0; i < n-1; ++i) {
        int x, y;
        cin >> x >> y;
        --x, --y;
        E[x].push_back(y);
        E[y].push_back(x);
    }
    int f = -1;
    for(int i = 0; i < n; ++i) {
        if(E[i].size() != 1) {
            DFS(i, -1);
            f = i;
            break;
        }
    }
    if(f == -1) cout << n << endl;
    else cout << max(dp[f][0], dp[f][1]) << endl;
    /*int ans = 0;
    for(int i = 0; i < n; ++i) {
        ans = max(ans, max(dp[i][0], dp[i][1]));
    }
    cout << ans << endl;*/
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int Q;
    cin >> Q;
    while(Q--) {
        solve();
    }
}
