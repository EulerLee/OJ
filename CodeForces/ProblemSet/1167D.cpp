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

    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> depth(n);
    int cnt = 0;
    int maxd = 0;
    REP(i, n) {
        if(s[i] == '(') {
            ++cnt;
            maxd = max(maxd, cnt);
            depth[i] = cnt;
        }else {
            depth[i] = cnt;
            --cnt;
        }
    }
    //for(auto x: depth) cout << x; cout << endl;
    int bd = maxd/2;
    //cout << bd << endl;
    vector<int> ans(n);
    REP(i, n) {
        if(depth[i] <= bd) {
            ans[i] = 0;
        }else {
            ans[i] = 1;
        }
    }
    for(auto x: ans) cout << x; cout << endl;
}
