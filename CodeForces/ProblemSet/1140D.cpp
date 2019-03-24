#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll mod = 998244353;

ll dp[502][502];

ll solve(int a, int b)
{
    if(dp[a][b] != 0) return dp[a][b];
    if(b-a < 2) return 0;
    if(b-a == 2) return dp[a][b] = a*(a+1)*b;
    RANGE(k, a+1, b) {
        if(dp[a][b] == 0) {
            dp[a][b] = solve(a, k) + solve(k, b) + a*k*b;
        }else {
            dp[a][b] = min(dp[a][b], solve(a, k) + solve(k, b) + a*k*b);
        }
    }
    return dp[a][b];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;
    cout << solve(1, n) << endl;
}
