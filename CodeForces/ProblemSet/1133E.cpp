#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;

const ll MAXN = 5050;
ll dp[MAXN][MAXN];

vector<ll> A;
ll n, k;
vector<ll> cnt;
void input()
{
    cin >> n >> k;
    A.resize(n);
    REP(i, n) {
        cin >> A[i];
    }
}

ll mink(ll m, ll r)
{
    if(r <= 0) return 0;
    if(dp[m][r] != 0) return dp[m][r];
    if(r > m) return dp[m][r] = INF;
    if(r == 1) return dp[m][r] = 1;
    return dp[m][r] = min(mink(m-1, r), mink(m-cnt[m-1], r-cnt[m-1]) + 1);
}

ll solve()
{
    cnt.resize(n);
    map<ll, ll> cnt1;
    REP(i, n) {
        REP(j, 6) {
            cnt1[A[i]+j]++;
        }
    }
    for(int i = n-1; i >= 0; --i) {
        cnt[i] = cnt1[A[i]];
        cnt1[A[i]]--;
    }
    ll ans = 0;
    RANGE(i, 1, n+1) {
        if(mink(n, i) <= k) ans = i;
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    input();
    sort(A.begin(), A.end());
    cout << solve() << endl;
}
