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

struct Point {
    int x;
    int y;
    Point(int x = -1, int y = -1) : x(x), y(y) {}
};

string G[2010];

int main()
{
    accelerate();

    int T;
    cin >> T;
    while(T--) {
        int n, m;
        cin >> n >> m;
        Point P[26][4];
        vector<int> cnt(26);
        REP(i, n) cin >> G[i];
        REP(i, n) {
            REP(j, m) {
                if(G[i][j] != '.') {
                    int t = G[i][j]-'a';
                    ++cnt[t];
                    if(j > P[t][0].y) {     // UP
                        P[t][0] = Point(i, j);
                    }
                    if(j < P[t][1].y || P[t][1].y == -1) {  // DOWN
                        P[t][1] = Point(i, j);
                    }
                    if(i < P[t][2].x || P[t][2].x == -1) {          // LEFT
                        P[t][2] = Point(i, j);
                    }
                    if(i > P[t][3].x) {
                        P[t][3] = Point(i, j);
                    }
                }
            }
        }
        vector<pair<Point, Point>> ans;
        queue<Point> Q;
        int flag = 1;
        for(int i = 25; i >= 0; --i) {
            if(P[i][0].x == -1) {
                if(ans.empty()) {
                    continue;
                }else {
                    if(cnt[i] == 0) {
                        if(Q.empty()) {
                            flag = 0;
                            break;
                        }else {
                            auto tmp = Q.front();
                            ans.push_back(make_pair(tmp, tmp));
                            continue;
                        }
                    }else {
                        flag = 0;
                        break;
                    }
                }
            }
            int utod = P[i][0].y > P[i][1].y;
            int ltor = P[i][2].x < P[i][3].x;
            if(utod && ltor) {
                flag = 0;
                break;
            }else if(utod == 0 && ltor == 0) {
                ans.push_back(make_pair(P[i][0], P[i][1]));
                if(Q.size() < i) {
                    Q.push(P[i][0]);
                }
            }else if(utod == 1) {
                RANGE(j, P[i][1].y, P[i][0].y+1) {
                    if(G[P[i][0].x][j]-'a' < i || G[P[i][0].x][j] == '.') {
                        flag = 0;
                        break;
                    }else if(Q.size() < i) {
                        Q.push(P[i][0]);
                    }
                }
                if(flag == 0) break;
                ans.push_back(make_pair(P[i][0], P[i][1]));
            }else {
                RANGE(j, P[i][2].x, P[i][3].x+1) {
                    if(G[j][P[i][2].y]-'a' < i || G[j][P[i][2].y] == '.') {
                        flag = 0;
                        break;
                    }else if(Q.size() < i) {
                        Q.push(P[i][0]);
                    }
                }
                if(flag == 0) break;
                ans.push_back(make_pair(P[i][3], P[i][2]));
            }
        }
        //cout << "flag:\t" << flag << endl;
        if(flag) {
            cout << "YES\n" << ans.size() << endl;
            for(int i = (int)ans.size()-1; i >= 0; --i) {
                cout << ans[i].first.x+1 << " " << ans[i].first.y+1 << " " << ans[i].second.x+1 << " " << ans[i].second.y+1 << endl;
            }
        }else {
            cout << "NO" << endl;
        }
    }
}
