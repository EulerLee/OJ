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
    int n, k;
    cin >> n >> k;
    map<int, int> cnt;
    REP(i, n) {
        int tmp;
        cin >> tmp;
        cnt[tmp%k]++;
    }
    int ans = 0;
    for(auto e: cnt) {
        if(e.first > k/2) break;
        if(e.first == 0 || 2*e.first == k) {
            ans += e.second/2*2;
        }else {
            if(cnt.find(k-e.first) != cnt.end()) {
                ans += min(e.second, cnt[k-e.first])*2;
            }
        }
    }
    cout << ans << endl;
}
