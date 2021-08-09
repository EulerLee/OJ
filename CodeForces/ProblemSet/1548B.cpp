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

const int MAXN = 2e5+1;
ll st[MAXN][19];

ll gcd(ll x, ll y)
{
    if(y == 0) return x;
    return gcd(y, x%y);
}

ll quickpow(ll x, ll n)
{
    ll res = 1;
    while(n) {
        if(n&1) {
            res *= x;
        }
        x *= x;
        n >>= 1;
    }
    return res;
}

void init(int n, vector<ll> &A)
{
    for(int i = 0; i < n; ++i) {
        st[i][0] = A[i];
    }
    for(int j = 1; j < 19; ++j) {
        int del = quickpow(2, j);
        for(int i = 0; i+del-1 < n; ++i) {
            st[i][j] = gcd(st[i][j-1], st[i+del/2][j-1]);
        }
    }
}

bool C(int m, int n)
{
    int del = 1, j = 0;
    while(del < m) {
        del *= 2;
        ++j;
    }
    --j;
    del >>= 1;
    // cout << del << " " << j << endl;
    for(int i = 0; i+m-1 < n; ++i) {
        if(j < 0) {
            if(st[i][0] > 1) return true;
        }else if(gcd(st[i][j], st[i+m-del][j]) > 1) {
            return true;
        }
    }
    return false;
}

void solve()
{
    int n;
    cin >> n;
    vector<ll> A(n);
    vector<ll> B(n-1);
    for(int i = 0; i < n; ++i) {
        cin >> A[i];
    }
    for(int i = 0; i < n-1; ++i) {
        B[i] = abs(A[i+1]-A[i]);
    }
    init(n-1, B);

    int l = 0, h = n;
    while(h-l > 1) {
        int m = (l+h)>>1;
        if(C(m, n-1)) {
            l = m;
        }else {
            h = m;
        }
    }
    cout << l+1 << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while(T--) {
        solve();
    }
}