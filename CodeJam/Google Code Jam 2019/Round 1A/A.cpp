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

int R, C;
int vis[410];

bool compare(int i, int j)
{
    return vis[i] < vis[j];
}

void DFS(int v, int &cnt)
{
    if(vis[v]) {
        return;
    }
    vis[v] = cnt;
    cnt++;
    int i = v/C, j = v%C;
    int x = (i+1)%R, y = (j+2)%C;
    if(!(i == x || j == y || i+j == x+y || i-j == x-y)) {
        DFS(x*C+y, cnt);
    }
}

int main()
{
    accelerate();
    int T;
    cin >> T;

    for(int t = 1; t <= T; ++t) {
        cin >> R >> C;
        int sw = 0;
        if(R > C) {
            swap(R, C);
            sw = 1;
        }
        memset(vis, 0, sizeof vis);
        vector<int> order(R*C);
        REP(i, R*C) {
            order[i] = i;
        }
        bool ans = true;
        int cnt = 1;
        int prex, prey;
        REP(v, C) {
            int cur = cnt;
            if(v == 0) {
                DFS(v, cnt);
            }else {
                int i = 0, j = v;
                if(i == prex || j == prey || i+j == prex+prey || i-j == prex-prey) {
                    continue;
                }
                DFS(v, cnt);
            }
            cur = cnt-cur-1;
            if(cur != -1) {
                prex = cur%R;
                prey = (v+cur*2)%C;
            }
            cout << v << endl;
        }
        REP(v, R*C) {
            if(vis[v] == 0) {
                ans = false;
                break;
            }
        }
        if(!ans) {
            cout << "Case #" << t << ": IMPOSSIBLE" << endl;
            continue;
        }
        cout << "Case #" << t << ": POSSIBLE" << endl;
        sort(order.begin(), order.end(), compare);
        for(auto x: order) {
            int i = x/C+1;
            int j = x%C+1;
            if(sw) {
                swap(i, j);
            }
            cout << i << " " << j << endl;
        }
    }
}
