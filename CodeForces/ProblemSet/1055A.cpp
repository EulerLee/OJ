#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, s;
    cin >> n >> s;
    vector<int> A(n, 0);
    vector<int> B(n, 0);
    bool flag = false;
    bool trans = false;
    bool down = false;
    for(int i = 0; i < n; ++i) {
        cin >> A[i];
        if(A[i] == 1 && i == s-1) flag = true;
    }
    for(int i = 0; i < n; ++i) {
        cin >> B[i];
        if(B[i] == 1 && i == s-1) down = true;
        if(B[i] == 1 && A[i] == 1 && i+1 > s) trans = true;
    }
    if(down && trans) flag = true;
    if(flag && A[0] != 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}
