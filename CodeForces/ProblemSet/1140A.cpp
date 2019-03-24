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

    int n;
    cin >> n;
    vector<int> A(n, 0);
    REP(i, n) {
        cin >> A[i];
        A[i]--;
    }

    int ans = 0;
    int maxu = -1;
    REP(i, n) {
        ++ans;
        maxu = max(maxu, A[i]);
        while(maxu > i) {
            ++i;
            maxu = max(maxu, A[i]);
        }
    }
    cout << ans << endl;
}
