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

inline LL droot(LL n)
{
    return (n%9 == 0) ? 9 : n%9;
}

int main()
{
    LL N;
    cin >> N;
    LL ans = 0;

    vector<LL> count(10, 0);
    RANGE(i, 1, N+1) {
        ++count[droot(i)];
    }

    RANGE(i, 1, 10) {
        RANGE(j, i, 10) {
            LL tmp = count[i]*count[j]*count[droot(i*j)];
            if(i != j) {
                ans += tmp;
            }
            ans += tmp;
            //cout << i << " " << j << " " << tmp << endl;
        }
    }

    /*RANGE(a, 1, N+1) {
        RANGE(k, 1, 9) {
            LL low = 0;
            LL high = 1e6+1;
            LL mid = (low + high) / 2;
            while(high - low > 1) {
                if(a*(9*mid + k) <= N) {
                    low = mid;
                }else {
                    high = mid;
                }
                mid = (low + high) / 2;
            }
            if(a*k <= N) {
                ans -= mid+1;
            }
        }
    }*/

    RANGE(a, 1, N+1) {
        LL low = 0;
        LL high = 1e6+1;
        LL mid = (low + high) / 2;
        while(high - low > 1) {
            if(a*mid <= N) {
                low = mid;
            }else {
                high = mid;
            }
            mid = (low + high) / 2;
        }
        ans -= mid;
    }

    cout << ans << endl;
}
