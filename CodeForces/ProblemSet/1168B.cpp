#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define RANGE(i, x, n) for(int i = x; i < n; ++i)
#define REG(x, y) make_pair(min(x, y), max(x, y))
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int INF = 0x3f3f3f3f;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    accelerate();
    string s;
    cin >> s;
    int n = s.size();
    ll ans = 0;
    REP(i, n) {
        RANGE(j, i+2, n) {
            for(int k = 1; j-2*k >= i; ++k) {
                if(s[j] == s[j-k] && s[j] == s[j-2*k]) {
                    ans += n-j;
                    goto next;
                }
            }
        }
next:
        continue;
    }
    cout << ans << endl;
}
