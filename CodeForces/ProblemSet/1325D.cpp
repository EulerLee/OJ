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
#include <tuple>
#include <queue>
#define PII pair<int, int>
#define T3I tuple<int, int, int>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int INF = 0x3f3f3f3f;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll u, v;
    cin >> u >> v;
    if(u>v || (u&1)!=(v&1)) {
        cout << -1 << endl;
        return 0;
    }
    if(u == 0 && v == 0) {
        cout << 0 << endl;
        return 0;
    }
    if(u == v) {
        cout << 1 << endl;
        cout << v << endl;
        return 0;
    }
    ll x = (v-u)/2;
    if((x|u) == x+u) {
        cout << 2 << endl;
        cout << u+x << " " << x << endl;
    }else {
        cout << 3 << endl;
        cout << u << " " << x << " " << x << endl;
    }
}
