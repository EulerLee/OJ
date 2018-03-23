#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <cstdlib>
#include <set>
#include <queue>
#include <bitset>
using namespace std;
typedef long long ll;
typedef long double ld;
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
#define LOWBIT(x) ((x)&(-x))

ll dp[1<<19][19];   // dp[set][destination] = the number of paths from LOWBIT(set) to destination that just using the nodes in set

int main()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<int>> G(n, vector<int>(n, 0));
    REP(i, m) {
        ll x, y;
        cin >> x >> y;
        G[x-1][y-1] = G[y-1][x-1] = 1;
    }
    ll ans = 0;
    RANGE(path, 1, 1<<n) {
        // find all the nodes in path
        vector<ll> nodes;
        ll sta = 0;
        ll tmp = path;
        while(tmp) {
            if(tmp & 1) {
                nodes.push_back(sta);
            }
            ++sta;
            tmp >>= 1;
        }

        /*cout << "path " << path << ":\t";
        REP(i, nodes.size()) {
            cout << nodes[i] << " ";
        }
        cout << endl;*/

        if(nodes.size() < 2) continue;
        sta = nodes[0];
        //cout << "sta: " << sta << endl;
        REP(des, n) {
            if((path & (1<<des)) && des != sta) {
                //cout << "des: " << des << endl;
                if(nodes.size() == 2) {
                    dp[path][des] = G[nodes[0]][nodes[1]];
                }else { // >= 3
                    for(auto cur_node: nodes) {
                        if(cur_node != des && cur_node != sta && G[cur_node][des]) {   // the node that will be removed is not the destination && has an edge to destination
                            //cout << (path^(1<<cur_node)) << endl;
                            dp[path][des] += dp[path^(1<<des)][cur_node];
                        }
                    }
                    if(G[sta][des]) {
                        ans += dp[path][des];
                    }
                }
                //cout << "dp: " << dp[path][des] << endl;
            }
        }
    }
    cout << ans/2 << endl;
}
