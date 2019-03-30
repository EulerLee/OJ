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
    REP(i, n) {
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    vector<int> cnt(n);
    int l = 0, r = 0;
    while(l < n) {
        while(A[r]-A[l] <= 5) {
            if(r < n-1) {
                ++r;
            }else break;
        }
        cnt[l] = r-l;
        if(A[r]-A[l] <= 5) ++cnt[l];
        ++l;
    }
    int ans = 0;
    REP(i, n) {
        ans = max(ans, cnt[i]);
        --cnt[i];
    }
    cout << ans << endl;
}
