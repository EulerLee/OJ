#include <iostream>
#include <cmath>
#include <string>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <map>
#include <unordered_map>
#include <unordered_set>
using namespace std;
typedef long long ll;
typedef long double ld;
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)

ll gcd(ll a, ll b)
{
    if(b == 0) return a;
    return gcd(b, a%b);
}

int main()
{
    ll a, b, x, y;
    cin >> a >> b >> x >> y;
    ll r = gcd(x, y);
    x /= r;
    y /= r;
    ll c = a/x;
    ll d = b/y;
    cout << min(c, d) << endl;
}
