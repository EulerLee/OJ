#include <iostream>
#include <cmath>
#include <string>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef long double ld;
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n, h;
    cin >> n >> h;
    vector<ll> length(n, 0);
    vector<ll> gap(n-1, 0);
    vector<ll> A(n, 0);
    vector<ll> B(n, 0);
    REP(i, n) {
        cin >> A[i] >> B[i];
    }
    REP(i, n) {
        length[i] = B[i] - A[i];
        if(i >= 1) {
            gap[i-1] = A[i] - B[i-1];
        }
    }

    ll res = length[0];
    ll curlen = res;
    ll down = 0;
    ll begin = 0;
    RANGE(i, 1, n) {
        if(gap[i-1] >= h) {
            begin = i;
            curlen = length[i];
            down = 0;
            res = max(res, curlen);
            continue;
        }
        down += gap[i-1];
        if(down < h) {
            curlen += length[i];
        }else {
            do {
                down -= gap[begin];
                curlen -= length[begin];
                ++begin;
            }while(down >= h);
            curlen += length[i];
        }
        res = max(res, curlen);
    }
    cout << res + h << endl;
}
