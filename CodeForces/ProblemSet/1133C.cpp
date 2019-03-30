#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;

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
    vector<int> A(n);
    map<int, int> cnt;
    REP(i, n) {
        cin >> A[i];
        REP(j, 6) {
            cnt[A[i]-j]++;
        }
    }
    sort(A.begin(), A.end());
    int ans = 0;
    REP(i, n) {
        ans = max(ans, cnt[A[i]]);
        --cnt[A[i]];
    }
    cout << ans << endl;
}
