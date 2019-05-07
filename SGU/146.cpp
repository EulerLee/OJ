#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; ++i)
#define RANGE(i, x, n) for(int i = x; i < n; ++i)
typedef long long ll;
typedef long double ld;
const int INF = 0x3f3f3f3f;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    ld L;
    int N;
    cin >> L >> N;
    const int shift = 10000;
    int LI = L*shift;
    ll sum = 0;
    REP(i, N) {
        int x, y;
        cin >> x >> y;
        sum += 1ll*x*y*shift;
        sum %= LI;
    }
    int ans = min(sum, LI-sum);
    cout << (ans+0.0)/shift << endl;
}
