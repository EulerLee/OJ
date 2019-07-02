#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define RANGE(i, x, n) for(int i = x; i < n; ++i)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int INF = 0x3f3f3f3f;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

ll solve_first(ll n, ll k, ll pre = -1)
{
    ll l, r;
    if(pre == -1) {
        l = 1, r = 1e9+1;
    }else {
        l = pre+1, r = 2ll*pre+1;
    }
    ll m = (l+r)>>1;
    while(r-l > 1) {
        if((2ll*m+k-1)*k/2 <= n) {
            l = m;
        }else {
            r = m;
        }
        m = (l+r)>>1;
    }
    if((2ll*l+k-1)*k/2 <= n) {
        if(k > 31) return l;
        else {
            ll top = l*((1ll<<k) - 1);
            if(n <= top) return l;
            else {
                return 0;
            }
        }
    }else {
        return 0;
    }
}

int main()
{
    accelerate();
    ll n, k;
    cin >> n >> k;
    vector<ll> ans(k);
    ll pre = -1;
    REP(i, k) {
        ll tmp = solve_first(n, k-i, pre);
        if(tmp == 0) {
            cout << "NO" << endl;
            return 0;
        }
        ans[i] = tmp;
        n -= tmp;
        pre = tmp;
    }
    cout << "YES" << endl;
    for(auto x: ans) cout << x << " "; cout << endl;
}
