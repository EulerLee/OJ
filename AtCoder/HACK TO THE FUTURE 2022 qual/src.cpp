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

typedef vector<int> vec;
typedef vector<vec> mat;

vector<int> G[1000];
int deg_in[1000], deg_out[1000];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, M, K, R;
    cin >> N >> M >> K >> R;
    memset(deg_in, 0, N);
    memset(deg_out, 0, N);
    
    mat D(N, vec(K));
    mat P(M, vec(K));
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < K; ++j) {
            cin >> D[i][j];
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

    queue<int> ready;
    vector<int> assign(M, -1), assign_day(M, -1);
    int idle = M;
    for(int i = 0; i < N; ++i) {
        if(deg_in[i] == 0) ready.push(i);
    }
    auto cost = [K](const vec &person, const vec &task) {
        int res = 0;
        for(int i = 0; i < K; ++i) res = max(res, task[i]-person[i]);
        return res;
    };

    int day = 1;
    while(true) {
        // assign
        queue<pair<int, int>> Q;
        while(idle > 0 && !ready.empty()) {
            int task = ready.front();
            ready.pop();
            int candidate = -1, mincost = INF;
            for(int i = 0; i < M; ++i) {
                if(assign[i] == -1) {
                    int cur_cost = cost(P[i], D[task]);
                    if(cur_cost < mincost) {
                        mincost = cur_cost;
                        candidate = i;
                    }
                }
            }
            assign[candidate] = task;
            assign_day[candidate] = day;
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
            ++idle;
            for(int j = 0; j < K; ++j) {
                P[p][j] = max(P[p][j], D[task][j]-gap_day);
            }
            for(auto u: G[task]) {
                --deg_in[u];
                if(deg_in[u] == 0) {
                    ready.push(u);
                }
            }
        }

        ++day;
    }
}