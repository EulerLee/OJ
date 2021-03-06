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
    string s;
    int n;
    cin >> n;
    cin >> s;
    int r = 0, b = 0;
    for(auto x: s) {
        if(x == 'R') ++r;
        else ++b;
    }
    if(r > b) cout << "Yes" << endl;
    else cout << "No" << endl;
}
