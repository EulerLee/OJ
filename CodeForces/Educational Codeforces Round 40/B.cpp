#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    if(n < 4) {
        cout << n << endl;
    }else {
        int len = 1;
        RANGE(i, 2, n/2 + 1) {
            string s1(s.begin(), s.begin() + i);
            string s2(s.begin() + i, s.begin() + 2*i);
            if(s1 == s2) {
                len = i;
            }
        }
        cout << n-len+1 << endl;
    }
}
