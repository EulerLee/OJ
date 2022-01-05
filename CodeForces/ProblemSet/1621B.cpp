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
    vector<int> L(n), R(n), cost(n);
    int Lid, Rid, LM, RM;
    LM = INF, RM = -1;
    int id = -1;
    for(int i = 0; i < n; ++i) {
        cin >> L[i] >> R[i] >> cost[i];
        if(L[i] < LM || (L[i] == LM && cost[i] < cost[Lid])) {
            LM = L[i];
            Lid = i;
        }
        if(R[i] > RM || (R[i] == RM && cost[i] < cost[Rid])) {
            RM = R[i];
            Rid = i;
        }
        int res = cost[Lid] + cost[Rid];

        if(id != -1) {
            if(L[id] != LM || R[id] != RM) {
                id = -1;
            }else {
                res = min(res, cost[id]);
            }
        }
        if(L[i] == LM && R[i] == RM) {
            if(id == -1 || cost[i] < cost[id]) {
                id = i;
                res = min(res, cost[i]);
            }
        }
        cout << res << endl;
    }
    
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