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
    int T;
    cin >> T;
    while(T--) {
        ll n, a, b;
        cin >> n >> a >> b;
        if(a*2 <= b) {
            cout << a*n << endl;
        }else {
            cout << b*(n/2) + a*(n%2) << endl;
        }
    }
}
