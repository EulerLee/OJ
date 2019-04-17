#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

ll gcd(ll a, ll b)
{
    if(b == 0) return a;
    return gcd(b, a%b);
}

int main()
{
    accelerate();

    ll n, k, a ,b;
    cin >> n >> k >> a >> b;
    ll s = a;
    ll x = INF;
    ll y = 0;
    REP(i, n) {
        ll l = i*k+b - s;
        if(l < 0) l += n*k;
        ll tmp = n*k/gcd(n*k, l);
        x = min(x, tmp);
        y = max(y, tmp);
        l = i*k-b-s;
        if(l < 0) l += n*k;
        tmp = n*k/gcd(n*k, l);
        x = min(x, tmp);
        y = max(y, tmp);
    }

    s = k-a;
    REP(i, n) {
        ll l = i*k+b - s;
        if(l < 0) l += n*k;
        ll tmp = n*k/gcd(n*k, l);
        x = min(x, tmp);
        y = max(y, tmp);
        l = i*k-b-s;
        if(l < 0) l += n*k;
        tmp = n*k/gcd(n*k, l);
        x = min(x, tmp);
        y = max(y, tmp);
    }

    cout << x << " " << y << endl;
}
