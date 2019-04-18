#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
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
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    string ans(n, ' ');
    int addon = 0;
    REP(i, n) {
        ans[i] = s[i] + t[i] - 'a'*2;
    }
    for(int i = n-1; i > 0; --i) {
        if(ans[i] >= 26) {
            ans[i] %= 26;
            ans[i-1] += 1;
        }
    }

    REP(i, n) {
        if(ans[i]%2) {
            ans[i+1] += 26;
        }
        ans[i] >>= 1;
        ans[i] += 'a';
    }
    cout << ans << endl;
}
