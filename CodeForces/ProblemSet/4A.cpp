#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int w;
    cin >> w;
    w -= 2;
    if(w > 0 && w % 2 == 0) {
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }
}
