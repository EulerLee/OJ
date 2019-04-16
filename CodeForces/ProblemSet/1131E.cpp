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
    vector<string> S(n);
    REP(i, n) cin >> S[i];
    /*REP(i, n) {
        S[i] += ('a' + rand()%26);
    }*/

    int lenleft = 0, lenright = 0;
    char c = S[n-1][0];
    REP(i, S[n-1].size()) {
        if(S[n-1][i] == c) ++lenleft;
        else break;
    }
    c = S[n-1][S[n-1].size()-1];
    for(int i = S[n-1].size()-1; i >= 0; --i) {
        if(S[n-1][i] == c) ++lenright;
        else break;
    }
    int maxlen = 0;
    if(lenleft < S[n-1].size()) {
        c = S[n-1][lenleft];
        int top = S[n-1].size()-lenright;
        int tmplen = 0;
        RANGE(i, lenleft, top) {
            if(S[n-1][i] == c) {
                ++tmplen;
            }else {
                maxlen = max(maxlen, tmplen);
                c = S[n-1][i];
                tmplen = 1;
            }
        }
        maxlen = max(maxlen, tmplen);
    }else {
        maxlen = 0;
    }

    ll prelen = S[n-1].size();
    for(int i = n-2; i >= 0; --i) {
        // lenleft
        //cout << prelen << ":\t" << lenleft << " " << maxlen << " " << lenright << endl;
        string &cur = S[i];
        string &ori = S[n-1];
        if(lenleft == prelen) {
            char pre = ori[0];
            int lk = 0;
            REP(i, n) {
                if(cur[i] == pre) ++lk;
                else break;
            }
            lenleft = lk+lenleft*(lk+1);

            int rk = 0;
            for(int i = cur.size()-1; i >= 0; --i) {
                if(cur[i] == pre) ++rk;
                else break;
            }
            lenright = rk+lenright*(rk+1);

            int tmp = 0;
            int maxmid = 0;
            RANGE(i, lk, cur.size()-rk) {
                if(cur[i] == pre) {
                    ++tmp;
                }else {
                    maxmid = max(maxmid, tmp);
                    tmp = 0;
                }
            }
            maxmid = max(maxmid, tmp);
            maxlen = maxmid + lenleft*(maxmid+1);
        }else {
            char lc = ori[0];
            char rc = ori[ori.size()-1];
            int lok, rok;
            lok = rok = 0;
            for(auto x: cur) {
                if(x == ori[0]) {
                    lok = 1;
                }
                if(x == ori[ori.size()-1]) {
                    rok = 1;
                }
            }
            if(ori[0] == ori[ori.size()-1] && lok && rok) {
                maxlen = max(maxlen, lenleft+1+lenright);
            }else {
                if(lok) maxlen = max(maxlen, lenleft+1);
                if(rok) maxlen = max(maxlen, lenright+1);
            }
        }
        prelen = cur.size() + prelen*(cur.size()+1);
    }
    //cout << prelen << ":\t" << lenleft << " " << maxlen << " " << lenright << endl;
    cout << max(maxlen, max(lenleft, lenright)) << endl;
}
