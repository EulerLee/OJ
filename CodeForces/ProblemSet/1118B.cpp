#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    accelerate();
    int n;
    cin >> n;
    vector<int> A(n);
    REP(i, n) cin >> A[i];
    vector<int> even(n+1);
    vector<int> odd(n+1);
    REP(i, n) {
        if((i+1)%2 == 0) {
            even[i+1] += even[i] + A[i];
            odd[i+1] = odd[i];
        }else {
            odd[i+1] += odd[i] + A[i];
            even[i+1] = even[i];
        }
    }
    int ans = 0;
    REP(i, n) {
        ll n1 = odd[i] + even[n] - even[i+1];
        ll n2 = even[i] + odd[n] - odd[i+1];
        if(n1 == n2) ++ans;
    }
    cout << ans << endl;
}
