#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <iostream>
#include <string>
#include <vector>
#include <string>
#include <cstring>
#include <map>
#include <set>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <unordered_set>
#include <unordered_map>
#include <tuple>
#include <queue>
#include <bitset>
#define PII pair<int, int>
#define T3I tuple<int, int, int>
using namespace std;

typedef long long ll;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int INF = 0x3f3f3f3f;

const ll mod = 998244353;
ll dat[5001];

void init()
{
    dat[0] = 1;
    for(int i = 1; i < 5001; ++i) {
        dat[i] = dat[i-1]*i%mod;
    }
}

ll quickpow(ll x, ll n)
{
    ll res = 1;
    while(n) {
        if(n&1) {
            res = (res*x)%mod;
        }
        x = (x*x)%mod;
        n >>= 1;
    }
    return res;
}

ll solve(ll n, ll k)
{
    ll ans = quickpow(dat[k]*dat[n-k]%mod, mod-2)*dat[n]%mod;
    return (ans + mod -1) % mod;
}

void run()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> idx;
    ll ans = 1;
    for(int i = 0; i < n; ++i) {
        if(s[i] == '1') idx.push_back(i);
    }
    int m = idx.size();
    if(m < k || k == 0) {
        cout << ans << endl;
        return;
    }
    int sta = 0;
    int las = (m == k ? n-1 : idx[k]-1);
    ans += solve(las - sta + 1, k);
    ans %= mod;
    int id = 1;
    while(id + k -1 < m && id < m) {
        sta = idx[id-1] + 1;
        ans += mod - solve(las - sta + 1, k-1);
        ans %= mod;
        las = (id + k == m ? n-1 : idx[id+k]-1);
        ans += solve(las - sta + 1, k);
        ans %= mod;
        ++id;
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    init();
    run();
}