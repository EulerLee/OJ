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

int main()
{
    accelerate();

    int n, z;
    cin >> n >> z;
    vector<int> A(n);
    REP(i, n) {
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    int ans = 0;
    int pre = n/2-1;
    REP(i, n/2) {
        int l = n/2-1, r = n;
        int m = (l+r)>>1;
        while(r-l > 1) {
            if(A[m] >= A[i]+z && m > pre) {
                r = m;
            }else {
                l = m;
            }
            m = (l+r)>>1;
        }
        //cout << i << " " << r << endl;
        if(r == n) {
            break;
        }else {
            ++ans;
            pre = r;
        }
    }
    cout << ans << endl;
}
