#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int gcd(int a, int b)
{
    if(b == 0) return a;
    return gcd(b, a%b);
}


int main()
{
    accelerate();
    int n;
    cin >> n;
    vector<string> G(n);    // only need 2 rows
    int ans = n;
    string s;
    // 对每个行列求gcd
    REP(i, n) {
        cin >> G[i];
        int len = 0;
        int flag = 0;
        for(auto &x : G[i]) {
            if('0' <= x && x <= '9') x -= '0';
            else x = x - 'A' + 10;
            for(int j = 3; j >= 0; --j) {
                if(flag == 0) {
                    if((x>>j)&1) {
                        ans = gcd(ans, len);
                        len = 1;
                        flag = 1;
                    }else {
                        ++len;
                    }
                }else {
                    if((x>>j)&1) {
                        ++len;
                    }else {
                        ans = gcd(ans, len);
                        len = 1;
                        flag = 0;
                    }
                }
            }
        }
        if(ans == 1) goto end;
        ans = gcd(ans, len);
    }
    REP(j, n) {
        int len = 0;
        int flag = 0;
        REP(i, n) {
            int x = (G[i][j/4]>>(3-j%4))&1;
            if(flag == 0) {
                if(x) {
                    ans = gcd(ans, len);
                    len = 1;
                    flag = 1;
                }else {
                    ++len;
                }
            }else {
                if(x) {
                    ++len;
                }else {
                    ans = gcd(ans, len);
                    len = 1;
                    flag = 0;
                }
            }
        }
        if(ans == 1) break;
        ans = gcd(ans, len);
    }
end:
    cout << ans << endl;
}
