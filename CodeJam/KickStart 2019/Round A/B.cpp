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

void BFS(vector<int> &vis, int R, int C, int depth, vector<int> &sta, vector<int> &dis)
{
    for(auto v: sta) {
        vis[v] = 1;
        dis[v] = depth;
    }
    vector<int> next;
    for(auto v: sta) {
        int x = v/C;
        int y = v%C;
        if(v+C < R*C && vis[v+C] == 0) {
            next.push_back(v+C);
        }
        if(v-C >= 0 && vis[v-C] == 0) {
            next.push_back(v-C);
        }
        if(v+1 < R*C && vis[v+1] == 0) {
            next.push_back(v+1);
        }
        if(v-1 >= 0 && vis[v-1] == 0) {
            next.push_back(v-1);
        }
    }
    if(next.size() == 0) return;
    BFS(vis, R, C, depth+1, next, dis);
}

bool check(int R, int C, vector<int> &dis, int K)
{
    int maxxy = INF;
    int minxy = 0;
    int maxyx = INF;
    int minyx = 0;
    REP(i, R) {
        REP(j, C) {
            if(dis[i*C+j] > K) {
                maxxy = min(maxxy, i+j+K);
                minxy = max(minxy, i+j-K);
                maxyx = min(maxyx, -i+j+K);
                minyx = max(minyx, -i+j-K);
            }
        }
    }
    return maxxy >= minxy && maxyx >= minyx;
}

int main()
{
    accelerate();
    int T;
    cin >> T;
    RANGE(t, 1, T+1) {
        int R, C;
        cin >> R >> C;
        vector<string> G(R, "");
        REP(i, R) {
            cin >> G[i];
        }
        vector<int> dly;
        REP(i, R) {
            REP(j, C) {
                if(G[i][j] == '1') {
                    dly.push_back(i*C+j);
                }
            }
        }
        vector<int> dis(R*C);
        vector<int> vis(R*C);
        BFS(vis, R, C, 0, dly, dis);
        /*REP(i, R) {
            REP(j, C) {
                cout << dis[i*C+j] << " ";
            }
            cout << endl;
        }*/
        if(check(R, C, dis, 0)) {
            cout << "Case #" << t << ": " << 0 << endl;
            continue;
        }
        int l, r, m;
        l = 0, r = R+C;
        m = (l+r)>>1;
        while(r-l > 1) {
            if(check(R, C, dis, m)) {
                r = m;
            }else {
                l = m;
            }
            m = (l+r)>>1;
        }
        cout << "Case #" << t << ": " << r << endl;
    }
}
