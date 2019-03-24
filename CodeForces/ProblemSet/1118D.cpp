#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;

bool C(ll n, ll m, vector<ll> &A, ll a)
{
    if(a == 0) return false;
    ll sum = 0;
    ll dc = 0;
    REP(i, n) {
        if(i%a == 0 && i >= 1) ++dc;
        sum += max(A[i]-dc, 0ll);
    }
    return sum >= m;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n, m;
    cin >> n >> m;
    vector<ll> A(n, 0);
    ll sum = 0;
    REP(i, n) {
        cin >> A[i];
        sum += A[i];
    }
    if(sum < m) {
        cout << -1 << endl;
        return 0;
    }

    sort(A.begin(), A.end(), greater<ll>());
    ll l = 0, r = n;
    ll mid = (l+r)>>1;
    while(r-l > 1) {
        if(C(n, m, A, mid)) {
            r = mid;
        }else {
            l = mid;
        }
        mid = (l+r)>>1;
    }
    cout << r << endl;
}
