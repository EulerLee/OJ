#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;

ll m;
vector<ll> prime;
ll dp[100001];

ll quickpow(ll x, ll n)
{
    ll ans = 1ll;
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
    return quickpow(a, mod-2);
}

void cntp()
{
    prime.push_back(2);
    vector<bool> p(m+1, true);
    for(int i = 3; i <= m; i += 2) {
        if(p[i]) {
            prime.push_back(i);
            for(int k = 2; k*i <= m; ++k) p[k*i] = false;
        }
    }
}

vector<ll> splitn(int n)
{
    vector<ll> res;
    for(int i = 0; i<prime.size()&&prime[i] <= n; ++i) {
        if(n%prime[i] == 0) {
            res.push_back(prime[i]);
            while(n%prime[i] == 0) n /= prime[i];
        }else if(prime[i]*prime[i] > n) {
            res.push_back(n);
            break;
        }
    }
    return res;
}



ll sum(vector<ll> &A, ll tmp)
{
    int n = (1<<A.size())-1;
    vector<int> cnt(A.size()+1, 0);
    for(int mask = n; mask > 0; --mask) {
        int ind = 0;
        int mul = 1;
        REP(k, A.size()) {
            if((mask>>k)&1) {
                ++ind;
                mul *= A[k];
            }
        }
        cnt[ind] += m/(mul*tmp);
    }
    ll res = 0;
    int flag = 1;
    for(int i = 1; i < cnt.size(); ++i) {
        res += flag * cnt[i];
        flag = -flag;
    }
    return m/tmp-res;
}

ll solve(ll k)
{
    if(k == 1) return 0;
    if(dp[k] != 0) return dp[k];
    auto v = splitn(k);
    int top = (1<<v.size())-1;
    ll mul = 1;
    for(auto x: v) {
        mul *= x;
    }
    if(mul == k) {
        ll res = sum(v, 1);
        for(int mask = top-1; mask > 0; --mask) {
            ll tmp = 1;
            vector<ll> A;
            REP(i, v.size()) {
                if((mask>>i)&1) {
                    tmp *= v[i];
                }else {
                    A.push_back(v[i]);
                }
            }
            res += sum(A, tmp)*(solve(tmp)+1ll)%mod;
        }
        res += m/mul;
        res %= mod;
        res = res*rev(m-(m/mul))%mod;
        return dp[k] = res;
    }else {
        return dp[k] = solve(mul);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> m;
    cntp();
    ll ans = 0;
    RANGE(i, 1, m+1) {
        ans += solve(i)+1ll;
        ans %= mod;
    }
    ans = ans * rev(m)%mod;
    cout << ans << endl;
}
