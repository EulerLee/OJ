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
ll n, k, A, B;
vector<ll> P;

ll solve(ll sta, ll end)
{
    auto itl = lower_bound(P.begin(), P.end(), sta);
    auto itr = upper_bound(P.begin(), P.end(), end-1);
    if(itl == itr) return A;
    if(end == sta + 1) return B*(itr-itl);
    return min(B*(itr-itl)*(end-sta), solve(sta, (end+sta)>>1) + solve((end+sta)>>1, end));
}

int main()
{
    accelerate();
    cin >> n >> k >> A >> B;
    P.resize(k);
    REP(i, k) {
        cin >> P[i];
    }
    sort(P.begin(), P.end());
    cout << solve(1, (1ll<<n) + 1) << endl;
}
