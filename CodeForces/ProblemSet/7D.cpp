#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <map>
#include <algorithm>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define RANGE(i, x, n) for(int i = x; i < n; ++i)
using namespace std;
typedef unsigned long long ull;

const int MAXN = 5e6;
int deg[MAXN];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    ull hi = s[0], hb = s[0];
    ull base = 1e8 + 7;
    ull B = base;
    deg[0] = 1;
    int ans = 1;
    RANGE(pos, 1, s.size()) {
        hi *= base;
        hi += s[pos];
        hb += s[pos] * B;
        B *= base;
        if(hi == hb) {
            deg[pos] = deg[(pos - 1) >> 1] + 1;
            ans += deg[pos];
        }
    }
    cout << ans << endl;
}
