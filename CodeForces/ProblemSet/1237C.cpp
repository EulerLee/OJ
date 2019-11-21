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
#define PII pair<int, int>
#define PILL pair<int, ll>
#define T3I tuple<int, int, int>
#define X first
#define Y second
#define STA(a, b) min(a, b), max(a, b)
using namespace std;

typedef long long ll;

const int INF = 0x3f3f3f3f;
const int D = 3;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<vector<int>> A(n, vector<int>(D, 0));
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < D; ++j) {
            cin >> A[i][j];
        }
    }
    vector<int> ord(n);
    for(int i = 0; i < n; ++i) ord[i] = i;

    auto solve = [&](auto &self, vector<int> ids, int k) {
        if(k == D) {
            return ids[0];
        }
        map<int, vector<int>> mp;
        for(auto i: ids) {          // ordered here
            mp[A[i][k]].push_back(i);
        }
        vector<int> cur;
        for(auto &e: mp) {
            int tmp = self(self, e.second, k+1);
            if(tmp != -1) {
                cur.push_back(tmp);
            }
        }
        for(int i = 0; i+1 < (int)cur.size(); i+=2) {
            cout << cur[i]+1 << " " << cur[i+1]+1 << endl;
        }
        if((int)cur.size()%2 == 0) return -1;
        else return cur.back();
    };
    solve(solve, ord, 0);
}
