#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

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
#define PII pair<int, int>
#define PILL pair<int, ll>
#define T3I tuple<int, int, int>
#define X first
#define Y second
#define STA(a, b) min(a, b), max(a, b)
using namespace std;

typedef long long ll;

const int INF = 0x3f3f3f3f;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    string s;
    cin >> n >> s;
    int pos = -1;
    int maxc = 0;
    int val = 0;
    int cnt = 0;
    for(int i = n-1; i >= 0; --i) {
        if(s[i] == ')') {
            --val;
            ++cnt;
        }else {
            ++val;
            if(val > maxc) {
                maxc = val;
                pos = i;
            }
        }
    }
    if(cnt != n-cnt) {
        cout << 0 << endl << "1 1" << endl;
        return 0;
    }
    if(pos != -1) {
        s = s.substr(pos) + s.substr(0, pos);
    }
    //cout << s << endl;

    int res = 0;
    PII ans(1, 1);
    vector<int> A(n+1);
    for(int i = 1; i <= n; ++i) {
        if(s[i-1] == '(') {
            A[i] = A[i-1]+1;
        }else {
            A[i] = A[i-1]-1;
        }
        if(A[i] == 0) ++res;
    }
    //for(auto x: A) cout << x << " "; cout << endl;

    int flg = 0;
    cnt = 0;
    PII ans_2(-1, -1);
    int tmp = 0;
    int L = -1, R = -1;
    for(int i = 0; i <= n; ++i) {
        if(A[i] < 2) {
            if(flg == 0) continue;
            R = i;
            //cout << L << " " << R << endl;
            if(cnt < tmp) {
                cnt = tmp;
                ans_2 = make_pair(L, R);
            }
            tmp = 0;
            flg = 0;
        }else if(A[i] == 2) {
            if(flg) ++tmp;
            else {
                L = i;
                tmp = 1;
                flg = 1;
            }
        }
    }
    if(cnt > 0) {
        res += cnt;
        ans = ans_2;
    }

    cnt = 0;
    flg = 0;
    PII ans_1(-1, -1);
    tmp = 0;
    L = R = -1;
    for(int i = 0; i <= n; ++i) {
        if(A[i] < 1) {
            if(flg == 0) continue;
            R = i;
            if(cnt < tmp) {
                cnt = tmp;
                ans_1 = make_pair(L, R);
            }
            tmp = 0;
            flg = 0;
        }else if(A[i] == 1) {
            if(flg) ++tmp;
            else {
                L = i;
                tmp = 1;
                flg = 1;
            }
        }
    }
    if(cnt > res) {
        res = cnt;
        ans = ans_1;
    }
    if(pos != -1) {
        cout << res << endl << (ans.X-1-(n-pos)+n)%n+1 << " " << (ans.Y-1-(n-pos)+n)%n+1 << endl;
    }else {
        cout << res << endl << ans.X << " " << ans.Y << endl;
    }
}
