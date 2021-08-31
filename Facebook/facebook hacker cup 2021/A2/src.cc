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

vector<int> G[26];
int dist[26][26];

void BFS(int v)
{
    queue<pair<int, int>> Q;
    Q.push({v, 0});
    while(!Q.empty()) {
        auto p = Q.front();
        Q.pop();
        int u = p.first;
        int w = p.second;
        if(dist[v][u] == -1) {
            dist[v][u] = w;
            for(auto i: G[u]) {
                Q.push({i, w+1});
            }
        }
    }
}

void run(int case_id)
{
    for(int i = 0; i < 26; ++i) G[i].clear();
    memset(dist, -1, sizeof dist);

    string s;
    int K;
    cin >> s >> K;
    for(int i = 0; i < K; ++i) {
        string ab;
        cin >> ab;
        int a, b;
        a = ab[0]-'A';
        b = ab[1]-'A';
        G[a].push_back(b);
    }
    unordered_map<int, int> cnt;
    for(auto x: s) {
        cnt[x-'A']++;
    }
    for(int i = 0; i < 26; ++i) {
        BFS(i);
    }
    int ans = INF;
    for(int i = 0; i < 26; ++i) {
        int tmp = 0;
        for(int j = 0; j < 26; ++j) {
            if(cnt[j] == 0) continue;
            if(dist[j][i] == -1) {
                tmp = INF;
                break;
            }
            tmp += cnt[j]*dist[j][i];
        }
        ans = min(ans, tmp);
    }
    ans = ans==INF?-1:ans;
    cout << "Case #" << case_id << ": " << ans << endl;
    // for(int i = 0; i < 26; ++i) {for(int j = 0; j < 26; ++j) cout << dist[i][j] << " ";cout << endl;}
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    for(int i = 0; i < T; ++i) {
        run(i+1);
    }
}