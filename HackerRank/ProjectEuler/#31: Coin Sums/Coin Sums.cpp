#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cstdio>

using namespace std;

const int INF = 1e5 + 1;
const long long MOD = 1e9 + 7;
long long dp[8][INF];

int main()
{
    for(int i = 0; i!= INF; ++i){
        dp[7][i] = 1;
        dp[6][i] = i / 2 + 1;
        dp[5][i] = dp[6][i];
        if(i >= 5)
            dp[5][i] += dp[5][i - 5];
        dp[4][i] = dp[5][i];
        if(i >= 10)
            dp[4][i] = (dp[4][i] + dp[4][i - 10]) % MOD;
        dp[3][i] = dp[4][i];
        if(i >= 20)
            dp[3][i] = (dp[3][i] + dp[3][i - 20]) % MOD;
        dp[2][i] = dp[3][i];
        if(i >= 50)
            dp[2][i] = (dp[2][i] + dp[2][i - 50]) % MOD;
        dp[1][i] = dp[2][i];
        if(i >= 100)
            dp[1][i] = (dp[1][i] + dp[1][i - 100]) % MOD;
        dp[0][i] = dp[1][i];
        if(i >= 200)
            dp[0][i] = (dp[0][i] + dp[0][i - 200]) % MOD;
    }
	int T;
	scanf("%d", &T);
	while(T--){
		int N;
		scanf("%d", &N);
		printf("%lld\n", dp[0][N] % MOD);
	}
}


