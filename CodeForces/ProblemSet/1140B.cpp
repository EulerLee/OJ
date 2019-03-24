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

    int T;
    cin >> T;
    while(T--) {
        int n;
        string s;
        cin >> n >> s;
        int l, r;
        l = r = -1;
        REP(i, n) {
            if(s[i] == '>' && l == -1) {
                l = i;
            }
        }
        for(int i = n-1; i >= 0; --i) {
            if(s[i] == '<' && r == -1) {
                r = n-1-i;
            }
        }
        if(l == -1 || r == -1) {
            cout << 0 << endl;
        }else {
            cout << min(l, r) << endl;
        }
    }
}
