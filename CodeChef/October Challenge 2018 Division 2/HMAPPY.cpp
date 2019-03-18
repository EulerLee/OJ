#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll N, M;
    cin >> N >> M;
    ll sum = 0;
    vector<ll> A(N, 0);
    vector<ll> B(N, 0);
    REP(i, N) {
        cin >> A[i];
        sum += A[i];
    }
    REP(i, N) {
        cin >> B[i];
    }
    vector<ll> C(N, 0);
    REP(i, N) {
        C[i] = A[i]*B[i];
    }
    
}
