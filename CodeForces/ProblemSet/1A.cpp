#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long n, m, a;
    cin >> n >> m >> a;
    long long x, y;
    x = n / a + (n % a == 0 ? 0 : 1);
    y = m / a + (m % a == 0 ? 0 : 1);
    cout << x * y << endl;
}