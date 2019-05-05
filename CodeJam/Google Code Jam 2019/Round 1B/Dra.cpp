#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

ull quickpow(ull x, ull n)
{
    ull ans = 1;
    while(n) {
        if(n&1) {
            ans *= x;
            //ans %= MOD;
        }
        x *= x;
        //x %= MOD;
        n >>= 1;
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll T, W;
    cin >> T >> W;
    for(ll ti = 1; ti <= T; ++ti) {
        vector<ull> x(6);
        cout << 56 << endl;
        cout.flush();
        ll v;
        cin >> v;
        x[0] = v/quickpow(2, 56);
        x[1] = (v - x[0]*quickpow(2, 56))/quickpow(2, 28);
        v = v%quickpow(2, 28);

        ll v1;
        cout << 225 << endl;
        cout.flush();
        cin >> v1;
        x[3] = v1/quickpow(2, 56);
        x[4] = v1%quickpow(2, 56)/quickpow(2, 45);
        x[5] = v1%quickpow(2, 45)/quickpow(2, 37);
        x[2] = v;
        x[2] = (v-quickpow(2, 14)*x[3]-quickpow(2, 11)*x[4]-quickpow(2, 9)*x[5])/quickpow(2, 18);
        //ld y = ((v-quickpow(2, 14)*x[3]-quickpow(2, 12)*x[4]-quickpow(2, 9)*x[5]+0.0)/quickpow(2, 18));

        for(int i = 0; i < 6; ++i) cout << x[i] << " ";
        cout << endl;
        cout.flush();
        int flg;
        cin >> flg;
        if(flg == -1) return 0;
    }
}
