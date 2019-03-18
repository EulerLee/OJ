#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
string s;
const int mod = 1e9+7;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> s;
    map<char, int> cnt;
    for(int i = 0; i < s.size(); ++i) {
        cnt[s[i]]++;
    }
    ll ans = 1;
    for(auto x: cnt) {
        ans *= x.second+1ll;
        ans %= mod;
    }
    cout << ans-1 << endl;
}
