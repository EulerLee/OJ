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
#define T3I tuple<int, int, int>
#define STA(a, b) min(a, b), max(a, b)
using namespace std;

typedef long long ll;

const int MAXN = 1e5+10;
const int INF = 0x3f3f3f3f;
int dp[MAXN];
int flg[MAXN];
int n, m;
vector<PII> A;

int solve(int k)
{

    if(k < 0) return 0;
    int &res = dp[k];
    if(res != -1) return res;
    if(flg[k]) return res = solve(k-1);
    if(k == 0) return res = 0;
    res = k;
    for(int i = 0; i < n; ++i) {
        if(A[i].first > k) break;
        int tmp = 0;
        int dis = k - A[i].first;
        int cost = dis - A[i].second < 0 ? 0 : dis - A[i].second;
        tmp = cost + solve(A[i].first-A[i].second-cost-1);
        res = min(res, tmp);
    }
    //cout << "dp[" << k << "]:\t" << dp[k] << endl;
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    memset(dp, -1, sizeof dp);
    cin >> n >> m;
    for(int i = 0; i < n; ++i) {
        int x, s;
        cin >> x >> s;
        A.emplace_back(x, s);
        if(x-s >= 0) {
            ++flg[x-s];
        }else {
            ++flg[0];
        }
        if(x+s+1 <= m) {
            --flg[x+s+1];
        }
    }
    for(int i = 1; i <= m; ++i) {
        flg[i] += flg[i-1];
    }
    auto cmp = [](PII x, PII y) {
        return x.first < y.first;
    };
    sort(A.begin(), A.end(), cmp);
    cout << solve(m) << endl;
}
