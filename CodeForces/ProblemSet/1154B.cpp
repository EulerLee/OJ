#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    accelerate();
    int n;
    cin >> n;
    set<int> A;
    REP(i, n) {
        int tmp;
        cin >> tmp;
        A.insert(tmp);
    }
    if(A.size() > 3) {
        cout << -1 << endl;
    }else if(A.size() == 3) {
        int a[3];
        int i = 0;
        for(auto x: A) {
            a[i] = x;
            ++i;
        }
        if(a[2] - a[1] == a[1] - a[0]) {
            cout << a[2]-a[1] << endl;
        }else {
            cout << -1 << endl;
        }
    }else if(A.size() == 2) {
        int d = *(++A.begin()) - *A.begin();
        if(d%2 == 0) {
            cout << d/2 << endl;
        }else {
            cout << d << endl;
        }
    }else {
        cout << 0 << endl;
    }
}
