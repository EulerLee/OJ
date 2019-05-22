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

ll quick_pow(ll x, ll n)
{
    ll ans = 1;
    while(n) {
        if(n&1) {
            ans *= x;
        }
        x *= x;
        n >>= 1;
    }
    return ans;
}



void solve()
{
    ll a, b, m;
    cin >> a >> b >> m;
    if(b < a) {
        cout << -1 << endl;
        return;
    }else if(b == a) {
        cout << "1 " << a << endl;
        return;
    }
    ll l = a+1, r = a+m;
    int n = 0;
    REP(i, 50) {
        if(b >= l && b <= r) {
            n = i+1;
            break;
        }
        if(b < l) break;
        r *= 2;
        l *= 2;
    }
    if(n == 0) {
        cout << -1 << endl;
        return;
    }
    r = b%quick_pow(2, n-1);
    ll k = b/quick_pow(2, n-1)-a;

    vector<ll> ri(n+1);
    ri[n] = k;
    for(int i = n-1; i > 0; --i) {
        ri[i] = k + ((r>>(n-1-i))&1);
    }
    //for(auto x: ri) cout << x << " "; cout << endl;
    cout << n+1 << " ";
    ll sum = a;
    cout << a << " ";
    REP(i, n) {
        cout << sum+ri[i+1] << " ";
        sum += sum+ri[i+1];
    }
    cout << endl;

    /*vector<ll> ans(n+1);
    ans[0] = a;
    ans[n] = b;
    ll pre = k;
    for(int i = n-1; i > 0; --i) {
        ll ri = k + ((r>>(n-1-i))&1);
        ans[i] = ans[i+1]-pre+ri;
        ans[i] >>= 2;
        pre = ri;
    }
    cout << n+1 << " ";
    for(auto x: ans) cout << x << " "; cout << endl;*/
}

int main()
{
    accelerate();
    int q;
    cin >> q;
    while(q--) {
        solve();
    }
}
