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

int main()
{
    accelerate();
    int n;
    cin >> n;
    int ans = 0;
    int pre = -1;
    int pp = -1;
    REP(i, n) {
        if(i == 0) cin >> pre;
        else {
            int cur;
            cin >> cur;
            if(cur != 1 && pre != 1) {
                cout << "Infinite" << endl;
                return 0;
            }else {
                if(cur == 2 || pre == 2) {
                    ans += 3;
                }else {
                    ans += 4;
                }
            }
            if(pp != -1) {
                if(pp == 3 && pre == 1 && cur == 2) {
                    --ans;
                }
            }
            pp = pre;
            pre = cur;
        }
    }
    cout << "Finite" << endl;
    cout << ans << endl;
    return 0;
}
