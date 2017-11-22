#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <set>
#include <cstring>
typedef long long LL;
typedef long double LD;
#define RANGE(i, x, n) for(LL i = x; i < n; ++i)
#define REP(i, n) for(LL i = 0; i < n; ++i)
using namespace std;

int main()
{
    int n, p1, p2, p3, t1, t2;
    int l[101];
    int r[101];
    cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;
    int s1 = 0;
    REP(i, n) {
        cin >> l[i] >> r[i];
        s1 += r[i] - l[i];
    }
    int ans = 0;
    int s2, s3;
    s2 = s3 = 0;
    int tt;
    REP(i, n-1) {
        tt = l[i+1] - r[i];
        if(tt <= t1) {
            s1 += tt;
        }else if(tt <= t1 + t2) {
            s1 += t1;
            s2 += tt - t1;
        }else {
            s1 += t1;
            s2 += t2;
            s3 += tt - t1 - t2;
        }
    }
    ans = s1*p1 + s2*p2 + s3*p3;
    cout << ans << endl;
}
