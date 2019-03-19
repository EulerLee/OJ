#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>

#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;

ll x0, x1, yy0, yy1, n;
string s;
vector<ll> up(100001, 0);
vector<ll> rig(100001, 0);

bool Can(ll m)
{
    ll x2 = x0 + 1ll*(m/n)*rig[n] + rig[m%n];
    ll y2 = yy0 + 1ll*(m/n)*up[n] + up[m%n];
    ll dx = abs(x1 - x2);
    ll dy = abs(yy1 - y2);
    return m >= dx+dy;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> x0 >> yy0 >> x1 >> yy1 >> n >> s;

    for(int i = 0; i < n; ++i) {
        if(s[i] == 'U') {
            up[i+1] = up[i]+1;
            rig[i+1] = rig[i];
        }else if(s[i] == 'D') {
            up[i+1] = up[i]-1;
            rig[i+1] = rig[i];
        }else if(s[i] == 'L') {
            rig[i+1] = rig[i]-1;
            up[i+1] = up[i];
        }else {
            rig[i+1] = rig[i]+1;
            up[i+1] = up[i];
        }
    }

    ll low = 0;
    ll high = n*(abs(x1-x0)+abs(yy1-yy0));
    ll mid = (low+high)/2;
    while(high-low > 1) {
        if(Can(mid)) {
            high = mid;
        }else {
            low = mid;
        }
        mid = (low+high)/2;
    }
    if(!Can(high)) {
        cout << -1 << endl;
    }else {
        cout << high << endl;
    }
}
