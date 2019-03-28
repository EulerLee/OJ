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
    vector<int> sum(n+1, 0);
    vector<pair<int, int>> bd(q, make_pair(0, 0));
    REP(i, q) {
        cin >> bd[i].first >> bd[i].second;
        --bd[i].first, --bd[i].second;
        sum[bd[i].first]++;
        sum[bd[i].second+1]--;
    }
    REP(i, n) {
        sum[i+1] += sum[i];
    }
    //REP(i, n) cout << sum[i] << " ";cout << endl;
    vector<int> cnt[n+1];
    REP(i, n+1) {
        cnt[i].assign(q, 0);
        if(i == 0) continue;
        REP(j, q) {
            cnt[i][j] = (sum[i-1]>j?1:0)+cnt[i-1][j];
        }
    }

    /*REP(j, q) {
        cout << j << ": ";
        RANGE(i, 1, n+1) {
            cout << cnt[i][j] << " ";
        }
        cout << endl;
    }*/

    int ans = 0;
    //cout << cnt[n][0] << endl;
    REP(i, q) {
        RANGE(j, i+1, q) {
            int l1 = bd[i].first;
            int r1 = bd[i].second;
            int l2 = bd[j].first;
            int r2 = bd[j].second;
            int g1 = (cnt[r1+1][0]-cnt[r1+1][1])-(cnt[l1][0]-cnt[l1][1])+(cnt[r2+1][0]-cnt[r2+1][1])-(cnt[l2][0]-cnt[l2][1]);
            int g2 = cnt[min(r1, r2)+1][1]-cnt[min(r1, r2)+1][2] - (cnt[max(l1, l2)][1]-cnt[max(l1, l2)][2]);
            int dec = g1 + (g2 > 0 ? g2: 0);
            ans = max(ans, cnt[n][0]-dec);
        }
    }
    cout << ans << endl;
}
