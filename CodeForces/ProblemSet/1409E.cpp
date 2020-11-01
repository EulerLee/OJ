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
using namespace std;

typedef long long ll;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int INF = 0x3f3f3f3f;

void solve()
{
    int n, k;
    cin >> n >> k;
    map<int, int> cnt;
    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        ++cnt[x];
    }
    for(int i = 0; i < n; ++i) {
        int y;
        cin >> y;
    }

    vector<PII> A;
    for(auto e: cnt) {
        A.push_back(e);
    }
    int m = A.size();
    vector<int> R(m), L(m);
    int sta = 0;
    int sum = 0;
    for(int i = 0; i < m; ++i) {
        sum += A[i].second;
        while(A[i].first - A[sta].first > k) {
            sum -= A[sta].second;
            ++sta;
        }
        R[i] = sum;
        L[sta] = sum;
    }
    for(int i = sta+1; i < m; ++i) {
        L[i] = L[i-1] - A[i-1].second;
    }

    for(int i = 1; i < m; ++i) {
        R[i] = max(R[i-1], R[i]);
    }
    for(int i = m-2; i >= 0; --i) {
        L[i] = max(L[i+1], L[i]);
    }
    int res = max(L[0], R[m-1]);
    for(int i = 1; i < m; ++i) {
        res = max(res, R[i-1]+L[i]);
    }
    cout << res << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while(T--) {
        solve();
    }
}
