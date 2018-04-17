#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <cstdlib>
#include <set>
#include <queue>
#include <bitset>
using namespace std;
typedef long long ll;
typedef long double ld;
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
#define LOWBIT(x) ((x)&(-x))

int gcd(int a, int b)
{
    if(a == 0) return b;
    return gcd(b%a, a);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll a, b, x, y;
    cin >> a >> b >> x >> y;
    ll c1 = gcd(a, b);
    ll c2 = gcd(x, y);
    if(a/c1 == x/c2 && b/c1 == y/c2) {
        cout << a << " " << b << endl;
        return 0;
    }
    x /= c2;
    y /= c2;
    ll res = min(a/x, b/y);
    if(res == 0) {
        cout << "0 0" << endl;
    }else {
        cout << x*res << " " << y*res << endl;
    }
    return 0;
}
