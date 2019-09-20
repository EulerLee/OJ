#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <unordered_map>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <queue>
#include <stack>
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

const int MAXN = 1010;
int dp[MAXN][51][51];
string c, s, t;
vector<int> nxt_s, nxt_t;

void get_nxt(string &s, vector<int> &nxt)
{
    int n = s.size();
    nxt.resize(n);
    nxt[0] = -1;
    for(int i = 1; i < n; ++i) {
        int j = nxt[i-1];
        while(j != -1 && s[j+1] != s[i]) {
            j = nxt[j];
        }
        if(s[j+1] == s[i]) {
            nxt[i] = j+1;
        }else {
            nxt[i] = -1;
        }
    }
}

void solve()
{
    int n = c.size();
    for(int i = 0; i <= n; ++i) {
        for(int ms = 0; ms < s.size()+1; ++ms) {
            for(int mt = 0; mt < t.size()+1; ++mt) {
                dp[i][ms][mt] = -INF;
            }
        }
    }
    dp[0][0][0] = 0;
    for(int i = 0; i < n; ++i) {
        for(int ms = 0; ms < s.size(); ++ms) {
            for(int mt = 0; mt < t.size(); ++mt) {
                if(dp[i][ms][mt] == -INF) continue;
                // reachable state
                if(c[i] == '*') {
                    for(int k = 0; k < 26; ++k) {
                        char ch = 'a'+k;
                        int dlt = 0;
                        int ns = ms-1, nt = mt-1;
                        while(ns != -1 && s[ns+1] != ch) {
                            ns = nxt_s[ns];
                        }
                        if(s[ns+1] == ch) {
                            ns = ns+2;
                        }else {
                            ns = 0;
                        }
                        while(nt != -1 && t[nt+1] != ch) {
                            nt = nxt_t[nt];
                        }
                        if(t[nt+1] == ch) {
                            nt = nt+2;
                        }else {
                            nt = 0;
                        }

                        if(ns == s.size()) {
                            ++dlt;
                            ns = nxt_s[ns-1]+1;
                        }
                        if(nt == t.size()) {
                            --dlt;
                            nt = nxt_t[nt-1]+1;
                        }
                        dp[i+1][ns][nt] = max(dp[i+1][ns][nt], dp[i][ms][mt] + dlt);
                        //cout << i << " " << ms << " " << mt << " " << ch << ":\t" << ns << " " << nt << " " << dp[i+1][ns][nt] << endl;
                    }
                }else {
                    char ch = c[i];
                    int dlt = 0;
                    int ns = ms-1, nt = mt-1;
                    while(ns != -1 && s[ns+1] != ch) {
                        ns = nxt_s[ns];
                    }
                    if(s[ns+1] == ch) {
                        ns = ns+2;
                    }else {
                        ns = 0;
                    }
                    while(nt != -1 && t[nt+1] != ch) {
                        nt = nxt_t[nt];
                    }
                    if(t[nt+1] == ch) {
                        nt = nt+2;
                    }else {
                        nt = 0;
                    }
                    if(ns == s.size()) {
                        ++dlt;
                        ns = nxt_s[ns-1]+1;
                    }
                    if(nt == t.size()) {
                        --dlt;
                        nt = nxt_t[nt-1]+1;
                    }
                    dp[i+1][ns][nt] = max(dp[i+1][ns][nt], dp[i][ms][mt] + dlt);
                    //cout << i << " " << ms << " " << mt << " " << ch << ":\t" << ns << " " << nt << " " << dp[i+1][ns][nt] << endl;
                }
            }
        }
    }
    int res = -INF;
    for(int ms = 0; ms < s.size(); ++ms) {
        for(int mt = 0; mt < t.size(); ++mt) {
            res = max(res, dp[n][ms][mt]);
        }
    }
    cout << res << endl;
}

int main()
{
    accelerate();
    cin >> c >> s >> t;
    get_nxt(s, nxt_s);
    get_nxt(t, nxt_t);
    //for(int i = 0; i < s.size(); ++i) cout << nxt_s[i] << " "; cout << endl;
    //for(int i = 0; i < t.size(); ++i) cout << nxt_s[i] << " "; cout << endl;
    solve();
}
