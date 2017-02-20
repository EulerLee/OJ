#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

int kind(int a, int b, int c)
{
    vector<int> A = {a, b, c};
    sort(A.begin(), A.end());
    if(A[0] + A[1] == A[2]) {
        return 1;
    }else if(A[0] + A[1] < A[2]) {
        return 0;
    }else {
        return 2;
    }
}

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int k = 0, tmp;
    tmp = kind(a, b, c);
    if(tmp > k) {
        k = tmp;
    }
    tmp = kind(a, b, d);
    if(tmp > k) {
        k = tmp;
    }
    tmp = kind(b, c, d);
    if(tmp > k) {
        k = tmp;
    }
    tmp = kind(a, c, d);
    if(tmp > k) {
        k = tmp;
    }
    if(k == 0) {
        cout << "IMPOSSIBLE" << endl;
    }else if(k == 1) {
        cout << "SEGMENT" << endl;
    }else {
        cout << "TRIANGLE" << endl;
    }
}
