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

int main()
{
    accelerate();

    ll n, k, m;
    cin >> n >> k >> m;
    vector<ll> A(n);
    REP(i, n) {
        cin >> A[i];
    }
    sort(A.begin(), A.end(), greater<ll>());
    ll maxe = A[0];
    double ans = 0;
    double sum = 0;
    REP(i, n) {
        ll cost = n-i-1;
        sum += A[i];
        double tmp;
        if(m-cost <= k*(i+1))
            tmp = (sum+m-cost)/(i+1);
        else {
            tmp = (sum + k*(i+1))/(i+1);
        }
        if(cost <= m) {
            ans = max(ans, tmp);
        }
    }
    cout << setprecision(10) << ans << endl;
}
