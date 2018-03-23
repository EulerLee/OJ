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

    int ans = n;
    char pre = s[0];
    RANGE(i, 1, n) {
        if(s[i] != pre) {
            --ans;
            ++i;
            if(i < n) pre = s[i];
        }else {
            pre = s[i];
        }
    }
    cout << ans << endl;
}
