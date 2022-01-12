#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")
// #define DEBUG

#include <iostream>
#include <string>
#include <vector>
#include <string>
#include <cstring>
#include <map>
#include <set>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <unordered_set>
#include <unordered_map>
#include <tuple>
#include <queue>
#include <bitset>
#define PII pair<int, int>
#define T3I tuple<int, int, int>
using namespace std;

typedef long long ll;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int INF = 0x3f3f3f3f;

void solve(int fc, vector<int> double_mid_zero, int double_corner_zero, int single_mid_zero, int single_corner_zero, int double_one, ll a, ll b, ll c, ll &ans)
{
    ll cur = 0;
    while(true) {
        if(fc == 1) {
            if(double_one > 0) {
                --double_one;
                cur += b;
                ans = max(ans, cur);
            }else {
                return;
            }
        }else {
            if(double_one == 0) {
                if(double_mid_zero.size() > 0 || double_corner_zero > 0) {
                    ans = max(ans, cur+a);
                }
                if(single_mid_zero > 0) {
                    --single_mid_zero;
                    ++double_one;
                    cur -= c;
                    ans = max(ans, cur);
                }
            }else {
                if(double_mid_zero.size() > 0) {
                    auto &x = double_mid_zero[double_mid_zero.size() - 1];
                    --x;
                    if(x == 1) {
                        ++single_mid_zero;
                        double_mid_zero.pop_back();
                    }
                    cur += a;
                    ans = max(ans, cur);
                }else if(double_corner_zero > 0) {
                    --double_corner_zero;
                    cur += a;
                    ans = max(ans, cur);
                }else if(single_mid_zero > 0) {
                    --single_mid_zero;
                    ++double_one;
                    cur -= c;
                    ans = max(ans, cur);
                }else if(single_corner_zero > 0) {
                    --single_corner_zero;
                    cur -= c;
                    ans = max(ans, cur);
                }else {
                    return;
                }
            }
        }
        fc ^= 1;
    }
}

void run()
{
    int n;
    ll a, b, c;
    cin >> n >> a >> b >> c;
    string s;
    cin >> s;
    if(n == 1) {
        cout << 0 << endl;
        return;
    }

    ll ans = 0;
    vector<int> double_mid_zero;
    int double_corner_zero=0, single_mid_zero=0, single_corner_zero=0, double_one=0;
    int first_one = INF, last_one = -1;
    for(int i = 0; i < n; ++i) {
        if(s[i] == '1') last_one = i;
    }
    for(int i = 0; i < n; ++i) {
        if(s[i] == '1') {
            first_one = i;
            break;
        }
    }
    if(first_one == INF) {
        cout << a << endl;
        return;
    }
    if(s[0] == '0') {
        ++single_corner_zero;
        double_corner_zero += first_one - 1;
    }
    if(s[n-1] == '0') {
        ++single_corner_zero;
        double_corner_zero += n - last_one - 2;
    }
    char pre = '1';
    int len = 1;
    for(int i = first_one+1; i <= last_one; ++i) {
        if(s[i] == pre) {
            ++len;
        }else {
            if(s[i] == '1') {
                if(len == 1) {
                    ++single_mid_zero;
                }else {
                    double_mid_zero.push_back(len);
                }
            }else {
                double_one += len-1;
            }
            len = 1;
            pre = s[i];
        }
    }
    double_one += len-1;
    sort(double_mid_zero.rbegin(), double_mid_zero.rend());

#ifdef DEBUG
    cout << "double_mid_zero: \n";
    for(auto x: double_mid_zero) cout << x << " ";
    cout << "\ndouble_corner_zero: " << double_corner_zero
        << "\nsingle_mid_zero: " << single_mid_zero
        << "\nsingle_corner_zero: " << single_corner_zero
        << "\ndouble_one: " << double_one << endl;
#endif



    solve(0, double_mid_zero, double_corner_zero, single_mid_zero, single_corner_zero, double_one, a, b, c, ans);
    solve(1, double_mid_zero, double_corner_zero, single_mid_zero, single_corner_zero, double_one, a, b, c, ans);
    cout << ans << endl;
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while(T--) {
        run();
    }
}