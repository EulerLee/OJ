#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <cstdlib>
#include <set>
#include <queue>
#include <bitset>
using namespace std;
typedef long long ll;
typedef long double ld;
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
#define LOWBIT(x) ((x)&(-x))

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<string> G(n, "");
    REP(i, n) {
        cin >> G[i];
    }

    ll row_sta, row_end, colwn_sta, colwn_end;
    row_sta = colwn_end = -1;
    colwn_sta = 100;
    REP(i, n) {
        bool useless = true;
        REP(j, m) {
            if(G[i][j] == '*') {
                useless = false;
                colwn_sta = min(colwn_sta, j);
                colwn_end = max(colwn_end, j);
            }
        }
        if(!useless) {
            if(row_sta == -1) {
                row_sta = i;
                row_end = i;
            }else {
                row_end = i;
            }
        }
    }

    RANGE(i, row_sta, row_end+1) {
        RANGE(j, colwn_sta, colwn_end+1) {
            cout << G[i][j];
        }
        cout << endl;
    }
}
