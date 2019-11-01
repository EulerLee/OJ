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
#define PILL pair<int, ll>
#define T3I tuple<int, int, int>
#define X first
#define Y second
#define STA(a, b) min(a, b), max(a, b)
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> amt(n+1);
    map<int, vector<ll>> mp;
    for(int i = 0; i < n; ++i) {
        int m, p;
        cin >> m >> p;
        amt[m]++;
        mp[m].push_back(p);
    }
    for(int i = 0; i < n-1; ++i) {
        amt[i+1] += amt[i];
    }
    priority_queue<ll, vector<ll>, greater<ll>> Q;
    int cnt = 0;
    ll res = 0;
    auto it = mp.rbegin();
    for(; it != mp.rend(); ++it) {
        int m = it->X;
        auto arr = it->Y;
        for(auto x: arr) {
            Q.push(x);
        }
        int need = m-amt[m]+arr.size()-cnt;
        if(need > 0) {
            while(need--) {
                res += Q.top();
                Q.pop();
                ++cnt;
            }
        }
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
