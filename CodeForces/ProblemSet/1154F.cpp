#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int INF = 0x3f3f3f3f;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int n, m, k;
const int MAXN = 2001;
ll dp[MAXN];
vector<ll> sum;
vector<int> offer;

int main()
{
    accelerate();

    cin >> n >> m >> k;
    vector<ll> a(n);
    REP(i, n) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    sum.resize(k+1);
    offer.resize(k+1);
    REP(i, k) {
        sum[i+1] = sum[i] + a[i];
    }

    REP(i, m) {
        int x, y;
        cin >> x >> y;
        if(x <= k) offer[x] = max(offer[x], y);
    }

    memset(dp, INF, sizeof dp);
    dp[0] = 0;
    REP(i, k) {
        for(int j = 1; i+j <= k; ++j) {
            dp[i+j] = min(dp[i+j], dp[i] + sum[i+j] - sum[i+offer[j]]);
        }
    }
    cout << dp[k] << endl;
}
