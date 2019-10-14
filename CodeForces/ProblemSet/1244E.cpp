#include <iostream>
#include <string>
#include <vector>
#include <string>
#include <cstring>
#include <map>
#include <set>
#include <algorithm>
#include <cstdlib>
#include <cmath>
using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n, k;
    cin >> n >> k;
    map<ll, ll> cnt;
    for(int i = 0; i < n; ++i) {
        int tmp;
        cin >> tmp;
        ++cnt[tmp];
    }
    ll ans = (*cnt.rbegin()).first - (*cnt.begin()).first;
    while(cnt.size() > 1) {
        auto head = *cnt.begin();
        auto head2 = *(++cnt.begin());
        auto tail = *cnt.rbegin();
        auto tail2 = *(++cnt.rbegin());
        if(head.second < tail.second) {
            ll gap = (head2.first - head.first) * (head.second);
            if(k >= gap) {
                k -= gap;
                ans -= (head2.first - head.first);
                cnt[head2.first] += head.second;
                cnt.erase(head.first);
            }else {
                ll tmp = k/head.second;
                ans -= tmp;
                k = 0;
            }
            if(k == 0) break;
        }else {
            ll gap = (tail.first - tail2.first) * (tail.second);
            if(k >= gap) {
                k -= gap;
                ans -= (tail.first - tail2.first);
                cnt[tail2.first] += tail.second;
                cnt.erase(tail.first);
            }else {
                ll tmp = k/tail.second;
                ans -= tmp;
                k = 0;
            }
            if(k == 0) break;
        }
    }
    cout << ans << endl;
}
