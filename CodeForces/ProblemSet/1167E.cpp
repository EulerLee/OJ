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

int main()
{
    accelerate();

    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    REP(i, n) {
        cin >> a[i];
    }

    vector<int> b(x+1);
    vector<int> c(x+1);
    vector<int> d(x+1);

    int maxd = 0;
    REP(i, n) {
        c[a[i]] = maxd;
        maxd = max(maxd, a[i]);
    }

    int mind = INF;
    set<int> pre;
    REP(i, n) {
        pre.insert(a[i]);
        auto it = ++pre.find(a[i]);
        if(it == pre.end()) {
            b[a[i]] = INF;
        }else {
            b[a[i]] = *it;
        }
    }

    maxd = 0;
    set<int> suf;
    for(int i = n-1; i >= 0; --i) {
        suf.insert(a[i]);
        auto it = suf.find(a[i]);
        if(it == suf.begin()) {
            d[a[i]] = 0;
        }else {
            --it;
            d[a[i]] = *it;
        }
    }

    //for(auto x: b) cout << x << " "; cout << endl;
    //for(auto x: c) cout << x << " "; cout << endl;
    //for(auto x: d) cout << x << " "; cout << endl;

    int bound_l = 0;
    int bound_r = 0;
    mind = INF;
    RANGE(i, 1, x) {
        if(i == mind) {
            break;
        }else {
            bound_l = i;
            if(b[i] != 0) {
                mind = min(mind, b[i]);
            }
        }
    }
    //cout << bound_l << endl;

    maxd = 0;
    for(int i = x; i > 0; --i) {
        if(i == maxd) {
            break;
        }else {
            bound_r = i;
            if(d[i] != 0) {
                maxd = max(maxd, d[i]);
            }
        }
    }
    //cout << bound_r << endl;

    ll ans = 0;
    maxd = 0;
    REP(i, bound_l+1) {
        if(i == 0) {
            ans += min(x-bound_r+2, x);
        }else {
            maxd = max(maxd, c[i]);
            ans += min(x-bound_r+2, min(x-i, x-maxd+1));
        }
    }

    cout << ans << endl;
}
