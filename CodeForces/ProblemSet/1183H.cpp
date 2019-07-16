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

const int MAXN = 110;
int lst[26][MAXN];
ll dp[MAXN][MAXN];

ll solve(int i, int j)
{
    if(i == -1) return 0;
    if(dp[i][j] != -1) return dp[i][j];
    if(j > i+1) return dp[i][j] = 0;
    if(j == 1) return dp[i][j] = 1;
    ll &res = dp[i][j];
    res = 0;
    REP(k, 26) {
        res += solve(lst[k][i-1], j-1);
    }
    return res;
}

int main()
{
    accelerate();

    ll n, k;
    string s;
    cin >> n >> k >> s;

    memset(dp, -1, sizeof dp);
    vector<int> pos(26, -1);
    REP(i, n) {
        pos[s[i]-'a'] = i;
        REP(j, 26) {
            lst[j][i] = pos[j];
        }
    }

    ll cnt = 1;
    ll ans = 0;
    RANGE(i, 1, n) {
        ll tmp = 0;
        REP(j, 26) {
            tmp += solve(lst[j][n-1], n-i);
        }
        //cout << i << ":\t" << tmp << endl;
        if(cnt + tmp <= k) {
            cnt += tmp;
            ans += tmp * i;
            if(cnt == k) {
                break;
            }
        }else {
            ans += (k - cnt)*i;
            cnt = k;
            break;
        }
    }
    if(cnt < k) {
        if(cnt + 1 < k)
            cout << -1 << endl;
        else
            cout << ans + n << endl;
    }else {
        cout << ans << endl;
    }
}
