#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <cstring>
#include <algorithm>
#include <set>
#define REP(i, n) for(int i = 0;i < n; ++i)
#define RANGE(i, x, n) for(int i = x; i < n; ++i)
using namespace std;

int main()
{
    int n, m;
    char c;
    cin >> n >> m >> c;
    vector<string> g(n, "");
    REP(i, n) {
        cin >> g[i];
    }
    int x, y;
    REP(i, n) {
        REP(j, m) {
            if(g[i][j] == c) {
                x = i;
                y = j;
                goto out;
            }
        }
    }
out:
    int l = 0, w = 0;
    RANGE(i, y, m) {
        if(g[x][i] == c) {
            ++w;
        }else {
            break;
        }
    }
    RANGE(i, x, n) {
        if(g[i][y] == c) {
            ++l;
        }else {
            break;
        }
    }

    int ans = 0;
    set<char> col;
    col.insert('.');
    if(x - 1 >= 0) {
        REP(i, w) {
            if(col.find(g[x - 1][y + i]) == col.end()) {
                col.insert(g[x - 1][y + i]);
            }
        }
    }
    if(x + l < n) {
        REP(i, w) {
            if(col.find(g[x + l][y + i]) == col.end()) {
                col.insert(g[x + l][y + i]);
            }
        }
    }
    if(y - 1 >= 0) {
        REP(i, l) {
            if(col.find(g[x + i][y - 1]) == col.end()) {
                col.insert(g[x + i][y - 1]);
            }
        }
    }
    if(y + w < m) {
        REP(i, l) {
            if(col.find(g[x + i][y + w]) == col.end()) {
                col.insert(g[x + i][y + w]);
            }
        }
    }
    ans += col.size() - 1;
    cout << ans << endl;
}
