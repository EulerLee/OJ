#include <iostream>
#include <string>
#include <vector>
#include <string>
#include <cstring>
#include <map>
#include <set>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <unordered_set>
using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    int n = s.size();
    vector<int> dp(1<<20);
    for(int i = 0; i < n; ++i) {
        int msk = 0;
        for(int j = i; j < n; ++j) {
            int cur = s[j]-'a';
            if(msk&(1<<cur)) break;
            msk |= 1<<cur;
            dp[msk] = __builtin_popcount(msk);
        }
        //cout << i << ":\t" << msk << " " << __builtin_popcount(msk) << endl;
        dp[msk] = __builtin_popcount(msk);
    }
    for(int i = 0; i < (1<<20); ++i) {
        for(int j = 0; j < 20; ++j) {
            if(i&(1<<j)) {
                dp[i] = max(dp[i], dp[i^(1<<j)]);
            }
        }
    }
    int ans = 0;
    for(int i = 0; i < (1<<20); ++i) {
        ans = max(ans, dp[i]+dp[i^((1<<20)-1)]);
    }
    cout << ans << endl;
}
