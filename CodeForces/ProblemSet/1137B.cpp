#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;

int pre(string &s)
{
    vector<int> pi(s.size()+1, 0);
    int k = 0;
    RANGE(q, 2, s.size()+1) {
        while(k>0 && s[k] != s[q-1]) {
            k = pi[k];
        }
        if(s[k] == s[q-1]) {
            ++k;
        }
        pi[q] = k;
    }
    return pi[s.size()];
}

int main()
{
    /*ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);*/

    char s[500001], t[500001];
    scanf("%s%s", s, t);
    int n = strlen(s), m = strlen(t);
    int cnts1 = 0, cntt1 = 0;
    for(int i = 0; i < n; ++i) {
        cnts1 += s[i]-'0';
    }
    for(int i = 0; i < m; ++i) {
        cntt1 += t[i]-'0';
    }
    int cnts0 = n-cnts1;
    int cntt0 = m-cntt1;
    if(cnts1 < cntt1 || cnts0 < cntt0) {
        puts(s);
        return 0;
    }
    strcpy(s, t);
    int pos = m;
    cnts1 -= cntt1;
    cnts0 -= cntt0;

    string t1 = t;
    int la = pre(t1);
    if(la != t1.size()) {
        t1.assign(t1.begin()+la, t1.end());
    }
    cntt0 = cntt1 = 0;
    for(auto x: t1) {
        cntt1 += x-'0';
    }
    cntt0 = (int)t1.size()-cntt1;

    int r = 0;
    if(cntt0 == 0) {
        r = cnts1/cntt1;
    }else if(cntt1 == 0) {
        r = cnts0/cntt0;
    }else {
        r = min(cnts1/cntt1, cnts0/cntt0);
    }

    strcpy(t, t1.c_str());
    m = strlen(t);
    REP(i, r) {
        REP(j, m) {
            s[pos] = t[j];
            ++pos;
        }
    }
    cnts1 -= cntt1*r;
    cnts0 -= cntt0*r;
    REP(i, cnts1) {
        s[pos] = '1';
        ++pos;
    }
    REP(i, cnts0) {
        s[pos] = '0';
        ++pos;
    }
    s[pos] = '\0';
    puts(s);
}
