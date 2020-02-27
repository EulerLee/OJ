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

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> A(m);
    ll sum = 0;
    for(int i = 0; i < m; ++i) {
        cin >> A[i];
        sum += A[i];
    }
    if(sum < n) {
        cout << -1 << endl;
        return;
    }
    if(sum == n) {
        cout << 0 << endl;
        return;
    }

    int ans = 0;
    vector<int> N(70);
    vector<int> B(70);
    int ind = 0;
    while(n) {
        if(n&1) {
            N[ind]++;
        }
        n >>= 1;
        ++ind;
    }
    for(auto x: A) {
        ind = 0;
        while(x) {
            if(x&1) {
                B[ind]++;
            }
            ++ind;
            x >>= 1;
        }
    }

    for(int i = 0; i < 69; ++i) {
        if(N[i] != 0) {
            if(B[i] == 0) {
                for(int j = i+1; j < 69; ++j) {
                    if(B[j] > 0) {
                        B[j]--;
                        ans += j-i;
                        for(int k = j-1; k > i; --k) {
                            B[k]++;
                        }
                        break;
                    }
                }
            }else {
                --B[i];
            }
        }
        B[i+1] += B[i]/2;
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--) {
        solve();
    }
}
