#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;

const ll maxe = 1000000ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll k;
    cin >> k;
    ll s = -1, l;
    int flag = 0;
    for(l = 1; l < 1999; ++l) {
        s = k+2+l;
        if(s%2 == 1) continue;
        s >>= 1;
        if(s <= l*maxe) {
            flag = 1;
            break;
        }
    }
    if(flag == 0) {
        cout << -1 << endl;
        return 0;
    }
    cout << l+2 << endl;
    cout << "1 -2 ";
    REP(i, l) {
        if(s > maxe) {
            cout << maxe << " ";
            s -= maxe;
        }else {
            cout << s << " ";
            s = 0;
        }
    }
    cout << endl;
}
