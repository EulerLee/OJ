#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
const long long INF = 1e10 + 1;

int main()
{
    int T;
    cin >> T;
    while(T--){
        long long a, b, d;
        cin >> a >> b >> d;
        if(d == 0){
            cout << 0 << endl;
        }else if(d == a || d == b) {
            cout << 1 << endl;
        }else {
            a = max(a, b);
            long long lo = 0, hi = INF;
            long long mid = (lo + hi) / 2;
            while(hi - lo > 1){
                if(mid * a < d) {
                    lo = mid;
                }else {
                    hi = mid;
                }
                mid = (lo + hi) / 2;
            }
            long long ans = (hi >= 2) ? hi : 2;
            cout << ans << endl;
        }
    }
}
