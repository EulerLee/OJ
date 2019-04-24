#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    vector<int> X(4);
    REP(i, 4) {
        cin >> X[i];
    }
    sort(X.begin(), X.end());
    REP(i, 3) {
        cout << X[3] - X[i] << " ";
    }
    cout << endl;
}
