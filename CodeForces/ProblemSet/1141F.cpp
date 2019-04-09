#pragma comment(linker, "/stack:247474112")
//#pragma GCC optimize("Ofast")

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

struct Segment{
    int l;
    int r;
    Segment(int l = 0, int r = 0): l(l), r(r) {}
    bool operator==(const Segment &R) {
        return (r < R.l || l > R.r);
    }
    bool operator<(const Segment &R) {
        return r==R.r? l<R.l : r<R.r;
    }
};

int main()
{
    accelerate();

    int n;
    cin >> n;
    vector<int> S(n+1);
    REP(i, n) {
        cin >> S[i+1];
    }
    REP(i, n) {
        S[i+1] += S[i];
    }
    map<int, vector<Segment>> box;
    RANGE(i, 1, n+1) {
        RANGE(j, i, n+1) {
            box[S[j] - S[i-1]].push_back(Segment(i, j));
        }
    }
    int ans = 0;
    int pos = 0;
    for(auto &e: box) {
        auto &vs = e.second;
        sort(vs.begin(), vs.end());
        int rest = 0;
        int tmp = 0;
        for(auto seg: vs) {
            if(seg.l > rest) {
                ++tmp;
                rest = seg.r;
            }
        }
        if(ans < tmp) {
            pos = e.first;
            ans = tmp;
        }
    }
    cout << ans << endl;
    int rest = 0;
    for(auto seg: box[pos]) {
        if(seg.l > rest) {
            cout << seg.l << " " << seg.r << endl;
            rest = seg.r;
        }
    }
}
