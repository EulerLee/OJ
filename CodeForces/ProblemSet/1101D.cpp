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

const int MAXN = 2e5+10;
int n;
vector<int> E[MAXN];
vector<int> a;

void input()
{
    cin >> n;
    a.resize(n);
    REP(i, n) {
        cin >> a[i];
    }
    REP(i, n-1) {
        int x, y;
        cin >> x >> y;
        --x, --y;
        E[x].push_back(y);
        E[y].push_back(x);
    }
}

map<int, int> dpt[MAXN];
int ans;

void DFS(int v = 0, int fa = -1)
{
    for(auto u: E[v]) {
        if(u != fa) {
            DFS(u, v);
        }
    }
    int tmp = a[v];
    vector<int> p;
    for(int i = 2; i*i <= tmp; ++i) {
        if(tmp%i == 0) {
            p.push_back(i);
            while(tmp%i == 0) {
                tmp /= i;
            }
        }
    }
    if(tmp != 1) p.push_back(tmp);
    for(auto d: p) {
        int maxd[2];
        maxd[0] = maxd[1] = 0;
        for(auto u: E[v]) {
            if(u != fa) {
                if(dpt[u][d] > maxd[0]) {
                    maxd[1] = maxd[0];
                    maxd[0] = dpt[u][d];
                }else if(dpt[u][d] > maxd[1]) {
                    maxd[1] = dpt[u][d];
                }
            }
        }
        dpt[v][d] = maxd[0]+1;
        ans = max(ans, maxd[0]+maxd[1]+1);
    }
}

int main()
{
    accelerate();
    input();
    DFS();
    cout << ans << endl;
}
