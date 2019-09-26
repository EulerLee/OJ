#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <unordered_map>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <queue>
#include <set>
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void solve()
{
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    vector<int> alp(26);
    for(auto x: s) {
        alp[x-'a']++;
    }
    for(auto x: t) {
        alp[x-'a']--;
    }
    for(auto x: alp) {
        if(x != 0) {
            cout << -1 << endl;
            return;
        }
    }
    int ans = 0;
    for(int sta = 0; sta < n; ++sta) {
        int cnt = 0;
        int i = 0, j = sta;
        while(i < n && j < n) {
            if(s[i] == t[j]) {
                ++i, ++j;
                ++cnt;
            }else {
                ++i;
            }
        }
        ans = max(ans, cnt);
    }
    cout << n-ans <<  endl;
}

int main()
{
    accelerate();
    int T;
    cin >> T;
    while(T--) {
        solve();
    }
}
