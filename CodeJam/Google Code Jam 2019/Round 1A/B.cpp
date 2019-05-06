#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define RANGE(i, x, n) for(int i = x; i < n; ++i)
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

ll quick_pow(ll x, ll n, ll mod)
{
    ll ans = 1;
    while(n) {
        if(n&1) {
            ans *= x;
            ans %= mod;
        }
        x *= x;
        x %= mod;
        n >>= 1;
    }
    return ans;
}

ll ext_gcd(ll a, ll b, int &x, int &y)
{
    if(b == 0) {
        x = 1;
        y = 0;
        return a;
    }else {
        ll res = ext_gcd(b, a%b, y, x);
        y -= a/b*x;
        return res;
    }
}

int solve()
{
    vector<int> query{3, 5, 7, 11, 13, 16, 17};
    vector<int> res(7);
    int M = 1;
    REP(i, 7) {
        M *= query[i];
        REP(j, 18) {
            cout << query[i] << " ";
        }
        cout << endl;
        cout.flush();
        REP(j, 18) {
            int tmp;
            cin >> tmp;
            res[i] += tmp;
        }
        res[i] %= query[i];
    }
    vector<int> rev(7);
    REP(i, 7) {
        rev[i] = quick_pow(M/query[i], query[i]-2, query[i]);
        int tmp;
        ext_gcd(query[i], M/query[i], tmp, rev[i]);
    }
    int ans = 0;
    REP(i, 7) {
        ans += 1ll*M/query[i]*rev[i]%M*res[i]%M;
        ans %= M;
    }
    ans = (ans+M)%M;
    cout << ans << endl;
    cout.flush();
    int flg;
    cin >> flg;
    if(flg == -1) return -1;
    else return 0;
}

int main()
{
    accelerate();
    int T, N, M;
    cin >> T >> N >> M;
    for(int t = 1; t <= T; ++t) {
        //cout << "Case #" << t << ": ";
        if(solve() == -1) return 0;
    }
}
