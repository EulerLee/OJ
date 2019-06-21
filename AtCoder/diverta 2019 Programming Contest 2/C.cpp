#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<int> A(n);
    int cnt = 0;
    int ans = 0;
    for(int i = 0; i < n; ++i) {
        cin >> A[i];
        if(A[i] < 0) ++cnt;
        ans += abs(A[i]);
    }
    sort(A.begin(), A.end());
    if(cnt == n) {
        ans = ans + 2*A[n-1];
    }else if(cnt == 0) {
        ans = ans - 2*A[0];
    }
    cout << ans << endl;
    int l = 0, r = n-1;
    if(n-cnt <= 1) {
        int pre = A[n-1];
        for(int i = n-2; i >= 0; --i) {
            cout << pre << " " << A[i] << endl;
            pre -= A[i];
        }
    }else {
        if(n == 2) {
            cout << A[1] << " " << A[0] << endl;
            return 0;
        }
        cout << A[l] << " " << A[r] << endl;
        int pre = A[l] - A[r];
        --r;
        ++l;
        while(r > max(cnt, 1)) {
            cout << pre << " " << A[r] << endl;
            pre -= A[r];
            --r;
        }
        cout << A[max(cnt, 1)] << " " << pre << endl;
        pre = A[max(cnt, 1)] - pre;
        --r;
        while(l < cnt) {
            cout << pre << " " << A[l] << endl;
            pre -= A[l];
            ++l;
        }
    }
}
