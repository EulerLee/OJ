#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define RANGE(i, x, n) for(int i = x; i < n; ++i)
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

string a, l, r;
const ll mod = 998244353;
const int MAXN = 2e6+10;
ll dp[MAXN];
int L[MAXN], R[MAXN];
int ZFun[MAXN];

void compute_ZFun(const string &s)
{
    int n = s.size();
    ZFun[0] = n;
    int L, R;
    L = R = 0;
    RANGE(i, 1, n) {
        if(i > R) {
            if(s[i] != s[0]) continue;
            ZFun[i] = 1;
            for(; i+ZFun[i] < n; ++ZFun[i]) {
                if(s[i+ZFun[i]] != s[ZFun[i]]) break;
            }
            L = i;
            R = i+ZFun[i]-1;
        }else {
            int k = i-L;
            if(ZFun[k] < R-i+1) {
                ZFun[i] = ZFun[k];
                continue;
            }else {
                ZFun[i] = R-i+1;
                for(; i+ZFun[i] < n; ++ZFun[i]) {
                    if(s[i+ZFun[i]] != s[ZFun[i]]) break;
                }
                L = i;
                R = i+ZFun[i]-1;
            }
        }
    }
}

int main()
{
    accelerate();
    cin >> a >> l >> r;
    int n = a.size();
    int flg = 0;
    compute_ZFun(l+"$"+a);
    REP(i, n-(int)l.size()+1) {
        flg = 1;
        int j = (int)l.size()+1+i;
        int len = ZFun[j];
        L[i] = i+(int)l.size()-1;
        if(len < l.size()) {
            if(a[i+len] < l[len]) ++L[i];
        }
    }

    memset(ZFun, 0, sizeof ZFun);
    compute_ZFun(r+"$"+a);
    REP(i, n-(int)r.size()+1) {
        int j = r.size()+1+i;
        int len = ZFun[j];
        R[i] = i+r.size()-1;
        if(len < r.size()) {
            if(a[i+len] > r[len]) --R[i];
        }
    }
    RANGE(i, n-r.size()+1, n) R[i] = n-1;

    /*REP(i, n) {
        cout << i << ":\t" << L[i] << "\t" << R[i] << endl;
    }
    cout << endl;*/

    vector<ll> sum(n+2);
    dp[n] = 1;
    sum[1] = 1;
    for(int i = n-1; i >= 0; --i) {
        if(L[i] < i || L[i] > R[i] || (a[i] == '0' && L[i] != i)) {
            dp[i] = 0;
            sum[n-i+1] = sum[n-i];
        }else {
            if(a[i] == '0') {
                dp[i] = dp[i+1];
            }else {
                dp[i] = (sum[n-L[i]] - sum[n-R[i]-1] + mod)%mod;
            }
            sum[n-i+1] = (sum[n-i] + dp[i])%mod;
        }
        //cout << i << ":\t" << dp[i] << endl;
    }
    cout << flg*dp[0] << endl;
}
