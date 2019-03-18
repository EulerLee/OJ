#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll mod = 1e9 + 7;
int n, q;
ll A[400000*2+1];
ll mask[400000*2+1];
vector<ll> prime;

void cntprime()
{
    prime.push_back(2);
    vector<bool> isp(301, true);
    for(int i = 3; i < 300; i += 2) {
        if(isp[i]) {
            prime.push_back(i);
            for(int k = 2; k*i < 300; ++k) {
                isp[k*i] = false;
            }
        }
    }
}

void init(int n_)
{
    n = 1;
    while(n < n_) n *= 2;
    for(int i = 0; i < n; ++i) {
        A[i] = 0;
        mask[i] = 0;
    }
}

ll quickpow(ll x, ll n)
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

ll reverm(ll p)
{
    return quickpow(p, mod-2);
}

void update(int k, ll x)
{
    k += n-1;
    A[k] *= x;
    A[k] %= mod;
    ll maskx = 0;
    for(int i = 0; i < prime.size(); ++i) {
        if(x%prime[i] == 0) {
            maskx += 1<<i;
        }
    }
    for(int i = 0; i < prime.size(); ++i) {
        if(maskx&(1<<i) == 1 && mask[k]&&(1<<i) == 0) {
            A[k] = (A[k]*(prime[i]-1)%mod)*reverm(prime[i])%mod;
        }
    }
    mask[k] |= maskx;

    while(k > 0) {
        k = (k-1)>>1;
        A[k] *= x;
        A[k] %= mod;
        for(int i = 0; i < prime.size(); ++i) {
            if(maskx&(1<<i) == 1 && mask[k]&&(1<<i) == 0) {
                A[k] = (A[k]*(prime[i]-1)%mod)*reverm(prime[i])%mod;
            }
        }
        mask[k] |= maskx;
    }
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
