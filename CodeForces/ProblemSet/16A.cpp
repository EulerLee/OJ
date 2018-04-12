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
    int n, m;
    cin >> n >> m;
    char prerow = 0;
    char cur;
    REP(i, n) {
        char precol;
        cin >> precol;
        if(precol == prerow) {
            cout << "NO" << endl;
            return 0;
        }
        RANGE(j, 1, m) {
            cin >> cur;
            if(cur != precol) {
                cout << "NO" << endl;
                return 0;
            }
        }
        prerow = precol;
    }
    cout << "YES" << endl;
    return 0;
}
