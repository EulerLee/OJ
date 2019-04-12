#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

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

const int MAXN = 5210;
int n;
vector<string> G(MAXN);

int dp[MAXN];

int check(int x)
{
    if(dp[x] != 0) return dp[x];
    if(x == 1) return dp[x] = 1;
    if(n%x != 0) return dp[x] = 2;

    int ori = x;
    for(int i = 2; i*i <= x; ++i) {
        if(x%i == 0) {
            if(check(i) == 2) return dp[ori] = 2;
            x/=i;
        }
    }
    int dvi = ori/x;
    if(x != 1) {
        REP(i, n/ori) {
            REP(j, n/ori) {
                int st = (G[i*ori][j*ori/4]>>(3-(j*ori)%4))&1;
                REP(k, x) {
                    REP(l, x) {
                        int x1 = i*ori+k*dvi;
                        int y1 = j*ori+l*dvi;
                        int v = (G[x1][y1/4]>>(3-y1%4))&1;
                        if(v != st) return dp[ori] = 2;
                    }
                }
            }
        }
        return dp[ori] = 1;
    }else {
        return dp[ori] = 1;
    }
}

int main()
{
    accelerate();
    cin >> n;
    REP(i, n) {
        cin >> G[i];
        for(auto &x : G[i]) {
            if('0' <= x && x <= '9') x -= '0';
            else x = x - 'A' + 10;
        }
    }
    int ans = 1;
    RANGE(x, 2, n+1) {
        if(check(x) == 1) {
            ans = x;
        }else {
            for(int k = 2; k*x <= n; ++k) {
                dp[k*x] = 2;
            }
        }
    }
    cout << ans << endl;
    /*if(n == 5200 && G[0][0] == 0) {
        cout << check(2) << endl;
        cout << check(13) << endl;
        cout << check(26) << endl;
    }*/
}
