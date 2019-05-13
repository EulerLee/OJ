#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int INF = 0x3f3f3f3f;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

vector<int> a;

bool compare(int i, int j)
{
    return a[i] > a[j];
}

int main()
{
    accelerate();
    int n, k;
    cin >> n >> k;
    a.resize(n);
    vector<int> order(n);
    REP(i, n) {
        cin >> a[i];
        order[i] = i;
    }
    sort(order.begin(), order.end(), compare);

    vector<int> next(n);
    vector<int> pre(n);
    REP(i, n) {
        next[i] = i+1;
        pre[i] = i-1;
    }

    vector<int> ans(n);
    int turn = 1;
    REP(i, n) {
        if(ans[order[i]] == 0) {
            ans[order[i]] = turn;
            int r = next[order[i]];
            for(int i = 0; r < n && i < k; ++i) {
                ans[r] = turn;
                r = next[r];
            }

            int l = pre[order[i]];
            for(int i = 0; l >= 0 && i < k; ++i) {
                ans[l] = turn;
                l = pre[l];
            }

            if(0 <= l && l < n) {
                next[l] = r;
            }
            if(0 <= r && r < n) {
                pre[r] = l;
            }
            if(turn == 1) turn = 2;
            else turn = 1;
        }
    }
    for(auto x: ans) cout << x; cout << endl;
}
