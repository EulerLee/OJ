#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
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
    ll sum = 0;
    REP(i, n) {
        cin >> A[i];
        sum += A[i];
    }
    int m;
    cin >> m;
    vector<int> Q(m);
    REP(i, m) {
        cin >> Q[i];
    }

    sort(A.begin(), A.end(), greater<int>());

    for(auto p: Q) {
        cout << sum-A[p-1] << endl;
    }
}
