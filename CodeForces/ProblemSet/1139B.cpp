#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;

const int MAXN = 2e5+1;
int n;
vector<ll> A(MAXN, 0);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    REP(i, n) {
        cin >> A[i];
    }
    ll ans = 0;
    int maxe = 1e9+7;
    for(int i = n-1; i >= 0; --i) {
        if(A[i] < maxe) {
            ans += A[i];
            maxe = A[i];
        }else {
            ans += maxe-1;
            maxe--;
        }
        if(maxe <= 1) break;
    }
    cout << ans << endl;
}
