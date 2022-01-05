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

void run()
{
    int n;
    cin >> n;
    vector<vector<int>> A(n*2, vector<int>(n*2));
    vector<vector<ll>> G(n*2, vector<ll>(n*2));
    ll base = 0;
    for(int i = 0; i < n*2; ++i) {
        for(int j = 0; j < n*2; ++j) {
            G[i][j] = LLINF;
            cin >> A[i][j];
            if(i >= n && j >= n) {
                base += A[i][j];
            }
        }
    }
    ll ans = 0;
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    priority_queue<pair<ll, pair<int, int>>> Q;
    for(int i = 0; i < n; ++i) {
        int x = i;
        int y = n;
        Q.push({-A[x][y], {x, y}});
        Q.push({-A[x][n*2-1], {x, n*2-1}});
    }
    while(!Q.empty()) {
        auto e = Q.top(); Q.pop();
        ll c = -e.first;
        int x = e.second.first;
        int y = e.second.second;
        if(x == n-1 || x == 0) {
            ans = c;
            break;
        }
        if(G[x][y] != LLINF) {
            G[x][y] = c;
            for(int i = 0; i < 4; ++i) {
                int nx = x + dx[i];
                int ny = y + dy[i];
                if(0 <= nx && nx < n && n <= ny && ny < n*2) {
                    Q.push({-c-A[nx][ny], {nx, ny}});
                }
            }
        }
    }

    while(!Q.empty()) {
        Q.pop();
    }
    for(int i = 0; i < n; ++i) {
        int x = n;
        int y = i;
        Q.push({-A[x][y], {x, y}});
        Q.push({-A[n*2-1][y], {n*2-1, y}});
    }
    while(!Q.empty()) {
        auto e = Q.top(); Q.pop();
        ll c = -e.first;
        int x = e.second.first;
        int y = e.second.second;
        if(y == n-1 || y == 0) {
            ans = min(ans, c);
            break;
        }
        if(G[x][y] != LLINF) {
            G[x][y] = c;
            for(int i = 0; i < 4; ++i) {
                int nx = x + dx[i];
                int ny = y + dy[i];
                if(n <= nx && nx < n*2 && 0 <= ny && ny < n) {
                    Q.push({-c-A[nx][ny], {nx, ny}});
                }
            }
        }
    }

    cout << ans+base << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while(T--) {
        run();
    }
}