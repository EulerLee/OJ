#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define RANGE(i, x, n) for(int i = x; i < n; ++i)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int INF = 0x3f3f3f3f;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int n, m, d;
vector<int> a;
vector<int> ord;

bool compare(int i, int j)
{
    return a[i] < a[j];
}

bool check(int p)
{
    bool ans = true;
    vector<int> pre(p);
    REP(i, p) {
        pre[i] = a[ord[i]];
    }
    RANGE(i, p, n) {
        int k = i%p;
        if(a[ord[i]]-pre[k]-1 < d) {
            return false;
        }
        pre[k] = a[ord[i]];
    }
    return true;
}

int main()
{
    accelerate();
    cin >> n >> m >> d;
    a.resize(n);
    ord.resize(n);
    REP(i, n) {
        cin >> a[i];
        ord[i] = i;
    }
    sort(ord.begin(), ord.end(), compare);

    int l = 0, r = n;
    int mid = (l+r)>>1;
    while(r-l > 1) {
        if(check(mid)) {
            r = mid;
        }else {
            l = mid;
        }
        mid = (l+r)>>1;
    }
    cout << r << endl;
    vector<int> ans(n);
    REP(i, n) {
        ans[ord[i]] = i%r+1;
    }
    for(auto x: ans) cout << x << " ";
    cout << endl;
}
