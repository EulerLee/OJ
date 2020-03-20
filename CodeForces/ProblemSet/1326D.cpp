/*
回文
*/
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
#include <tuple>
#include <queue>
#include <random>
#define PII pair<int, int>
#define T3I tuple<int, int, int>
using namespace std;

typedef long long ll;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int INF = 0x3f3f3f3f;

void getrad(string t, vector<int> &rad)
{
    int m = t.size();
    int Rpos = 0;
    for(int i = 1; i < m; ++i) {
        if(i >= rad[Rpos] + Rpos) {
            for(int j = 1; i+j < m && i-j >= 0; ++j) {
                if(t[i+j] == t[i-j]) ++rad[i];
                else break;
            }
        }else {
            int revi = 2*Rpos - i;
            int revR = rad[revi];
            if(i+revR <= Rpos+rad[Rpos]) {
                rad[i] = revR;
                for(int j = rad[i]+1; i+j < m && i-j >= 0; ++j) {
                    if(t[i+j] == t[i-j]) ++rad[i];
                    else break;
                }
            }else {
                rad[i] = Rpos+rad[Rpos] - i;
                for(int j = rad[i]+1; i+j < m && i-j >= 0; ++j) {
                    if(t[i+j] == t[i-j]) ++rad[i];
                    else break;
                }
            }
        }
        if(i+rad[i] >= Rpos+rad[Rpos]) {
            Rpos = i;
        }
    }
}

void solve()
{
    string s;
    cin >> s;
    int m = s.size();
    int n = m*2+1;
    string t;
    for(int i = 0; i < m; ++i) {
        t += '#';
        t += s[i];
    }
    t += '#';
    vector<int> rad(n);
    getrad(t, rad);
    //for(auto x: rad) cout << x << " "; cout << endl;

    vector<int> L(n, INF), R(n);
    for(int i = 0; i < n; ++i) {
        int l = i-rad[i];
        int r = i+rad[i];
        if(r <= n-1-l) {
            R[l] = max(R[l], r);
        }
        if(l >= n-1-r) {
            L[r] = min(L[r], l);
        }
    }

    int ans = 0;
    int len = 0;
    int flg = 0;
    for(int i = 0; n-1-i > i; ++i) {
        int vl = 0, vr = 0;
        int l = i, r = n-1-i;
        if(R[l] > l) {
            vl = R[l]-l+1;
            if(t[l] == '#') {
                vl /= 2;
            }else {
                vl = (vl+1)/2;
            }
        }
        if(L[r] < r) {
            vr = r-L[r]+1;
            if(t[r] == '#') {
                vr /= 2;
            }else {
                vr = (vr+1)/2;
            }
        }
        int f;
        int val = i/2*2;
        if(vl > vr) {
            f = 0;
            val += vl;
        }else {
            f = 1;
            val += vr;
        }
        if(val > ans) {
            ans = val;
            flg = f;
            len = i;
        }
        if(t[l] != t[r]) break;
    }

    for(int i = 0; i < len; ++i) {
        if(t[i] != '#') cout << t[i];
    }
    int sta, las;
    if(flg == 0) {
        sta = len;
        las = R[sta];
    }else {
        las = n-1-len;
        sta = L[las];
    }
    while(sta <= las) {
        if(t[sta] != '#') cout << t[sta];
        ++sta;
    }
    for(int i = n-len; i < n; ++i) {
        if(t[i] != '#') cout << t[i];
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while(T--) {
        solve();
    }
}
