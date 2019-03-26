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
    int A[n][m];
    int B[n][m];

    REP(i, n) {
        REP(j, m) {
            cin >> A[i][j];
        }
    }
    REP(i, n) {
        REP(j, m) {
            cin >> B[i][j];
        }
    }

    REP(s, n+m-1) {
        unordered_map<int, int> cnt;
        REP(i, min(n, (int)s+1)) {
            int j = s-i;
            if(j >= m) continue;
            cnt[A[i][j]]++;
            cnt[B[i][j]]--;
        }
        for(auto x: cnt) {
            if(x.second != 0) {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;
}
