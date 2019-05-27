#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define RANGE(i, x, n) for(int i = x; i < n; ++i)
#define REG(x, y) make_pair(min(x, y), max(x, y))
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

const int MAXN = 1010;
int n, m;
int G[MAXN*2][MAXN*2];
int ans[MAXN*2];

void DFS(int v)
{
    if(ans[v] == 0) {
        //cout << v << endl;
        ans[v] = 1;
        if(v < n) {
            RANGE(u, n, n+m) {
                if(G[v][u] == 1) {
                    DFS(u);
                    ans[v] = max(ans[v], ans[u]+1);
                }
            }
            RANGE(u, n, n+m) {
                if(G[v][u] == 0) {
                    DFS(u);
                    ans[v] = max(ans[v], ans[u]);
                }
            }
        }else {
            REP(u, n) {
                if(G[v][u] == 1) {
                    DFS(u);
                    ans[v] = max(ans[v], ans[u]+1);
                }
            }
            REP(u, n) {
                if(G[v][u] == 0) {
                    DFS(u);
                    ans[v] = max(ans[v], ans[u]);
                }
            }
        }
    }
}

int main()
{
    accelerate();
    cin >> n >> m;
    REP(i, n) {
        string tmp;
        cin >> tmp;
        REP(j, m) {
            int k = j+n;
            if(tmp[j] == '>') {
                G[i][k] = 1;
                G[k][i] = -1;
            }else if(tmp[j] == '<') {
                G[i][k] = -1;
                G[k][i] = 1;
            }
        }
    }
    REP(i, n+m) {
        DFS(i);
    }

    REP(i, n) {
        REP(j, m) {
            int k = n+j;
            if(G[i][k] == 1 && ans[i] <= ans[k]) {
                cout << "No" << endl;
                return 0;
            }
            if(G[i][k] == 0 && ans[i] != ans[k]) {
                cout << "No" << endl;
                return 0;
            }
            if(G[i][k] == -1 && ans[i] >= ans[k]) {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;
    REP(i, n+m) {
        cout << ans[i] << " ";
        if(i == n-1) cout << endl;
    }
    cout << endl;
}
