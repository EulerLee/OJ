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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, x0;
    cin >> n >> x0;
    int a, b;
    int minb = 1001;
    int maxa = -1;
    REP(i, n) {
        cin >> a >> b;
        if(a > b) {
            swap(a, b);
        }
        maxa = max(a, maxa);
        minb = min(b, minb);
    }
    int ans = 0;
    if(maxa > minb) {
        ans = -1;
    }else {
        ans = max(maxa - x0, x0 - minb);
        ans = max(0, ans);
    }
    cout << ans << endl;
}
