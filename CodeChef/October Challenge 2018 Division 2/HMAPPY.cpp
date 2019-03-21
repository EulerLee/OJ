#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)

bool satisfy(ll d, ll M, vector<ll> &C, vector<ll> &B)
{
        REP(i, C.size()) {
                if(B[i] == 0 || C[i] <= d) continue;
                ll tmp = (C[i] - d) / B[i];
                if((C[i] - d) % B[i] != 0) ++tmp;
                M -= tmp;
        }
        return M >= 0;
}

int main()
{
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        ll N, M;
        cin >> N >> M;
        vector<ll> A(N, 0);
        vector<ll> B(N, 0);
        REP(i, N) {
                cin >> A[i];
        }
        REP(i, N) {
                cin >> B[i];
        }
        vector<ll> C(N, 0);
        REP(i, N) {
                C[i] = A[i] * B[i];
        }

        ll low = -1;
        ll high = 1e18+1;
        ll mid = (low + high) / 2;
        while(high - low > 1) {
                if(satisfy(mid, M, C, B)) {
                        high = mid;
                }else {
                        low = mid;
                }
                mid = (low + high) / 2;
        }
        cout << high << endl;
}
