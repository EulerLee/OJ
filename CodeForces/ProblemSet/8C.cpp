#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define RANGE(i, x, n) for(int i = x; i < n; ++i)
using namespace std;

const int MAXS = (1 << 24);
const int INF = 0x3f3f3f3f;
int dp[MAXS];
int sig[MAXS];
int dis[26][26];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    memset(sig, -1, sizeof sig);
    memset(dp, INF, sizeof dp);
    dp[0] = 0;
    int ox, oy;
    cin >> ox >> oy;
    vector<int> x, y;
    int n;
    cin >> n;
    int t1, t2;
    REP(i, n) {
        cin >> t1 >> t2;
        x.push_back(t1);
        y.push_back(t2);
    }
    REP(i, n) {
        RANGE(j, i, n) {
            dis[i][j] = (x[i] - x[j])*(x[i] - x[j]) + (y[i] - y[j])*(y[i] - y[j]);
            dis[j][i] = dis[i][j];
        }
    }
    REP(i, n) {
        dis[i][n + 1] = (x[i] - ox)*(x[i] - ox) + (y[i] - oy)*(y[i] - oy);
        dis[n + 1][i] = dis[i][n + 1];
    }
    int state = 0;
    while(state != (1<<n) - 1) {
        REP(i, n) {
            if((state & (1<<i)) == 0) {
                int tmpc = dp[state] + dis[n+1][i] * 2;
                if(tmpc < dp[state | (1<<i)]) {
                    dp[state|(1<<i)] = tmpc;
                    sig[state|(1<<i)] = state;
                }
                int ns = state | (1 << i);
                RANGE(j, i + 1, n) {
                    if((ns & (1<<j)) == 0) {
                        int tmpc = dp[state] + dis[n+1][i] + dis[i][j] + dis[j][n+1];
                        if(tmpc < dp[ns|(1<<j)]) {
                            dp[ns|(1<<j)] = tmpc;
                            sig[ns|(1<<j)] = state;
                        }
                    }
                }
                break;
            }
        }
        ++state;
    }
    cout << dp[(1<<n) - 1] << endl;
    state = (1<<n) - 1;
    vector<int> res(1, 0);
    while(state) {
        REP(i, n) {
            if((state & (1<<i)) != 0 && (sig[state] & (1<<i)) == 0) {
                res.push_back(i + 1);
            }
        }
        res.push_back(0);
        state = sig[state];
    }
    for(int i = res.size() - 1; i >= 0; --i) {
        cout << res[i];
        cout << (i != 0 ? ' ' : '\n');
    }
}