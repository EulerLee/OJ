#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
using namespace std;
typedef long long ll;
typedef long double ld;
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)

int main()
{
    ll x;
    cin >> x;
    x = abs(x);
    ll l = 0;
    ll r = 1e6;
    ll m = (l+r)>>1;
    while(r - l > 1) {
        if(2*x <= m*(m+1)) {
            r = m;
        }else {
            l = m;
        }
        m = (l+r)>>1;
    }
    ll tmp = ((r+1)*r)>>1;
    while((x - tmp)%2 != 0) {
        ++r;
        tmp = ((r+1)*r)>>1;
    }
    ll ans;
    if(x == 0) {
        ans = 0;
    }else {
        ans = r;
    }
    cout << ans << endl;
    //cout << r*(r+1)/2 << endl;
}
