#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, q;
    cin >> n >> q;
    vector<int> sum(n, 0);
    vector<<pair<int, int>> bd(n, make_pair(0, 0));
    REP(i, q) {
        cin >> bd[i].first >> bd[i].second;
        --bd[i].first, --bd[i].second;
        sum[l]++;
        sum[r+1]--;
    }
    RANGE(i, 1, n) {
        sum[i] += sum[i-1];
    }
    vector<int> cnt[n];
    REP(i, n) {
        cnt[i].resize(q);
        REP(j, q) {
            cnt[i][j] = (sum[i]>j?1:0)+(i==0?0:cnt[i-1][j]);
        }
    }
    int ans = 0;
    REP(i, n) {
        REP(j, n) {
            int l1 = bd[i].first;
            int r1 = bd[i].second;
            int l2 = bd[i].first;
            
        }
    }
}
