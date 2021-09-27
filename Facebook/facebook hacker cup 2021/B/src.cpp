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

void run(int case_id)
{
    int n;
    cin >> n;
    vector<string> G(n);
    vector<int> cnt(n*2, 0);
    for(int i = 0; i < n; ++i) {
        cin >> G[i];
    }
    int ans = INF;
    int num = 0;
    for(int i = 0; i < n*2; ++i) {
        for(int j = 0; j < n; ++j) {
            if(i < n) {
                if(G[i][j] == 'O') {
                    cnt[i] = INF;
                    break;
                }else if(G[i][j] == '.') ++cnt[i];
            }else {
                if(G[j][i-n] == 'O') {
                    cnt[i] = INF;
                    break;
                }else if(G[j][i-n] == '.') ++cnt[i];
            }
        }
        if(cnt[i] < ans) {
            cout << ans << endl;
            ans = cnt[i];
            num = 1;
        }else if(cnt[i] == ans) {
            ++num;
        }
    }
    cout << "Case #" << case_id << ": ";
    if(ans == INF) cout << "Impossible" << endl;
    else cout << ans << " " << num << endl;
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