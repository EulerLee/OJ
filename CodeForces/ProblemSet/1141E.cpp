#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

bool suit(ll H, ll dec, ll maxd, ll m)
{
    if(dec*(m-1)+maxd >= H) return true;
    return false;

}

int main()
{
    accelerate();

    ll H, n;
    cin >> H >> n;
    vector<ll> D(n);
    REP(i, n) {
        cin >> D[i];
    }
    REP(i, n-1) {
        D[i+1] += D[i];
    }
    ll maxd = 0;
    REP(i, n) {
        maxd = max(maxd, -D[i]);
        if(D[i]+H <= 0) {
            cout << i+1 << endl;
            return 0;
        }
    }
    if(D[n-1] >= 0) {
        cout << -1 << endl;
        return 0;
    }
    ll dec = -D[n-1];
    ll l = 0, h = H/dec+1, m;
    m = (l+h)>>1;
    while(h-l > 1) {
        if(suit(H, dec, maxd, m)) {
            h = m;
        }else {
            l = m;
        }
        m = (l+h)>>1;
    }
    ll ans = l*n;
    H -= l*dec;
    REP(i, n) {
        if(D[i]+H <= 0) {
            cout << ans + i+1 << endl;
            return 0;
        }
    }
}
