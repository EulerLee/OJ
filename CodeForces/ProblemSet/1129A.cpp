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
    vector<int> D[n];
    vector<int> cnt(n, 0);
    REP(i, m) {
        int x, y;
        cin >> x >> y;
        ++cnt[x-1];
        D[x-1].push_back(y-1);
    }
    /*REP(i, n) {
        cout << cnt[i] << " ";
    }
    cout <<endl;*/
    REP(i, n) {
        int maxd = 0;
        REP(x, n) {
            if(D[x].size() == 0) {
                continue;
            }
            int mind = INF;
            for(auto y: D[x]) {
                int t = (y >= x? y-x: y-x+n);
                mind = min(t, mind);
            }
            int tmp = x-i;
            if(tmp < 0) {
                tmp += n;
            }
            tmp += (cnt[x]-1)*n;
            tmp += mind;
            maxd = max(maxd, tmp);
        }
        cout << maxd << " ";
    }
    cout << endl;
}
