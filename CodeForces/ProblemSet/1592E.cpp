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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<int> A(n);
    for(int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    vector<int> mp(1<<20, -1);

    int ans = 0;
    for(int k = 0; k < 20; ++k) {
        vector<int> pos;
        pos.push_back(-1);
        for(int i = 0; i < n; ++i) {
            if((A[i]>>k&1) == 0) {
                pos.push_back(i);
            }
        }
        pos.push_back(n);
        int pos_size = pos.size();
        for(int i = 0; i < pos_size-1; ++i) {
            vector<int> B;
            for(int l = pos[i]+1; l < pos[i+1]; ++l) {
                B.push_back(A[l]>>k);
            }
            int B_size = B.size();
            vector<int> XOR(B_size+1);
            for(int l = 0; l < B_size; ++l) {
                XOR[l+1] = XOR[l]^B[l];
            }

            for(int l = 0; l <= B_size; ++l) {
                if(mp[XOR[l]] == -1) {
                    mp[XOR[l]] = l;
                }else {
                    ans = max(ans, l - mp[XOR[l]]);
                }
            }

            for(int l = 0; l <= B_size; ++l) {
                mp[XOR[l]] = -1;
            }
        }
    }

    cout << ans << endl;
}