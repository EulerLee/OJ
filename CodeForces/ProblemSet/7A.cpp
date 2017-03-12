#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define RANGE(i, x, n) for(int i = x; i < n; ++i)
using namespace std;

int main()
{
    vector<string> g(8, "");
    REP(i, 8) {
        cin >> g[i];
    }
    string strb = "BBBBBBBB";
    int ans = 0;
    REP(i, 8) {
        if(g[i] == strb) {
            ++ans;
        }
    }
    REP(i, 8) {
        bool flag = true;
        REP(j, 8) {
            if(g[j][i] != 'B') {
                flag = false;
                break;
            }
        }
        if(flag) {
            ++ans;
        }
    }
    if(ans == 16) {
        ans = 8;
    }
    cout << ans << endl;
}
