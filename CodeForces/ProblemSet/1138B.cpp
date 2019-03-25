#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    string c, a;
    cin >> n >> c >> a;
    vector<int> p(n, 0);
    int suma = 0;
    int cnt2 = 0, cnt1 = 0, cnt0 = 0;
    REP(i, n) {
        p[i] = c[i]-'0' + a[i]-'0';
        if(p[i] == 2) ++cnt2;
        else if(p[i] == 1) ++cnt1;
        else ++cnt0;
        suma += a[i]-'0';
    }
    //cout << cnt2 << " " << cnt1 << " " << cnt0 << " " << suma << endl;
    REP(x, cnt2+1) {
        int y = suma-2*x;
        if(0 <= y && y <= cnt1) {
            int z = n/2-x-y;
            //cout << x << y << z;
            if(0 <= z && z <= cnt0) {
                REP(i, n) {
                    if(p[i] == 2) {
                        if(x) {
                            cout << i+1 << " ";
                            --x;
                        }
                    }else if(p[i] == 1) {
                        if(y) {
                            cout << i+1 << " ";
                            --y;
                        }
                    }else {
                        if(z) {
                            cout << i+1 << " ";
                            --z;
                        }
                    }
                }
                cout << endl;
                return 0;
            }
        }
    }
    cout << -1 << endl;
}
