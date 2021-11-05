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
#include <stack>
#define PII pair<int, int>
#define T3I tuple<int, int, int>
using namespace std;

typedef long long ll;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int INF = 0x3f3f3f3f;

typedef vector<int> vec;
typedef vector<vec> mat;

vector<int> G[1000];
int deg_in[1000], deg_out[1000];
int height[1000], hardness[1000];

int DFS_height(int v)
{
    if(height[v] != -1) return height[v];
    if(deg_out[v] == 0) return height[v] = 0;
    else {
        int &res = height[v];
        for(auto u: G[v]) {
            res = max(res, DFS_height(u));
        }
        ++res;
        return res;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, M, K, R;
    cin >> N >> M >> K >> R;
    memset(deg_in, 0, N);
    memset(deg_out, 0, N);
    memset(height, -1, N);
    memset(hardness, 0, N);
    
    mat D(N, vec(K));
    mat P(M, vec(K));
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < K; ++j) {
            cin >> D[i][j];
            hardness[i] = max(hardness[i], D[i][j]);
        }
    }

    for(int i = 0; i < R; ++i) {
        int u, v;
        cin >> u >> v;
        --u, --v;
        G[u].push_back(v);
        deg_in[v]++;
        deg_out[u]++;
    }

    for(int i = 0; i < N; ++i) {
        DFS_height(i);
    }

    priority_queue<pair<pair<int, int>, int>> ready;    // height & hardness
    vector<int> assign(M, -1), assign_day(M, -1);
    vector<int> wish_day(M, -1);
    int idle = M;
    for(int i = 0; i < N; ++i) {
        if(deg_in[i] == 0) {
            ready.push({{height[i], hardness[i]}, i});
        }
    }
    auto cost = [K](const vec &person, const vec &task) {
        int res = 0;
        for(int i = 0; i < K; ++i) res = max(res, task[i]-person[i]);
        return res;
    };

    queue<int> PreTask[M];

    int day = 1;
    while(true) {
        // handle pretask


        // assign
        queue<pair<int, int>> Q;
        while(!ready.empty()) {
            auto e = ready.top(); ready.pop();
            int task = e.second;
            int candidate = -1, mincost = INF;
            for(int i = 0; i < M; ++i) {
                if(assign[i] == -1) {
                    int cur_cost = cost(P[i], D[task]);
                    if(cur_cost < mincost) {
                        mincost = cur_cost;
                        candidate = i;
                    }
                }else {
                    int cur_cost = cost(P[i], D[task]) + wish_day[i] - day;
                    if(cur_cost < mincost) {
                        mincost = cur_cost;
                        candidate = i;
                    }
                }
            }
            if(assign[candidate] != -1) {

            }
            assign[candidate] = task;
            assign_day[candidate] = day;
            wish_day[candidate] = day + max(mincost, 1);
            Q.push({candidate, task});
            --idle;
        }
        cout << Q.size() << " ";
        while(!Q.empty()) {
            auto e = Q.front(); Q.pop();
            cout << e.first+1 << " " << e.second+1 << " ";
        }
        cout << endl;
        cout.flush();
        // receive
        int complete;
        cin >> complete;
        if(complete == -1) break;
        for(int i = 0; i < complete; ++i) {
            int p;
            cin >> p;
            --p;
            int task = assign[p];
            int gap_day = day - assign_day[p];
            assign[p] = -1;
            wish_day[p] = -1;
            ++idle;
            for(int j = 0; j < K; ++j) {
                P[p][j] = max(P[p][j], D[task][j]-gap_day);
            }
            for(auto u: G[task]) {
                --deg_in[u];
                if(deg_in[u] == 0) {
                    ready.push({{height[u], hardness[u]}, u});
                }
            }
        }

        ++day;
    }
}