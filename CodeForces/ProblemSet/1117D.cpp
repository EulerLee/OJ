#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll mod = 1000000007;

ll n, m;
vector<vector<ll>> A(101, vector<ll>(101, 0));

vector<vector<ll>> multipy(vector<vector<ll>> &A, vector<vector<ll>> &B)
{
    vector<vector<ll>> ans(101, vector<ll>(101, 0));
    for(int i = 0; i < m; ++i) {
        for(int j = 0; j < m; ++j) {
            ll x = 0;
            for(int k = 0; k < m; ++k) {
                x += A[i][k]*B[k][j];
                x %= mod;
            }
            ans[i][j] = x;
        }
    }
    return ans;
}

vector<vector<ll>> quickpow(ll N)
{
    vector<vector<ll>> ans(101, vector<ll>(101, 0));
    for(int i = 0; i < 101; ++i) {
        ans[i][i] = 1;
    }
    while(N) {
        if(N&1) {
            ans = multipy(ans ,A);
        }
        A = multipy(A, A);
        N >>= 1;
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    if(n <= m) {
        cout << 1 + (n==m?1:0) << endl;
        return 0;
    }

    A[0][0] = A[0][m-1] = 1;
    for(int i = 1; i < m; ++i) {
        A[i][i-1] = 1;
    }

    A = quickpow(n-m);

    ll ans = A[0][0]*2%mod;
    for(int i = 1; i < m; ++i) {
        ans += A[0][i];
        ans %= mod;
    }
    cout << ans << endl;
}
