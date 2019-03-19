#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> A(n, 0);
    ll max1 = 0;
    ll max2 = 0;
    for(int i = 0; i < n; ++i) {
        cin >> A[i];
        if(i == 0) max1 = A[i];
        else if(i == 1) {
            max2 = A[i];
            if(max2 > max1) swap(max2, max1);
        }
        else {
            if(A[i] >= max1) {
                max2 = max1;
                max1 = A[i];
            }else if(A[i] > max2){
                max2 = A[i];
            }
        }
    }
    ll round = max1*k+max2;  // k+1
    ll ans = round*(m/(k+1)) + max1*(m%(k+1));
    cout << ans << endl;
}
