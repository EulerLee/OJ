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
using namespace std;

typedef long long ll;

const ll MAXN = 2e5+10;
vector<ll> adj[MAXN];

ll compute_change(ll ps, ll a, ll b)
{
    ll ori_a = (a == ps-1? 1 : (a < ps-1? a+1 : a));
    ll ori_b = (b == ps-1? 1 : (b < ps-1? b+1 : b));
    ll cur_a = (a == ps? 1 : (a < ps? a+1 : a));
    ll cur_b = (b == ps? 1 : (b < ps? b+1 : b));
    return abs(cur_a-cur_b) - abs(ori_a-ori_b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n, m;
    cin >> n >> m;
    vector<ll> A(m);
    for(ll i = 0; i < m; ++i) {
        cin >> A[i];
    }
    for(ll i = 0; i < m-1; ++i) {
        adj[A[i]].push_back(A[i+1]);
        adj[A[i+1]].push_back(A[i]);
    }
    ll res = 0;
    for(ll i = 0; i < m-1; ++i) {
        res += abs(A[i]-A[i+1]);
    }
    cout << res << " ";
    for(ll ps = 2; ps <= n; ++ps) {
        for(auto x: adj[ps]) {
            res += compute_change(ps, ps, x);
        }
        for(auto x: adj[ps-1]) {
            res += compute_change(ps, ps-1, x);
        }
        cout << res << " ";
    }
    cout << endl;
}
