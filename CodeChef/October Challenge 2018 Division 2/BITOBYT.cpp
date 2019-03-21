#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)

ll quick_pow(ll x, ll n)
{
        ll ans = 1;
        while(n) {
                if(n & 1) {
                        ans *= x;
                }
                x *= x;
                n >>= 1;
        }
        return ans;
}

int main()
{
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int T;
        cin >> T;
        while(T--) {
                ll N;
                cin >> N;
                ll a = N / 26;
                ll b = N % 26;
                if(b == 0) {
                        b = 26;
                        --a;
                }
                ll c = quick_pow(2, a);
                if(b <= 2) {
                        cout << c << " 0 0" << endl;
                }else if(b <= 10) {
                        cout << "0 " << c << " 0" << endl;
                }else {
                        cout << "0 0 " << c << endl;
                }
        }
}
