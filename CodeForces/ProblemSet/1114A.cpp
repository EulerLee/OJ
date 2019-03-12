#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int x, y, z;
    int a, b, c;
    cin >> x >> y >> z >> a >> b >> c;
    if(a >= x && a-x+b >= y && a+b+c-x-y >= z) {
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }
}
