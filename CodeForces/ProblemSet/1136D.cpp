#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    vector<int> p(n, 0);
    REP(i, n) {
        cin >> p[i];
        --p[i];
    }
    set<int> fw[n];
    REP(i, m) {
        int u, v;
        cin >> u >> v;
        fw[--v].insert(--u);
    }

    int id = p[n-1];
    int ans = 0;
    for(int i = n-1; i > 0; --i) {
        if(fw[p[i]].find(p[i-1]) != fw[p[i]].end()) {
            fw[p[i]].erase(p[i-1]);
            swap(p[i], p[i-1]);
            if(p[i-1] == id) {
                ++ans;
            }else {
                i += 2;
            }
        }
    }
    cout << ans << endl;
}
