#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; ++i)
#define RANGE(i, x, n) for(int i = x; i < n; ++i)
typedef long long ll;
typedef long double ld;
const int INF = 0x3f3f3f3f;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int E[7][7];
vector<int> path;
vector<int> sig_sta(7);

void DFS(int v)
{
    for(int u = sig_sta[v]; u < 7; ++u) {
        if(E[v][u] > 0) {
            --E[v][u];
            DFS(u);
        }else if (E[u][v] > 0) {
            --E[u][v];
            DFS(u);
        }else {
            sig_sta[v] = u+1;
        }
    }
    path.push_back(v);
}

int vis[7];
void DFS_check(int v)
{
    vis[v] = 1;
    REP(i, 7) {
        if(vis[i] == 1) continue;
        if((E[v][i] > 0) || (E[i][v] > 0)) {
            DFS_check(i);
        }
    }
}

int main()
{
    accelerate();
    int N;
    cin >> N;
    vector<int> degree(7);
    map<pair<int, int>, vector<int>> rec;
    REP(i, N) {
        int x, y;
        cin >> x >> y;
        E[x][y]++;
        degree[x]++;
        degree[y]++;
        rec[make_pair(x, y)].push_back(i+1);
    }

    vector<int> v1;
    int sta = -1;
    REP(i, 7) {
        if(degree[i]%2 == 1) v1.push_back(i);
        if(degree[i] > 0 && sta == -1) sta = i;
    }
    int cnt = v1.size();
    if(cnt != 0 && cnt != 2) {
        cout << "No solution" << endl;
        return 0;
    }
    if(cnt == 2) {
        sta = v1[0];
    }
    DFS_check(sta);
    REP(i, 7) {
        if(degree[i] > 0 && vis[i] == 0) {
            cout << "No solution" << endl;
            return 0;
        }
    }

    DFS(sta);
    //for(auto x: path) cout << x << " "; cout << endl;
    int cntE[7][7];
    memset(cntE, 0, sizeof cntE);
    REP(i, path.size()-1) {
        auto edge = make_pair(path[i], path[i+1]);
        int &a = cntE[path[i]][path[i+1]];
        if(a < rec[edge].size()) {
            cout << rec[edge][a] << " +" << endl;
            ++a;
        }else {
            edge = make_pair(path[i+1], path[i]);
            int &b = cntE[path[i+1]][path[i]];
            cout << rec[edge][b] << " -" << endl;
            ++b;
        }
    }
}
