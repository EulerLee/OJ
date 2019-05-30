#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define RANGE(i, x, n) for(int i = x; i < n; ++i)
#define REG(x, y) make_pair(min(x, y), max(x, y))
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

bool check(vector<int> &a, int k, int m)
{
    int n = a.size();
    int minx = 0;
    for(auto x: a) {
        int d;
        if(x <= minx) {
            d = minx - x;
            if(d > k) return false;
        }else {
            d = minx+m-x;
            if(d > k) minx = x;
        }
    }
    return true;
}

int main()
{
    accelerate();
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    REP(i, n) {
        cin >> a[i];
    }
    int l = 0, r = m-1;
    int mid = (l+r)>>1;
    while(r-l > 1) {
        if(check(a, mid, m)) {
            r = mid;
        }else {
            l = mid;
        }
        mid = (l+r)>>1;
    }
    if(check(a, l, m)) {
        cout << l << endl;
    }else {
        cout << r << endl;
    }
}
