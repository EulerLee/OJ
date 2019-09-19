#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <unordered_map>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <queue>
#include <stack>
using namespace std;
typedef long long ll;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

const int MAXN = 5e5+10;
vector<int> chd[MAXN];
int P[MAXN];
int ans[MAXN];
vector<int> S;
int cur;

void DFS(int v) {
    ans[v] = cur--;
    for(int i = 0; i < chd[v].size(); ++i) {
        DFS(chd[v][i]);
    }
}

void solve()
{
    int n;
    cin >> n;
    cur = n+1;
    for(int i = 0; i <= n; ++i) {
        chd[i].clear();
    }
    for(int i = 0; i < n; ++i) {
        cin >> P[i];
        P[i]--;
        if(P[i] == -2) P[i] = i+1;
        chd[P[i]].push_back(i);
    }
    DFS(n);
    S.clear();
    for(int i = n-1; i >= 0; --i) {
        while(!S.empty() && ans[i] > ans[S.back()]) {
            S.pop_back();
        }
        if((S.empty() && P[i] != n) || (!S.empty() && S.back() != P[i])) {
            cout << -1 << endl;
            return;
        }
        S.push_back(i);
    }
    for(int i = 0; i < n; ++i) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while(T--) {
        solve();
    }
}
