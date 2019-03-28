#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;

int gcd(int a, int b)
{
    if(b == 0) return a;
    return gcd(b, a%b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<int> A(n, 0);
    vector<int> B(n, 0);
    map<pair<int, int>, int> cnt;
    REP(i, n) {
        cin >> A[i];
    }
    REP(i, n) {
        cin >> B[i];
    }
    int ans = 0;
    REP(i, n) {
        if(A[i] == 0) {
            if(B[i] == 0)
                ans++;
            continue;
        }
        int g = gcd(A[i], B[i]);
        cnt[make_pair(A[i]/g, B[i]/g)]++;
    }
    int me = 0;
    for(auto x: cnt) {
        me = max(x.second, me);
    }
    ans += me;
    cout << ans << endl;
}
