#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define RANGE(i, x, n) for(int i = x; i < n; ++i)
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

ll dp[19][11];

ll solve(ll top, int k)
{
    string t = to_string(top);
    int len = t.size();
    for(int i = len-1; i >= 0; --i) {
        int rg =
    }
}

int main()
{
    accelerate();
    ll l, r;
    int k;
    cin >> l >> r >> k;
    cout << solve(r+1, k) - solve(l, k) << endl;
}
