#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll mod = 998244353;

ll quick(ll x, ll n)
{
    ll ans = 1;
    while(n) {
        if(n&1) {
            ans *= x;
            ans %= mod;
        }
        x *= x;
        x %= mod;
        n >>= 1;
    }
    return ans;
}

inline ll rev(ll a)
{
    return quick(a, mod-2);
}

ll solve(ll l, ll r, ll m, ll k)
{
    //cout << l << " " << r << " " << m << endl;
    if(l == 0 && r == 0) {
        if(m == 1) return k;
        else
            return quick(k-1, m-1)*k%mod;
    }else if(l*r == 0) {
        return quick(k-1, m);
    }
    ll b0 = k-2;
    ll b1 = k-1+(k-2)*(k-2)%mod;
    b1 %= mod;
    ll t = (b0+b1)*rev(k)%mod;
    ll s = (k-2-t)%mod;
    s = (s+mod)%mod;
    if(l != r) {
        ll ans = s*quick(-1, m-1)%mod + t*quick(k-1, m-1)%mod;
        ans = (ans+mod)%mod;
        return ans;
    }else {
        s++;
        ll ans = s*quick(-1, m-1)%mod + t*quick(k-1, m-1)%mod;
        ans = (ans+mod)%mod;
        return ans;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    /*ll a, b, l, K;
    while(1) {
        cin >> a >> b >> l >> K;
        cout << solve(a, b, l, K) << endl;
    }*/

    ll n, k;
    cin >> n >> k;

    vector<ll> A;
    vector<ll> B;
    REP(i, n) {
        ll tmp;
        cin >> tmp;
        if(i%2 == 0) {
            A.push_back(tmp);
        }else {
            B.push_back(tmp);
        }
    }
    ll ans = 1;

    n = A.size();
    REP(i, n-1) {
        if(A[i] != -1 && A[i] == A[i+1]) {
            cout << 0 << endl;
            return 0;
        }
    }
    ll len;
    int flag = 0;
    REP(i, n) {
        if(A[i] == -1) {
            if(flag) {
                ++len;
            }else {
                flag = 1;
                len = 1;
            }
            if(i == n-1) {
                int sta = i-len;
                if(sta < 0) sta = 0;
                else sta = A[sta];
                ans *= solve(sta, 0, len, k);
                ans %= mod;
            }
        }else {
            if(flag) {
                flag = 0;
                int sta = i-len-1;
                if(sta < 0) sta = 0;
                else sta = A[sta];
                ans *= solve(sta, A[i], len, k);
                ans %= mod;
            }
        }
    }

    n = B.size();
    //for(auto x: B) cout << x << " "; cout << endl;
    REP(i, n) {
        if(B[i] != -1 && B[i] == B[i+1]) {
            cout << 0 << endl;
            return 0;
        }
    }
    flag = 0;
    REP(i, n) {
        if(B[i] == -1) {
            if(flag) {
                ++len;
            }else {
                flag = 1;
                len = 1;
            }
            if(i == n-1) {
                int sta = i-len;
                if(sta < 0) sta = 0;
                else sta = B[sta];
                ans *= solve(sta, 0, len, k);
                ans %= mod;
            }
        }else {
            if(flag) {
                flag = 0;
                int sta = i-len-1;
                if(sta < 0) sta = 0;
                else sta = B[sta];
                ans *= solve(sta, B[i], len, k);
                ans %= mod;
            }
        }
    }
    cout << ans << endl;

}
