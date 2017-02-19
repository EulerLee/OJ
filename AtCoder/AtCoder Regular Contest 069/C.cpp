#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;
    if(2*n >= m) {
        cout << m / 2 << endl;
    }else {
        if(m % 2 != 0) {
            --m;
        }
        cout << (m + 2*n) / 4 << endl;
    }
}
