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
#include <random>
#define PII pair<int, int>
#define T3I tuple<int, int, int>
using namespace std;

typedef long long ll;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int INF = 0x3f3f3f3f;

int n;
vector<ll> A;
ll ans = 0;

void getd(ll x)
{
    if(x == 0) return;
    for(ll d = 2; d*d <= x; ++d) {
        if(x%d == 0) {
            ll tmp = 0;
            for(int i = 0; i < n; ++i) {
                if(A[i] < d) {
                    tmp += d-A[i];
                }else {
                    tmp += min(A[i]%d, d-(A[i]%d));
                }
            }
            ans = min(ans, tmp);
            while(x%d == 0) {
                x /= d;
            }
        }
    }
    if(x > 1) {
        ll d = x;
        ll tmp = 0;
        for(int i = 0; i < n; ++i) {
            if(A[i] < d) {
                tmp += d-A[i];
            }else {
                tmp += min(A[i]%d, d-(A[i]%d));
            }
        }
        ans = min(ans, tmp);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    A.resize(n);
    for(int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    for(auto x: A) ans += (x&1);
    int T = 20;
    std::random_device rd;
    std::mt19937 gen(rd());
    shuffle(A.begin(), A.end(), gen);
    for(int i = 0; i < 20 && i < n; ++i) {
        ll x = A[i];
        getd(x);
        getd(x-1);
        getd(x+1);
    }
    cout << ans << endl;
}
