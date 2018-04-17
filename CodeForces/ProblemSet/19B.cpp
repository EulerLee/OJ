#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <cstdlib>
#include <set>
#include <queue>
#include <bitset>
#include <unordered_map>
#include <cstring>
using namespace std;
typedef long long ll;
typedef long double ld;
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
#define LOWBIT(x) ((x)&(-x))

struct Item{
    ll t;
    ll c;
    Item(ll t = 0, ll c = 0) : t(t), c(c) {}
};
ll dp[2001][2001];
vector<Item> items(2001);
ll INF = 0;
ll solve(ll n, ll m, ll max_n)
{
    if(n == max_n && m > 0) {
        return INF;
    }
    if(m <= 0) {
        return 0;
    }
    if(dp[n][m] != -1) {
        return dp[n][m];
    }
    dp[n][m] = min(solve(n+1, m-items[n].t-1, max_n) + items[n].c, solve(n+1, m, max_n));
    return dp[n][m];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    memset(dp, -1, sizeof dp);
    ll n;
    cin >> n;
    REP(i, n) {
        cin >> items[i].t >> items[i].c;
        INF += items[i].c;
    }
    cout << solve(0, n, n) << endl;
}
