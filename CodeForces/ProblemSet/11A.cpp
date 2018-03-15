#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
using namespace std;
typedef long long ll;
typedef long double ld;
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)

int main()
{
    int n, d;
    cin >> n >> d;
    vector<int> A(n, 0);
    REP(i, n) {
        cin >> A[i];
    }
    int ans = 0;
    RANGE(i, 1, n) {
        int seg = A[i-1] - A[i];
        if(seg < 0) continue;
        int tmp = seg/d+1;
        ans += tmp;
        A[i] += tmp*d;
    }
    cout << ans << endl;
}
