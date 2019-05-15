#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define RANGE(i, x, n) for(int i = x; i < n; ++i)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int INT_INF = 0x3f3f3f3f;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    accelerate();
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    int ans = 0;
    ans = min(a[0]/3, min(a[1]/2, a[2]/2));
    a[0] = a[0]-3*ans;
    a[1] = a[1]-2*ans;
    a[2] = a[2]-2*ans;
    ans *= 7;
    vector<int> r{0, 1, 2, 0, 2, 1, 0, 0, 1, 2, 0, 2, 1, 0};
    int maxe = 0;
    REP(i, 7) {
        int t[3];
        memset(t, 0, sizeof t);
        RANGE(j, i, 14) {
            t[r[j]]++;
            if(t[r[j]] <= a[r[j]]) {
                maxe = max(maxe, j-i+1);
            }else {
                break;
            }
        }
    }
    ans += maxe;
    cout << ans << endl;
}
