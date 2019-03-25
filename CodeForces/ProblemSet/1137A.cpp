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
    vector<vector<int>> A(n, vector<int>(m, 0));
    REP(i, n)
        REP(j, m) cin >> A[i][j];

    map<int, int> cntc[n];
    map<int, int> cntr[m];
    vector<int> cmax(n, 0);
    vector<int> rmax(m, 0);
    REP(i, n) {
        set<int> S;
        REP(j, m) {
            S.insert(A[i][j]);
            cmax[i] = max(cmax[i], A[i][j]);
        }
        int les = 1;
        for(auto e: S) {
            cntc[i][e] = les;
            ++les;
        }
    }
    REP(i, m) {
        set<int> S;
        REP(j, n) {
            S.insert(A[j][i]);
            rmax[i] = max(rmax[i], A[j][i]);
        }
        int les = 1;
        for(auto e: S) {
            cntr[i][e] = les;
            ++les;
        }
    }

    /*REP(i, n) cout << cmax[i] << endl;
    cout << endl;
    REP(i, m) cout << rmax[i] << endl;*/

    REP(i, n) {
        REP(j, m) {
            int x = cntc[i][A[i][j]];
            int y = cntr[j][A[i][j]];
            int mx = cntc[i][cmax[i]];
            int my = cntr[j][rmax[j]];
            int ans = x < y? max(mx+y-x, my): max(mx, my+x-y);
            cout << ans << " ";
        }
        cout << endl;
    }
}
