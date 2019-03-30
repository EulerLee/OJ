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

int main()
{
    accelerate();
    int h1, m1;
    string s;
    cin >> s;
    for(auto &x: s) {
        if(x == ':') {
            x = ' ';
        }
    }
    stringstream ss(s);
    ss >> h1 >> m1;
    int h2, m2;
    cin >> s;
    for(auto &x: s) {
        if(x == ':') {
            x = ' ';
        }
    }
    ss.clear();
    ss.str(s);
    ss >> h2 >> m2;
    int tot = (h2-h1)*60+(m2-m1);
    tot /= 2;
    int m = m1+tot%60;
    int h = h1+tot/60;
    if(m >= 60) {
        ++h;
        m -= 60;
    }
    if(h < 10) {
        cout << 0;
    }
    cout << h << ":";
    if(m < 10) {
        cout << 0;
    }
    cout << m << endl;
}
