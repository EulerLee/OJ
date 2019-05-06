#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void solve(int R, int C)
{
    int n = R*C;
    vector<int> path(n);
    REP(i, n) {
        path[i] = i;
    }
    REP(k, 1000) {
        random_shuffle(path.begin(), path.end());
        int flg = 1;
        REP(i, n-1) {
            int x = path[i]/C;
            int y = path[i]%C;
            int j = i+1;
            for(; j < n; ++j) {
                int x1 = path[j]/C;
                int y1 = path[j]%C;
                if(x == x1 || y == y1 || x+y == x1+y1 || x-y == x1-y1) {
                    continue;
                }else {
                    break;
                }
            }
            if(j >= n) {
                flg = 0;
                break;
            }else {
                swap(path[i+1], path[j]);
            }
        }
        if(flg) {
            cout << "POSSIBLE" << endl;
            for(auto x: path) {
                int i = x/C;
                int j = x%C;
                cout << i+1 << " " << j+1 << endl;
            }
            return;
        }
    }
    cout << "IMPOSSIBLE" << endl;
}

int main()
{
    accelerate();
    int T;
    cin >> T;

    for(int t = 1; t <= T; ++t) {
        int R, C;
        cin >> R >> C;
        cout << "Case #" << t << ": ";
        solve(R, C);
    }

}
