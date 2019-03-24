#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;

const int MAXN = 3e5+1;
ll n, k;

struct Song {
    ll t;
    ll b;
    Song(ll a = 0, ll b = 0): t(a), b(b) {}
    bool operator<(const Song &r) {
        if(b > r.b) {
            return true;
        }else if(b == r.b) {
            return t > r.t;
        }
        return false;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> k;
    ll time = 0;
    vector<Song> S(n, Song());
    REP(i, n) {
        cin >> S[i].t >> S[i].b;
    }
    sort(S.begin(), S.end());
    priority_queue<ll> q;
    ll ans = 0;
    REP(i, n) {
        time += S[i].t;
        q.push(-S[i].t);
        if(q.size() > k) {
            time += q.top();
            q.pop();
        }
        ans = max(ans, time*S[i].b);
    }
    cout << ans << endl;
}
