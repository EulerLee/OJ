#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define RANGE(i, x, n) for(int i = x; i < n; ++i)
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

int n, a, b;
string s;

const int MAXN = 5001;
int dp[MAXN];
int ZFun[MAXN];
int bef[MAXN][MAXN];
int sig[MAXN][MAXN];

void compute_ZFun(const string &s)
{
    int n = s.size();
    ZFun[0] = n;
    int L, R;
    L = R = 0;
    RANGE(i, 1, n) {
        if(i > R) {
            if(s[i] != s[0]) continue;
            ZFun[i] = 1;
            for(; i+ZFun[i] < n; ++ZFun[i]) {
                if(s[i+ZFun[i]] != s[ZFun[i]]) break;
            }
            L = i;
            R = i+ZFun[i]-1;
        }else {
            int k = i-L;
            if(ZFun[k] < R-i+1) {
                ZFun[i] = ZFun[k];
                continue;
            }else {
                ZFun[i] = R-i+1;
                for(; i+ZFun[i] < n; ++ZFun[i]) {
                    if(s[i+ZFun[i]] != s[ZFun[i]]) break;
                }
                L = i;
                R = i+ZFun[i]-1;
            }
        }
    }
}

int solve(int i)
{
    if(i < 0) return 0;
    if(dp[i] != 0) return dp[i];
    if(i == 0) return dp[i] = a;
    int &res = dp[i];
    res = solve(i-1) + a;
    REP(j, i+1) {
        if(bef[j][i]) {
            res = min(res, b + solve(j-1));
        }
    }
    return res;
}

int main()
{
    accelerate();

    cin >> n >> a >> b;
    cin >> s;

    string rs = "";
    REP(i, n) {
        rs = s[i] + rs;
        memset(ZFun, 0, sizeof ZFun);
        compute_ZFun(rs);
        int maxlen = 0;
        REP(j, i+1) {
            int k = i-j;
            int tmp = min(ZFun[j], j);
            if(tmp > maxlen) {
                RANGE(t, maxlen+1, tmp+1) {
                    bef[i-t+1][i] = 1;
                }
                maxlen = tmp;
            }
        }
    }

    /*REP(i, n) {
        RANGE(j, i, n) {
            if(bef[i][j]) {
                cout << i << " " << j << endl;
                cout << s.substr(i, j-i+1) << endl;
            }
        }
    }*/

    cout << solve(n-1) << endl;
}
