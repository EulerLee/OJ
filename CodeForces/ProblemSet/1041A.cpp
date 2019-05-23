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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin >> n;
    ll minn = 1e9 + 1;
    ll maxn = -1;
    ll tmp;
    REP(i, n) {
        cin >> tmp;
        minn = min(tmp, minn);
        maxn = max(tmp, maxn);
    }
    cout << maxn - minn + 1 - n << endl;
}
