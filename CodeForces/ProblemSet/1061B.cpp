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

    int n, m;
    cin >> n >> m;
    vector<int> A(n);
    ll sum = 0;
    REP(i, n) {
        cin >> A[i];
        sum += A[i];
    }
    sort(A.begin(), A.end(), greater<int>());
    int ans = 0;
    int pre = A[0];
    int cnt = 1;
    if(n==1) ans = pre;
    RANGE(i, 1, n) {
        if(A[i] >= pre) ++cnt;
        else {
            if(pre-A[i] > cnt) {
                ans += pre-A[i];
                pre = A[i];
            }else {
                ans += cnt;
                pre = max(pre - cnt, 0);
            }
            cnt = 1;
        }
        if(A[i] == 0) break;
        if(pre == 0) ++ans;
        if(i == n-1 && pre != 0) {
            ans += max(cnt, pre);
        }
    }
    cout << sum - ans << endl;
}
