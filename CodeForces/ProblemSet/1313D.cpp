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

const int MAXN = 1e5+1;
int dp[MAXN*2][1<<8];
int cnt[1<<8];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, k;
    cin >> n >> m >> k;
    vector<pair<int, PII>> Q;
    for(int i = 0; i < n; ++i) {
        int l, r;
        cin >> l >> r;
        Q.push_back({l, {-1, i}});
        Q.push_back({r, {1, i}});
    }
    sort(Q.begin(), Q.end());

    map<int, int> id2s;
    map<int, int> s2id;
    int pre = 0;
    for(int i = 0; i < int(Q.size()); ++i) {
        int d = Q[i].second.first;
        int ind = Q[i].second.second;
        int pos = Q[i].first;
        for(int msk = 0; msk < (1<<k); ++msk) {
            dp[i][msk] = (i > 0 ? dp[i-1][msk] : 0) + (cnt[msk]%2)*(pos - pre);
        }
        if(d == -1) {   // add
            int id = -1;
            for(int j = 0; j < k; ++j) {
                if(id2s.find(j) == id2s.end()) {
                    id2s[j] = ind, s2id[ind] = j, id = j;
                    break;
                }
            }
            for(int msk = 0; msk < (1<<k); ++msk) {
                if((msk>>id)&1) {
                    if(cnt[msk]%2) --dp[i][msk];
                    else ++dp[i][msk];
                }
            }
            cnt[1<<id] = 1;
        }else {         // erase
            int id = s2id[ind];
            for(int msk = 0; msk < (1<<k); ++msk) {
                dp[i][msk] = max(dp[i][msk], dp[i][msk^(1<<id)]);
            }
            s2id.erase(ind);
            id2s.erase(id);
            cnt[1<<id] = 0;
        }
        for(int msk = 0; msk < (1<<k); ++msk) {
            int minsub = ((msk^(msk-1))+1)>>1;
            int sub = msk^minsub;
            cnt[msk] = cnt[minsub] + cnt[sub];
        }
        pre = pos;
    }
    cout << dp[2*n-1][0] << endl;
    /*for(int i = 0; i < 2*n; ++i) {
        for(int j = 0; j <(1<<k); ++j) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    for(int i = 0; i < (1<<k); ++i) cout << cnt[i] << " "; cout << endl;
    */
}
