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

ll getDigitSumBased(ll A, ll base)
{
    if(A < base) {
        return A;
    }
    return getDigitSumBased(A/base, base) + A%base;
}

ll gcd(ll a, ll b)
{
    if(b%a == 0) {
        return a;
    }
    return gcd(b%a, a);
}

int main()
{
    ll A;
    cin >> A;
    ll ans = 0;
    RANGE(i, 2, A) {
        ans += getDigitSumBased(A, i);
    }
    ll c = gcd(A-2, ans);
    cout << ans/c << "/" << (A-2)/c << endl;
}
