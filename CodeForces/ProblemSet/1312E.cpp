#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

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
#include <unordered_map>
#include <tuple>
#include <queue>
#define PII pair<int, int>
#define PLL pair<ll, ll>
#define T3I tuple<int, int, int>
#define x first
#define y second
using namespace std;

typedef long long ll;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int INF = 0x3f3f3f3f;
const ll mod = 998244353ll;

const int MAX_N = 501;
int n;
vector<int> A;
int dp[MAX_N][MAX_N];
int dp2[MAX_N];

int solve(int i, int j)
{
    int &res = dp[i][j];
    if(res != 0) return res;
    if(j - i == 1) return res = A[i];
    for(int k = i+1; k < j; ++k) {
        int v = solve(i, k);
        if(v != -1 && v == solve(k, j)) {
            return res = v+1;
        }
    }
    return res = -1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    fill(dp2, dp2+n+1, INF);
    A.resize(n);
    for(int i = 0; i < n; ++i) {
        cin >> A[i];
    }
    for(int i = 0; i <= n; ++i) {
        if(i == 0) dp2[i] = 0;
        else {
            for(int j = i-1; j >= 0; --j) {
                if(solve(j, i) != -1) {
                    dp2[i] = min(dp2[i], dp2[j]+1);
                }
            }
        }
    }
    cout << dp2[n] << endl;
}
