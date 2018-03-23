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
    ll n;
    cin >> n;
    vector<ll> a(n, 0);
    REP(i, n) {
        cin >> a[i];
    }

    ll x, y;
    x = y = 0;
    ll pre = a[0];
    ll maxa = a[0];
    RANGE(i, 1, n) {
        maxa = max(maxa, a[i]);
        if(a[i] > 1e9 || a[i] < 1) {
            cout << "NO" << endl;
            return 0;
        }
        if(abs(a[i] - pre) == 0) {
            cout << "NO" << endl;
            return 0;
        }
        if(abs(a[i] - pre) != 1) {
            y = abs(a[i] - pre);
        }
        pre = a[i];
    }
    if(y != 0) {
        x = ceil((maxa + 0.0)/ y);
        //check
        REP(i, n-1) {
            ll gap = abs(a[i] - a[i+1]);
            if(gap == 1) {
                if(min(a[i], a[i+1]) % y == 0) {
                    cout << "NO" << endl;
                    return 0;
                }
            }else {
                if(gap != y) {
                    cout << "NO" << endl;
                    return 0;
                }
            }
        }
    }else {
        x = 1;
        y = maxa;
    }
    cout << "YES" << endl << x << " " << y << endl;
    return 0;
}
