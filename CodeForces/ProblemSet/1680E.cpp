#include <iostream>
#include <vector>
#include <cstring>
#include <bitset>

using namespace std;

const int INF = 0x3f3f3f3f;
const int MAXN = 2e5+10;
int dp[MAXN][2];

void run()
{
    int n;
    cin >> n;
    string s[2];
    cin >> s[0] >> s[1];

    for(int i = 0; i <= n; ++i) {
        dp[i][0] = dp[i][1] = INF;
    }

    int flg = 0;
    int las = 0;
    dp[0][0] = dp[0][1] = 0;
    for(int i = 1; i <= n; ++i) {
        if(s[0][i-1] == '*' && s[1][i-1] == '*') {
            dp[i][0] = min(dp[i][0], dp[i-1][0] + flg + 1);
            dp[i][0] = min(dp[i][0], dp[i-1][1] + flg + 1);
            dp[i][1] = min(dp[i][1], dp[i-1][0] + flg + 1);
            dp[i][1] = min(dp[i][1], dp[i-1][1] + flg + 1);
            flg = 1;
            las = i;
        } else if(s[0][i-1] == '*') {
            dp[i][0] = min(dp[i][0], dp[i-1][0] + flg);
            dp[i][0] = min(dp[i][0], dp[i-1][1] + flg*2);
            dp[i][1] = min(dp[i][1], dp[i-1][1] + flg + 1);
            dp[i][1] = min(dp[i][1], dp[i-1][0] + flg + 1);
            flg = 1;
            las = i;
        } else if(s[1][i-1] == '*') {
            dp[i][0] = min(dp[i][0], dp[i-1][0] + flg + 1);
            dp[i][0] = min(dp[i][0], dp[i-1][1] + flg + 1);
            dp[i][1] = min(dp[i][1], dp[i-1][0] + flg * 2);
            dp[i][1] = min(dp[i][1], dp[i-1][1] + flg);
            flg = 1;
            las = i;
        } else {
            dp[i][0] = min(dp[i][0], dp[i-1][0] + flg);
            dp[i][0] = min(dp[i][0], dp[i-1][1] + flg*2);
            dp[i][1] = min(dp[i][1], dp[i-1][0] + flg*2);
            dp[i][1] = min(dp[i][1], dp[i-1][1] + flg);
        }
    }

    cout << min(dp[las][0], dp[las][1]) << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while(T--) {
        run();
    }
}