#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define RANGE(i, x, n) for(int i = x; i < n; ++i)
using namespace std;

long long extgcd(long long a, long long b, long long &x, long long &y)
{
    long long d = a;
    if(b == 0) {
        x = 1;
        y = 0;
    }else {
        d = extgcd(b, a%b, x, y);
        long long tmp = x;
        x = y;
        y = tmp - (a / b) * y;
    }
    return d;
}

int main()
{
    long long A, B, C;
    cin >> A >> B >> C;
    long long x, y;
    long long z = extgcd(A, B, x, y);
    if(C % z == 0) {
        cout << x*(-C / z) << ' ' << y*(-C / z) << endl;
    }else {
        cout << -1 << endl;
    }
}
