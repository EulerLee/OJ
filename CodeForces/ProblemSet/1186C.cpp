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

int main()
{
    accelerate();
    string a, b;
    cin >> a >> b;
    int ans = 0;
    int cnta = 0;
    int cntb = 0;
    for(auto x: b) {
        if(x == '1') ++cntb;
    }
    REP(i, b.size()) {
        if(a[i] == '1') ++cnta;
    }
    int sta = 0;
    do {
        if((cnta&1) == (cntb&1)) ++ans;
        if(sta + b.size() == a.size()) break;
        else {
            cnta -= (a[sta] == '1');
            cnta += (a[sta+b.size()] == '1');
            ++sta;
        }
    } while(true);
    cout << ans << endl;
}
