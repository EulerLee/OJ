#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int INF = 0x3f3f3f3f;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

const int MAXN = 510;
int dp[MAXN][MAXN];
int n;
string s;

int solve(int i, int j)
{
    if(i > j) return 0;
    if(dp[i][j] != 0) return dp[i][j];
    dp[i][j] = 1 + solve(i+1, j);
    RANGE(k, i+1, j+1) {
        if(s[k] == s[i]) {
            dp[i][j] = min(dp[i][j], solve(i+1, k-1) + solve(k, j));
        }
    }
    return dp[i][j];
}

int main()
{
    accelerate();

    cin >> n >> s;
    cout << solve(0, n-1) << endl;
}
