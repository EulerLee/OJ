//It's guaranteed that the number of angles in the optimal polygon is not larger than 100.
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#define M_PI 3.14159265358979323846
using namespace std;

const double eps = 1e-3;

int ff(long double a)
{
    int res = a;
    res += (a - res < 0.5 ? 0 : 1);
    return res;
}

bool right(long double a, long double b)
{
    int k = ff(a / b);
    return abs(a - k * b) < eps;
}

long double GCD3(long double a, long double b, long double c, map<int, long double> pa)
{
    for(int i = 3; i <= 100; ++i) {
        if(right(a, pa[i]) && right(b, pa[i]) && right(c, pa[i])) {
            return pa[i];
        }
    }
    return 0;
}

int main()
{
    map<int, long double> pa;   // important
    for(int i = 3; i <= 100; ++i) {
        pa[i] = 360.0 / i;
    }
    long double x1, x2, x3, y1, y2, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    long double a, b, c, A, B, C;
    a = sqrt((x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2));
    b = sqrt((x1 - x3)*(x1 - x3) + (y1 - y3)*(y1 - y3));
    c = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
    A = acos(((x2 - x1)*(x3 - x1) + (y2 - y1)*(y3 - y1)) / (c*b));
    B = acos(((x1 - x2)*(x3 - x2) + (y1 - y2)*(y3 - y2)) / (c*a));
    C = acos(((x2 - x3)*(x1 - x3) + (y2 - y3)*(y1 - y3)) / (a*b));

    cout.precision(20);
    long double A1, B1, C1;
    A1 = A / M_PI * 180;
    B1 = B / M_PI * 180;
    C1 = C / M_PI * 180;
    long double D1 = GCD3(2 * A1, 2 * B1, 2 * C1, pa);
    long double D = M_PI * D1 / 180;
    int k = ff(360 / D1);
    long double ans;
    long double r = a*b*c / sqrt((a+b+c) * (b+c-a) * (a-b+c) * (a+b-c));
    ans = sin(D) * r * r / 2 * k;
    cout << ans << endl;
}
