#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
ll dp[200001];
map<int, int> sum;
int n;
vector<int> C;

void input()
{
    cin >> n;
    int p = 0;
    for(int i = 0; i < n; ++i) {
        int c;
        if(i == 0) {
            cin >> c;
            C.push_back(c);
            ++p;
        }else {
            cin >> c;
            if(c != C[p-1]) {
                C.push_back(c);
                ++p;
            }
        }
    }
    n = C.size();
}

int solve()
{
    for(int i = 0; i < n; ++i) {
        if(i == 0) {
            dp[i] = 1;
            sum[C[i]] += dp[i];
        }else {
            dp[i] = dp[i-1];
            dp[i] += sum[C[i]];
            dp[i] %= mod;
            sum[C[i]] += dp[i-1];
            sum[C[i]] %= mod;
        }
    }
    return dp[n-1];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    input();
    cout << solve() << endl;
}
