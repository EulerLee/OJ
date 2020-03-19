/*
the whole idea is to find the smallest circle in a graph
this could be O(n^2) complex
but using special features of this certain graph can make us search smaller set of vertices
actually in this problem we only need to search 168 vertices
168 is the number of primes under 1000
*/

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
#include <tuple>
#include <queue>
#define PII pair<int, int>
#define T3I tuple<int, int, int>
using namespace std;

typedef long long ll;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int INF = 0x3f3f3f3f;

const int MAX_N = 1e5+1;
const int MAX_P = 80000;
const int MAX_E = 1e6+1;
set<int> G[MAX_P];
int D[MAX_P];
int N;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int top = 1e6;
    vector<int> isp(top, 1);
    vector<int> P;
    for(int i = 2; i < top; ++i) {
        if(isp[i] == 1) {
            P.push_back(i);
            for(int k = 2; k*i < top; ++k) {
                isp[k*i] = 0;
            }
        }
    }
    N = P.size();
    map<int, int> mp;
    for(int i = 0; i < P.size(); ++i) {
        mp[P[i]] = i;
    }

    int n;
    cin >> n;
    vector<int> A(n);
    int ans = INF;
    set<int> One;

    for(int i = 0; i < n; ++i) {
        cin >> A[i];
        int x = A[i];
        vector<int> cnet;
        for(int t = 2; t*t <= x; ++t) {
            int s = 0;
            while(x%t == 0) {
                ++s;
                x /= t;
            }
            if(s&1) {
                cnet.push_back(t);
            }
        }
        if(x != 1) cnet.push_back(x);
        if(cnet.size() == 0) {
            ans = 1;
            break;
        }
        if(cnet.size() == 1) {
            if(One.find(cnet[0]) == One.end()) {
                One.insert(cnet[0]);
            }else {
                ans = min(ans, 2);
            }
        }else {
            int x = mp[cnet[0]], y = mp[cnet[1]];
            if(G[x].find(y) != G[x].end()) {
                ans = min(ans, 2);
                continue;
            }
            G[x].insert(y);
            G[y].insert(x);
        }
    }
    //cout << ans << endl;

    queue<pair<PII, int>> q;
    fill(D, D+N, -1);

    for(auto x: One) {
        //cout << x << " ";
        q.push({{mp[x], -1}, 0});
    }
    //cout << endl;
    while(!q.empty()) {
        int v = q.front().first.first;
        int pre = q.front().first.second;
        int d = q.front().second;
        q.pop();
        if(d*2-1 >= ans) break;
        if(D[v] != -1) {
            ans = min(ans, D[v]+d+2);
            //cout << v << " " << D[v] << " " << d << endl;
            break;
        }
        D[v] = d;
        for(auto u: G[v]) {
            if(u != pre) q.push({{u, v}, d+1});
        }
    }
    //cout << ans << endl;
    while(!q.empty()) q.pop();
    One.clear();

    queue<pair<PII, int>> Q;
    for(auto x: P) {
        if(x > 1e3) break;
        fill(D, D+N, -1);
        Q.push({{mp[x], -1}, 0});
        while(!Q.empty()) {
            int v = Q.front().first.first;
            int pre = Q.front().first.second;
            int d = Q.front().second;
            Q.pop();
            if(d*2-1 >= ans) break;
            if(D[v] != -1) {
                ans = min(ans, D[v]+d);
                //cout << v << " " << D[v] << " " << d << endl;
                break;
            }
            D[v] = d;
            for(auto u: G[v]) {
                if(u != pre) Q.push({{u, v}, d+1});
            }
        }
        while(!Q.empty()) Q.pop();
    }
    if(ans == INF) cout << -1 << endl;
    else cout << ans << endl;
}
