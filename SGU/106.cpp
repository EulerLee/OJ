#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; ++i)
#define RANGE(i, x, n) for(int i = x; i < n; ++i)
typedef long long ll;
typedef long double ld;
const int INF = 0x3f3f3f3f;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int ext_gcd(int a, int b, int &x, int &y)
{
    if(b == 0) {
        x = 1;
        y = 0;
        return a;
    }else {
        int res = ext_gcd(b, a%b, y, x);
        y -= a/b*x;
        return res;
    }
}

int main()
{
    accelerate();
    int a, b, c, x1, x2, y1, y2;
    cin >> a >> b >> c >> x1 >> x2 >> y1 >> y2;
    if(a*b != 0) {
        int x0, y0;
        int d = ext_gcd(a, b, x0, y0);
        x0 *= -c/d;
        y0 *= -c/d;
        //cout << x0 << " " << y0 << endl;
        if(c%d == 0) {
            int upbt = min((x2-x0)/b, (y0-y1)/a);
            int lowbt = max(ceil((x1-x0+0.0)/b), ceil((y0-y2+0.0)/a));
            //cout << lowbt << " " << upbt << endl;
            cout << upbt-lowbt+1 << endl;
        }else {
            cout << 0 << endl;
        }
    }else if(a == 0 && b == 0) {
        if(c != 0) {
            cout << 0 << endl;
        }else {
            cout << (x2-x1)*(y2-y1) << endl;
        }
    }else if(a == 0) {
        if(b*y1 <= -c && -c <= b*y2) {
            cout << 1 << endl;
        }else {
            cout << 0 << endl;
        }
    }else {
        if(a*x1 <= -c && -c <= a*x2) {
            cout << 1 << endl;
        }else {
            cout << 0 << endl;
        }
    }

}
