#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define REP(i, n) for(int i = 0; i < n; ++i)
#define RANGE(i, x, n) for(int i = x; i < n; ++i)

int dp[200][200][201];
int G[200][200];
int flag[200][200][201];
int INF = 0x3f3f3f3f;

int main()
{
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        memset(dp, -1, sizeof dp);
        int N, M;
        cin >> N >> M;
        REP(i, N) {
                string tmp;
                cin >> tmp;
                REP(j, M) {
                        G[i][j] = tmp[j]-'0';
                }
        }

        REP(x, N) {
                REP(y, M) {
                        RANGE(len, 1, min(N, M) + 1) {
                                if(x+len > N || y+len > M) {
                                        dp[x][y][len] = INF;
                                        continue;
                                }
                                if(len == 1) {
                                        dp[x][y][len] = 0;
                                        flag[x][y][len] = G[x][y];
                                }else {
                                        int res1 = 0;
                                        int sta = flag[x][y][len-1];
                                        sta = len%2 == 0 ? sta^1 : sta;
                                        REP(i, len) {
                                                if(G[x+i][y+len-1] != sta) {
                                                        ++res1;
                                                }
                                                sta ^= 1;
                                        }
                                        REP(i, len-1) {
                                                if(G[x+len-1][y+len-2-i] != sta) {
                                                        ++res1;
                                                }
                                                sta ^= 1;
                                        }
                                        res1 += dp[x][y][len-1];
                                        int res2 = len*len - res1;
                                        if(res1 <= res2) {
                                                flag[x][y][len] = flag[x][y][len-1];
                                                dp[x][y][len] = res1;
                                        }else {
                                                flag[x][y][len] = flag[x][y][len-1] ^ 1;
                                                dp[x][y][len] = res2;
                                        }
                                }
                        }
                }
        }
        /*REP(i, N) {
                REP(j, M) {
                        REP(len, 9) {
                                cout << i << ", " << j << ", " << len << ":\t" << dp[i][j][len] << endl;
                        }
                }
        }*/

        vector<int> ans(N*M+1, 0);
        REP(x, N) {
                REP(y, M) {
                        RANGE(len, 1, min(N, M) + 1) {
                                if(dp[x][y][len] > N*M) {
                                        continue;
                                }
                                ans[dp[x][y][len]] = max(ans[dp[x][y][len]], len);
                                //ans[solve(x, y, len, N, M)] = max(solve(x, y, len, N, M), len);
                        }
                }
        }
        RANGE(i, 1, N*M+1) {
                ans[i] = max(ans[i], ans[i-1]);
        }
        int Q;
        cin >> Q;
        while(Q--) {
                int c;
                cin >> c;
                if(c > N*M) {
                        cout << ans[N*M] << endl;
                }else {
                        cout << ans[c] << endl;
                }
        }
}
