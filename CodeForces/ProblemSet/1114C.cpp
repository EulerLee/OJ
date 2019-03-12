#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n, b;
    cin >> n >> b;
    map<ll, ll> px;
    for(ll i = 2; i <= b; ++i) {
        if(i*i > b) {   // whether b is prime
            px[b] = 1;
            break;
        }
        int cnt = 0;
        if(b%i == 0) {
            while(b%i == 0) {
                ++cnt;
                b /= i;
            }
            px[i] = cnt;
        }
    }

    ll ans = 1000000000000000000LL;
    for(auto ele: px) {
        ll p = ele.first;
        ll x = ele.second;
        //cout << p << " " << x << endl;
        ll y = 0;
        ll m = n;
        while(m) {
            y += (ll)floor((m+0.0)/p);
            m /= p;
        }
        ans = min(ans, y/x);
    }
    cout << ans << endl;
}
