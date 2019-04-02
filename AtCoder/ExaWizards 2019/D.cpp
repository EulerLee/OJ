#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

const int MAXN = 210;
const ll mod = 1e9+7;
ll X, N;
ll dp[MAXN][100005];
vector<ll> S;

ll quickpow(ll x, ll n)
{
    ll ans = 1;
    while(n) {
        if(n&1) {
            ans *= x;
            ans %= mod;
        }
        x *= x;
        x %= mod;
        n >>= 1;
    }
    return ans;
}

int main()
{
    accelerate();
    cin >> N >> X;
    S.resize(N);
    REP(i, N) {
        cin >> S[i];
    }
    sort(S.begin(), S.end(), greater<ll>());

    REP(i, N) {
        if(i == 0) {
            dp[i][X%S[0]] = 1ll;
            dp[i][X] += (N-1)%mod;
        }else {
            REP(cur, X+1) {
                dp[i][cur%S[i]] += dp[i-1][cur]%mod;
                dp[i][cur%S[i]] %= mod;
                dp[i][cur] += dp[i-1][cur]*(N-i-1ll)%mod;
                dp[i][cur] %= mod;
            }
        }
    }

    ll ans = 0;
    REP(rm, X+1) {
        ans += rm*dp[N-1][rm]%mod;
        ans %= mod;
    }
    cout << ans << endl;
}
