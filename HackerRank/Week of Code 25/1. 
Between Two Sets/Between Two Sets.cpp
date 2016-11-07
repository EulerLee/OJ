#include <iostream>
#include <vector>
#include <algorithm>
#define RANGE(i, x, n) for(int i = x; i < n; ++i)
#define REP(i, n) for(int i = 0; i < n; ++i)
using namespace std;

long long gcd(long long a, long long b)
{
    if(b > a){
        swap(a, b);
    }
    while(b != 0){
        long long tmp = a;
        a = b;
        b = tmp % b;
    }
    return a;
}

int main()
{
    long long N, M, num;
    cin >> N >> M;
    long long resa, resb, ga, gb;
/*    cin >> ga;
    resa = ga;
    REP(i, N - 1){
        cin >> num;
        long long tmp = gcd(ga, num);
        resa = max(resa, ga * num / tmp);
        ga = tmp;
    }
*/
    vector<long long> A;
    REP(i, N){
        cin >> num;
        A.push_back(num);
    }
    ga = A[0];
    resa = ga;
    REP(i, N - 1){
        RANGE(j, i, N){
            resa = max(resa, A[i] * A[j] / gcd(A[i], A[j]));
        }
    }

    cin >> gb;
    REP(i, M - 1){
        cin >> num;
        gb = gcd(gb, num);
    }
    resb = gb;
    //cout << resa << endl << resb << endl;
    int ans = 0;
    for(int k = 1; (k * resa) <= resb; ++k){
        if(resb % (k * resa) == 0){
            ++ans;
        }
    }
    cout << ans << endl;
}
