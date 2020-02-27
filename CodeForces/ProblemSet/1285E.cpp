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

unordered_map<int, int> lbc;

int count_origin_union(vector<PII> &S, int n)
{
    sort(S.begin(), S.end());
    int res = 1;
    int las = S[0].second;
    lbc[S[0].first] = 0;
    for(int i = 1; i < S.size(); ++i) {
        if(S[i].first > las) {
            ++res;
            lbc[S[i].first] = 0;
        }
        las = max(las, S[i].second);
    }
    return res;
}

void solve()
{
    lbc.clear();
    int n;
    cin >> n;
    vector<PII> S;
    vector<pair<int, pair<int, int>>> query;
    for(int i = 0; i < n; ++i) {
        int l, r;
        cin >> l >> r;
        S.push_back({l, r});
    }

    int init_res = count_origin_union(S, n);
    vector<int> ans(n, init_res);
    for(int i = 0; i < n; ++i) {
        query.push_back({S[i].first, {-1, i}});
        query.push_back({S[i].second, {1, i}});
    }
    for(auto x: S) {
        if(lbc.count(x.first)) lbc[x.first]++;
    }
    for(int i = 0; i < n; ++i) {
        if(lbc[S[i].first] == 1) ans[i]--;
    }
    sort(query.begin(), query.end());
    multiset<int> cur;
    //for(auto x: ans) cout << x << " "; cout << endl << endl;
    for(auto q: query) {
        int pos = q.first;
        int d = q.second.first;
        int ind = q.second.second;
        if(d == -1) {
            int pre = *cur.begin();
            if(cur.size() == 1 && S[pre].first != pos) {
                ans[pre]++;
            }
            cur.insert(ind);
        }else {
            cur.erase(cur.find(ind));
        }
    }
    //for(auto x: ans) cout << x << " "; cout << endl;
    cout << *max_element(ans.begin(), ans.end()) << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--) {
        solve();
    }
}
