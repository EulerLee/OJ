#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int n, q;
string s;
vector<pair<char, char>> Q;

bool Cr(int k)
{
    int pos = k;
    REP(i, q) {
        char c, d;
        c = Q[i].first;
        d = Q[i].second;
        if(d == 'R') {
            if(s[pos] == c) {
                if(pos == n-1) {
                    return true;
                }else {
                    ++pos;
                }
            }
        }else {
            if(s[pos] == c) {
                if(pos == 0) continue;
                else --pos;
            }
        }
    }
    return false;
}

bool Cl(int k)
{
    int pos = k;
    REP(i, q) {
        char c, d;
        c = Q[i].first;
        d = Q[i].second;
        if(d == 'R') {
            if(s[pos] == c) {
                if(pos == n-1) {
                    continue;
                }else {
                    ++pos;
                }
            }
        }else {
            if(s[pos] == c) {
                if(pos == 0) return true;
                else --pos;
            }
        }
    }
    return false;
}

int main()
{
    accelerate();
    cin >> n >> q;
    cin >> s;
    Q.resize(q);
    REP(i, q) {
        char c, d;
        cin >> c >> d;
        Q[i].first = c;
        Q[i].second = d;
    }

    int l, r, m;
    l = 0, r = n;
    m = (l+r)>>1;
    int ans = n;
    while(r - l > 1) {
        if(Cr(m)) {
            r = m;
        }else {
            l = m;
        }
        m = (l+r)>>1;
    }
    if(Cr(l)) {
        cout << 0 << endl;
        return 0;
    }else if(r == n) {
        ans = n;
    }else {
        ans = r;
    }

    l = 0, r = n;
    m = (l+r) >> 1;
    while(r - l > 1) {
        if(Cl(m)) {
            l = m;
        }else {
            r = m;
        }
        m = (l+r)>>1;
    }
    if(Cl(l)) {
        if(l+1 > ans) {
            cout << 0 << endl;
            return 0;
        }else {
            cout << ans - l - 1 << endl;
            return 0;
        }
    }else {
        cout << ans << endl;
        return 0;
    }
}
