#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define RANGE(i, x, n) for(int i = x; i < n; ++i)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int INF = 0x3f3f3f3f;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

ll dp[20][1<<10][2];
ll cnt[20][1<<10][2];
const ll mod = 998244353;

ll quick_pow(ll x, ll n)
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

void init(int k)
{
    memset(dp, 0, sizeof dp);
    memset(cnt, 0, sizeof cnt);
    cnt[0][0][1] = 1;
    /*RANGE(n, 1, 20) {
        cnt[n][1] = 1;
    }*/
    REP(n, 19) {
        RANGE(m, 0, 1<<10) {
            if(__builtin_popcount(m) > k+1 || __builtin_popcount(m) > n) continue;
            if(m == 0 && n != 0) continue;
            //cout << n << " " << m << " " << cnt[n][m] << endl;
            REP(i, 10) {
                int m1 = m|(1<<i);
                if(i == 0) {
                    if(__builtin_popcount(m1) <= k) {
                        cnt[n+1][m1][1] += cnt[n][m][1]+cnt[n][m][0];
                        cnt[n+1][m1][1] %= mod;
                    }
                }else {
                    if(__builtin_popcount(m1)-1 <= k) {
                        if(m == 1) {
                            cnt[n+1][m1][0] += cnt[n][m][1];
                            cnt[n+1][m1][0] %= mod;
                        }
                        if(m&1) {
                            cnt[n+1][m1][0] += cnt[n][m][0];
                            cnt[n+1][m1][0] %= mod;
                        }
                    }
                    if(__builtin_popcount(m1) <= k) {
                        if(m != 1) {
                            cnt[n+1][m1][1] += cnt[n][m][1];
                            cnt[n+1][m1][1] %= mod;
                        }
                    }
                }
            }
        }
    }

    REP(n, 19) {
        REP(m, 1<<10) {
            if(__builtin_popcount(m) > k+1 || __builtin_popcount(m) > n) continue;
            REP(i, 10) {
                int m1 = (m|(1<<i));
                if(i == 0) {
                    if(__builtin_popcount(m1) <= k) {
                        dp[n+1][m1][1] += dp[n][m][0]*10%mod + dp[n][m][1]*10%mod;
                        dp[n+1][m1][1] %= mod;
                    }
                }else {
                    if(__builtin_popcount(m1)-1 <= k) {
                        if(m == 1) {
                            dp[n+1][m1][0] += dp[n][m][1]*10%mod + i*cnt[n][m][1]%mod;
                            dp[n+1][m1][0] %= mod;
                        }
                        if(m&1) {
                            dp[n+1][m1][0] += dp[n][m][0]*10%mod + i*cnt[n][m][0]%mod;
                            dp[n+1][m1][0] %= mod;
                        }
                    }
                    if(__builtin_popcount(m1) <= k) {
                        if(m != 1) {
                            dp[n+1][m1][1] += dp[n][m][1]*10%mod + i*cnt[n][m][1]%mod;
                            dp[n+1][m1][1] %= mod;
                        }
                    }
                }
            }
        }
    }
}

ll solve(ll top, int k)
{
    string t = to_string(top);
    int len = t.size();
    ll res = 0;
    REP(m, 1<<10) {
        if(dp[len-1][m][0]+dp[len-1][m][1] != 0)
        //cout << len-1 << " " << m << " " << dp[len-1][m][0] << " " << dp[len-1][m][1] << endl;
        res += dp[len-1][m][0]+dp[len-1][m][1];
        res %= mod;
    }
    //cout << res << endl;
    ll pre = 0;
    ll premask = 0;
    for(int j = 0; j < len; ++j) {
        int i = len-1-j;
        ll a = t[j]-'0';
        REP(u, a) {
            if(i == len-1 && u == 0) continue;
            int tmpmask = premask|(1<<u);
            //cout << u << ":\n";
            REP(m, 1<<10) {
                if(__builtin_popcount(tmpmask|m) <= k) {
                    //if(dp[i][m] == 0 && m != 1 && m != 0) continue;
                    //cout << i << " " << m << " " << cnt[i][m] << ": " << (pre*10+u)*quick_pow(10, i)%mod*cnt[i][m]%mod + dp[i][m] << endl;
                    res += (pre*10ll+u)*quick_pow(10, i)%mod*(cnt[i][m][0]+cnt[i][m][1])%mod + dp[i][m][0] + dp[i][m][1];

                    //cout << (pre*10+t)*quick_pow(10, i)%mod + dp[i][m] << endl;
                    res %= mod;
                }
            }
        }
        pre = pre*10 + a;
        premask |= (1<<a);
    }
    //cout << res << endl;
    return res;
}

int main()
{
    accelerate();
    ll l, r;
    int k;
    cin >> l >> r >> k;
    init(k);
    cout << (solve(r+1, k) - solve(l, k) + mod)%mod << endl;
    /*ll res = 0;
    ll len = 2;
    REP(m, 1<<10) {
        if(dp[len][m][0]+dp[len][m][1] != 0)
        cout << len << " " << m << " " << dp[len][m][0] << " " << dp[len][m][1] << " " << dp[len][m][0] + dp[len][m][1] << endl;
        res += dp[len][m][0]+dp[len][m][1];
        res %= mod;
    }*/
}
