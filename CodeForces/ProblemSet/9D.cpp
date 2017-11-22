#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <set>
#include <cstring>
typedef long long LL;
typedef long double LD;
#define RANGE(i, x, n) for(LL i = x; i < n; ++i)
#define REP(i, n) for(LL i = 0; i < n; ++i)
using namespace std;

LL dp[36][36];

LL solve(LL n, LL h)
{
    if(h < 0) {
        h = 0;
    }
    if(dp[n][h] != -1) {
        return dp[n][h];
    }
    if(n < h) {
        dp[n][h] = 0;
        return 0;
    }else if(n <= 1) {
        dp[n][h] = 1;
        return 1;
    }else {
        LL ans = 0;
        RANGE(i, 1, n+1) {
            LL ln = i-1;
            LL rn = n-i;
            LL lans = solve(ln, h-1);
            LL rans = solve(rn, h-1);
            LL lsum = solve(ln, 0);
            LL rsum = solve(rn, 0);
            ans += lans*rsum + rans*lsum - lans*rans;
        }
        dp[n][h] = ans;
        return ans;
    }
}

int main()
{
    memset(dp, -1, sizeof dp);
    LL n, h;
    cin >> n >> h;
    cout << solve(n, h) << endl;
}
