#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <iostream>
#include <string>
#include <vector>
#include <string>
#include <cstring>
#include <map>
#include <set>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <unordered_set>
#include <unordered_map>
#include <tuple>
#include <queue>
#include <bitset>
#define PII pair<int, int>
#define T3I tuple<int, int, int>
using namespace std;

typedef long long ll;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int INF = 0x3f3f3f3f;

void run()
{
    int n;
    ll K;
    cin >> n >> K;
    vector<ll> A(n);
    for(int i = 0; i < n; ++i) {
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    vector<ll> S(n+1);
    for(int i = 0; i < n; ++i) {
        S[i+1] = S[i] + A[i];
    }

    ll ans = LLINF;
    for(int i = 0; i < n; ++i) {
        ll x = (S[n-i] + A[0]*i - K + i) / (i+1);
        x = max(x, 0ll);
        ans = min(ans, x+i);
    }
    cout << max(ans, 0ll) << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while(T--) {
        run();
    }
}