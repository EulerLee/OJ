#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

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
#include <unordered_set>
#include <unordered_map>
#include <tuple>
#include <queue>
#include <bitset>
#define PII pair<int, int>
#define T3I tuple<int, int, int>
using namespace std;

typedef long long ll;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int INF = 0x3f3f3f3f;

const int MAXN = 501;
int h, w;
string G[MAXN];
int ans[MAXN][MAXN];

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    memset(ans, INF, sizeof ans);

    cin >> h >> w;
    for(int i = 0; i < h; ++i) {
        cin >> G[i];
    }

    priority_queue<pair<int, PII>> Q;
    Q.push(make_pair(0, PII(0, 0)));
    while(!Q.empty()) {
        auto e = Q.top(); Q.pop();
        int x = e.second.first;
        int y = e.second.second;
        int m = -e.first;
        if(m >= ans[x][y]) continue;
        ans[x][y] = m;
        for(int i = 0; i < 4; ++i) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(0 <= nx && nx < h && 0 <= ny && ny < w) {
                if(G[nx][ny] == '.') {
                    Q.push(make_pair(-m, PII(nx, ny)));
                }
            }
        }
        for(int ddx=-2; ddx <= 2; ++ddx) {
            for(int ddy=-2; ddy <= 2; ++ddy) {
                if(abs(ddx)+abs(ddy) <= 3) {
                    int nx = x+ddx;
                    int ny = y+ddy;
                    if(0 <= nx && nx < h && 0 <= ny && ny < w) {
                        Q.push(make_pair(-m-1, PII(nx, ny)));
                    }
                }
            }
        }
    }
    cout << ans[h-1][w-1] << endl;
}