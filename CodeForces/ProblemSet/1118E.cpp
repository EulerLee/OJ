#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n, k;
    cin >> n >> k;
    if(n > k*(k-1)) {
        cout << "NO" << endl;
    }else {
        cout << "YES" << endl;
        int cnt = 0;
        RANGE(i, 1, k) {
            RANGE(j, 1, k+1) {
                cout << j << " " << (j+i-1)%k+1 << endl;
                ++cnt;
                if(cnt == n) {
                    return 0;
                }
            }
        }
    }
}
