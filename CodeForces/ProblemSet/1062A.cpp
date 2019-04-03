#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> A(n, 0);
    for(int i = 0; i < n; ++i) {
        cin >> A[i];
    }
    int sta, end;
    sta = 0;
    end = -1;
    int ans = 0;
    for(int i = 1; i < n; ++i) {
        if(A[i] == A[i-1] + 1) {
            end = i;
            if(i == n-1) {
                int tmp = end-sta-1;
                if(A[sta] == 1) {
                    ++tmp;
                }
                if(A[end] == 1000) ++tmp;
                ans = max(ans, tmp);
            }
        }else {
            int tmp = end - sta-1;
            if(A[sta] == 1) {
                ++tmp;
            }
            ans = max(ans, tmp);
            sta = i;
        }
    }
    cout << ans << endl;
}
