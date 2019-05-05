#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;

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
    RANGE(t, 1, T+1) {
        int n, p;
        cin >> n >> p;
        vector<int> A(n);
        REP(i, n) {
            cin >> A[i];
        }
        sort(A.begin(), A.end());
        int pre = 0;
        int cur = 0;
        int ans = 0x3f3f3f3f;
        REP(i, n-p+1) {
            if(i == 0) {
                int la = A[0];
                RANGE(j, 1, p) {
                    pre += (A[j]-la)*j;
                    la = A[j];
                }
                ans = pre;
            }else {
                int cur = pre + (A[i+p-1]-A[i+p-2])*(p-1)-(A[i+p-2]-A[i-1]);
                ans = min(cur, ans);
                pre = cur;
            }
        }
        cout << "Case #" << t << ": " << ans << endl;
    }
}
