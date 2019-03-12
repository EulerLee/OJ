#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<ll> A(n, 0);
    for(int i = 0; i < n; ++i) {
        cin >> A[i];
    }
    vector<ll> B = A;
    sort(B.begin(), B.end(), greater<int>());
    multiset<ll> S;
    ll sum = 0;
    for(int i = 0; i < m*k; ++i) {
        sum += B[i];
        S.insert(B[i]);
    }
    cout << sum << endl;
    int subm = 0;
    int p = 0;
    for(int i = 0; i < n; ++i) {
        if(S.find(A[i]) != S.end()) {
            ++subm;
            S.erase(S.find(A[i]));
        }
        if(subm == m && p != k-1) {
            subm = 0;
            ++p;
            cout << i+1 << " ";
        }
    }
    cout << endl;
}
