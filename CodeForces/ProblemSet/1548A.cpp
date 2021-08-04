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

    int n, m;
    cin >> n >> m;
    vector<int> gt(n);
    int res = n;
    for(int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        --u, --v;
        if(u > v) swap(u, v);
        ++gt[u];
        if(gt[u] == 1) --res;
    }
    int q;
    cin >> q;
    while(q--) {
        int cmd;
        cin >> cmd;
        if(cmd == 1) {
            int u, v;
            cin >> u >> v;
            --u, --v;
            if(u > v) swap(u, v);
            ++gt[u];
            if(gt[u] == 1) --res;
        }else if(cmd == 2) {
            int u, v;
            cin >> u >> v;
            --u, --v;
            if(u > v) swap(u, v);
            --gt[u];
            if(gt[u] == 0) ++res;
        }else {
            cout << res << endl;
        }
    }
}