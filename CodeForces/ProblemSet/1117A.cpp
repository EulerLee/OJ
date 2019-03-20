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
    int maxe = 0;
    for(int i = 0; i < n; ++i) {
        cin >> A[i];
        maxe = max(A[i], maxe);
    }
    int ans = 0;
    int len = 0;
    for(int i = 0; i < n; ++i) {
        if(A[i] == maxe) {
            ++len;
        }else {
            if(len > 0) {
                ans = max(ans, len);
                len = 0;
            }
        }
    }
    ans = max(ans, len);
    cout << ans << endl;
}
