#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

void solve()
{
    int N, K;
    cin >> N >> K;
    vector<int> C(N);
    vector<int> D(N);
    REP(i, N) {
        cin >> C[i];
    }
    REP(i, N) {
        cin >> D[i];
    }
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    for(int ti = 1; ti <= T; ++ti) {
        cout << "Case #" << ti << ": ";
        solve();
    }
}
