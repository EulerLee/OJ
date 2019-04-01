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
int n;
vector<int> C;
vector<int> E[300005];
int color[300005];
int vis[300005];
int dp[3][300005];
vector<int> fa;

int DFS(int v)
{
    if(vis[v]) return 0;
    vis[v] = 1;
    int col = C[v];
    for(auto x: E[v]) {
        if(vis[x] == 1) continue;
        fa[x] = v;
        int cur = DFS(x);
        if(cur == 0) {
            continue;
        }else if(cur == 1) {
            if(col == 0) col = 1;
            else if(col == 2) col = 3;
        }else if(cur == 2){
            if(col == 0) col = 2;
            else if(col == 1) col = 3;
        }else {
            col = 3;
        }
    }
    return color[v] = col;
}

int solve(int v, int c)
{
    if(dp[c][v] != 0) return dp[c][v];
    int ans = (C[v] == c);
    int cnt = 0;
    for(auto x: E[v]) {
        if(x == fa[v]) continue;
        ans += solve(x, c);
    }
    return dp[c][v] = ans;
}

int main()
{
    accelerate();
    cin >> n;
    C.resize(n);
    fa.resize(n);
    int cnt[3] = {0, 0, 0};
    REP(i, n) {
        cin >> C[i];
        cnt[C[i]]++;
    }
    REP(i, n-1) {
        int x, y;
        cin >> x >> y;
        --x, --y;
        E[x].push_back(y);
        E[y].push_back(x);
    }
    DFS(0);
    int ans = 0;
    REP(i, n) {
        if(color[i] == 1) {
            if(solve(i, 1) == cnt[1]) ++ans;
        }else if(color[i] == 2) {
            if(solve(i, 2) == cnt[2]) ++ans;
        }
    }
    cout << ans << endl;
}
