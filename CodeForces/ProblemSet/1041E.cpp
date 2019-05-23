#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define RANGE(i, x, n) for(int i = x; i < n; ++i)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
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
    vector<int> dis(n-1);
    REP(i, n-1) {
        int x, y;
        cin >> x >> y;
        if(x > y) swap(x, y);
        if(x == y || y != n) {
            cout << "NO" << endl;
            return 0;
        }
        --x, --y;
        dis[x]++;
    }
    vector<int> Z;
    REP(i, n-1) {
        if(dis[i] == 0) {
            Z.push_back(i);
        }
    }
    int cur = Z.size();
    vector<pair<int, int>> ans;
    for(int i = n-2; i>= 0; --i) {
        if(dis[i] != 0) {
            int m = dis[i]-1;
            if(cur < m) {
                cout << "NO" << endl;
                return 0;
            }
            int pre = n-1;
            REP(i, m) {
                ans.push_back(make_pair(Z[cur-i-1], pre));
                pre = Z[cur-i-1];
            }
            if(m > 0) {
                if(pre > i) {
                    cout << "NO" << endl;
                    return 0;
                }
            }
            ans.push_back(make_pair(i, pre));
            cur -= m;
        }
    }
    cout << "YES" << endl;
    for(auto x: ans) {
        cout << x.first+1 << " " << x.second+1 << endl;
    }
}
