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
#include <tuple>
#include <queue>
#define PII pair<int, int>
#define T3I tuple<int, int, int>
using namespace std;

typedef long long ll;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int INF = 0x3f3f3f3f;
int n, m;
int G[21][21];
ll dp[1<<20];
ll sum[1<<20][20];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    string s;
    cin >> s;
    for(int i = 0; i < n-1; ++i) {
        int x = s[i]-'a';
        int y = s[i+1]-'a';
        if(x != y) {
            G[x][y]++;
            G[y][x]++;
        }
    }

    for(int msk = 1; msk < (1<<m); ++msk) {
        for(int i = 0; i < m; ++i) {
            int b = __builtin_ctz(msk);
            sum[msk][i] = sum[msk^(1<<b)][i] + G[b][i];
        }
    }

    memset(dp, INF, sizeof dp);
    dp[0] = 0;
    for(int msk = 0; msk < (1<<m); ++msk) {
        for(int i = 0; i < m; ++i) {
            if(msk&(1<<i)) continue;
            ll ctb = __builtin_popcount(msk)*(sum[msk][i] - sum[((1<<m)-1)^msk][i]);
            dp[msk|(1<<i)] = min(dp[msk|(1<<i)], dp[msk]+ctb);
        }
    }
    cout << dp[(1<<m)-1] << endl;
}
