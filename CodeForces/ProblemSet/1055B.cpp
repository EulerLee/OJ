#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n, m, l;
    cin >> n >> m >> l;
    vector<ll> A(n, 0);
    vector<bool> isgre(n, false);
    int count = 0;
    for(int i = 0; i < n; ++i) {
        cin >> A[i];
        if(A[i] > l) isgre[i] = true;
    }
    ll ans = 0;
    int flag = 1;
    for(int i = 0; i < n; ++i) {
        if(isgre[i]) {
            if(flag) {
                ++ans;
                flag ^= 1;
            }
        }else {
            flag = 1;
        }
    }

    for(int i = 0; i < m; ++i) {
        int cmd;
        cin >> cmd;
        if(cmd == 0) {
            cout << ans << endl;
        }else {
            int p, d;
            cin >> p >> d;
            A[p-1] += d;
            if(A[p-1] < l || isgre[p-1]) {
                continue;
            }
            if(A[p-1] > l) {
                int index = p-1;
                if(index+1 < n && index-1 >= 0) {
                    if(isgre[index+1] && isgre[index-1]) {
                        --ans;
                        isgre[p-1] = A[p-1] > l;
                        continue;
                    }
                }
                if(index+1 < n) {
                    isgre[p-1] = A[p-1] > l;
                    if(isgre[index+1]) continue;
                }
                if(index-1 >= 0) {
                    isgre[p-1] = A[p-1] > l;
                    if(isgre[index-1]) continue;
                }
                isgre[p-1] = A[p-1] > l;
                ++ans;
            }

        }
     }
}
