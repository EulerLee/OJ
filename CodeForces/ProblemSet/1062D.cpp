#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;

const int MAXN = 200010;
ll n;

ll createE()
{
    ll ans = 0;
    RANGE(i, 2, n+1) {
        for(int k = 2; k*i < n+1; ++k) {
            int j = k*i;
            ans += k*4;
        }
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    cout << createE() << endl;
}
