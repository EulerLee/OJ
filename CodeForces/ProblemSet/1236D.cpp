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
#define T3I tuple<int, int, int>
using namespace std;

typedef long long ll;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int INF = 0x3f3f3f3f;

const int MAXN = 1e5+1;
vector<int> br[MAXN];
vector<int> bc[MAXN];

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    int n, m, K;
    cin >> n >> m >> K;
    for(int i = 0; i < K; ++i) {
        int x, y;
        cin >> x >> y;
        br[x].push_back(y);
        bc[y].push_back(x);
    }
    for(int i = 1; i <= n; ++i) {
        sort(br[i].begin(), br[i].end());
    }
    for(int i = 1; i <= m; ++i) {
        sort(bc[i].begin(), bc[i].end());
    }

    ll cnt = 1+K;
    int di = 0;
    int U = 1, D = n+1, L = 0, R = m+1;
    int x = 1, y = 1;
    int flg = 0;
    while(true) {
        int nxt_x = x, nxt_y = y;
        if(di == 0) {
            auto pos = upper_bound(br[x].begin(), br[x].end(), y);
            if(pos == br[x].end()) {
                nxt_y = R-1;
            }else {
                nxt_y = min(R-1, (*pos) - 1);
            }
            if(nxt_y <= y) {
                if(flg == 1) break;
                else {
                    di = (di+1)%4;
                    flg = 1;
                    continue;
                }
            }else {
                cnt += nxt_y - y;
                di = (di+1)%4;
                flg = 1;
                y = nxt_y;
                R = y;
                continue;
            }
        }else if(di == 1) {
            auto pos = upper_bound(bc[y].begin(), bc[y].end(), x);
            if(pos == bc[y].end()) {
                nxt_x = D-1;
            }else {
                nxt_x = min(D-1, (*pos) - 1);
            }
            if(nxt_x <= x) {
                break;
            }else {
                cnt += nxt_x - x;
                di = (di+1)%4;
                flg = 1;
                x = nxt_x;
                D = x;
                continue;
            }
        }else if(di == 2) {
            if(br[x].size() == 0) {
                nxt_y = L+1;
            }else {
                auto pos = upper_bound(br[x].begin(), br[x].end(), y);
                if(pos == br[x].begin()) {
                    nxt_y = L+1;
                }else {
                    pos--;
                    nxt_y = max(L+1, (*pos)+1);
                }
            }
            if(nxt_y >= y) {
                break;
            }else {
                cnt += y-nxt_y;
                di = (di+1)%4;
                flg = 1;
                y = nxt_y;
                L = y;
                continue;
            }
        }else {
            if(bc[y].size() == 0) {
                nxt_x = U+1;
            }else {
                auto pos = upper_bound(bc[y].begin(), bc[y].end(), x);
                if(pos == bc[y].begin()) {
                    nxt_x = U+1;
                }else {
                    --pos;
                    nxt_x = max(U+1, (*pos)+1);
                }
            }
            if(nxt_x >= x) {
                break;
            }else {
                cnt += x - nxt_x;
                di = (di+1)%4;
                flg = 1;
                x = nxt_x;
                U = x;
                continue;
            }
        }
    }
    if(cnt != ll(n)*m) {
        cout << "NO" << endl;
    }else {
        cout << "YES" << endl;
    }
}
