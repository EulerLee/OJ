#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <set>
using namespace std;

#define REP(i, n) for(int i = 0; i < n; ++i)
#define RANGE(i, x, n) for(int i = x; i < n; ++i)

typedef long long LL;
typedef long double LD;

int quickpow(int x, int n)
{
    int ans = 1;
    while(n) {
        if(n&1) {
            ans *= x;
        }
        x *= x;
        n >>= 1;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    string x = "1";
    int ans = 0;
    int pos = 0;
    while(stoi(x) <= n) {
        ans += quickpow(2, pos);
        x += "1";
        ++pos;
    }
    //cout << ans << endl;
    x.assign(x.size(), '0');
    x[1] = x[0] = '1';
    ans += quickpow(2, x.size() - 1);
    //cout << ans << endl;
    int spos = 1;
    //cout << x << endl;
    while(spos < x.size()) {
        if(stoi(x) > n) {
            ans -= quickpow(2, x.size() - spos - 1);
            x[spos%x.size()] = '0';
        }
        x[(spos + 1)%x.size()] = '1';
        //cout << spos << ":\t" << ans;
        ++spos;

        //cout << "\t" << x << endl;
    }
    if(stoi(x) > n) --ans;
    cout << ans << endl;
}
