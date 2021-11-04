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
#include <bitset>
#define PII pair<int, int>
#define T3I tuple<int, int, int>
using namespace std;

typedef long long ll;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int INF = 0x3f3f3f3f;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int h, w, n;
    cin >> h >> w >> n;
    map<int, int> a2, b2;
    vector<PII> ans(n);
    for(int i = 0; i < n; ++i) {
        auto &a = ans[i].first;
        auto &b = ans[i].second;
        cin >> a >> b;
        a2[a] = 0;
        b2[b] = 0;
        
    }
    int cnt = 0;
    for(auto &e: a2) {
        e.second = ++cnt;
    }
    cnt = 0;
    for(auto &e: b2) {
        e.second = ++cnt;
    }

    for(auto e: ans) {
        cout << a2[e.first] << " " << b2[e.second] << endl;
    }
}