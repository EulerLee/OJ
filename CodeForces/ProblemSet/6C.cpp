#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> T(n, 0);
    int sum, rs, ls;
    sum = rs = ls = 0;
    for(int i = 0; i < n; ++i) {
        cin >> T[i];
        sum += T[i];
    }
    int pos;
    for(int i = 0; i < n; ++i) {
        rs += T[i];
        if(rs >= sum - rs) {
            ls = sum - rs;
            pos = i;
            break;
        }
    }
    rs -= T[pos];
    if(rs <= ls) {
        cout << pos + 1 << ' ' << n - (pos + 1) << endl;
    }else if(rs > ls) {
        cout << pos << ' ' << n - pos << endl;
    }
}
