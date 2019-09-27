#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <unordered_map>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <queue>
#include <set>
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

const int MAXN = 4e5+10;
ll nst[21][21];
int n;
vector<int> A;
ll dp[1<<20];

int main()
{
    accelerate();
    cin >> n;
    A.resize(n);
    vector<vector<ll>> cnt(n, vector<ll>(21));
    for(int i = 0; i < n; ++i) {
        cin >> A[i];
        if(i > 0) {
            for(int j = 1; j < 21; ++j) {
                cnt[i][j] = cnt[i-1][j];
            }
        }
        ++cnt[i][A[i]];
    }
    for(int i = 0; i < n; ++i) {
        for(int j = 1; j < 21; ++j) {
            if(j != A[i]) {
                nst[j][A[i]] += cnt[i][j];
            }
        }
    }

    for(int msk = 0; msk < (1<<20); ++msk) {
        dp[msk] = LLINF;
    }
    dp[0] = 0;
    for(int msk = 0; msk < (1<<20); ++msk) {
        vector<int> has;
        for(int i = 0; i < 20; ++i) {
            if((msk>>i)&1) {
                has.push_back(i);
            }
        }
        for(int i = 0; i < 20; ++i) {
            if((msk>>i)&1) {
                continue;
            }
            ll sum = 0;
            for(auto j: has) {
                sum += nst[i+1][j+1];
            }
            int nmsk = msk|(1<<i);
            dp[nmsk] = min(dp[nmsk], dp[msk]+sum);
        }
    }
    cout << dp[(1<<20)-1] << endl;
}
