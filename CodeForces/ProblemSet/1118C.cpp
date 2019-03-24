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
    cin >> n;
    map<int, int> cnt;
    REP(i, n*n) {
        int tmp;
        cin >> tmp;
        cnt[tmp]++;
    }
    vector<vector<int>> ans(n, vector<int>(n, 0));
    if(n%2 == 0) {
        int n4 = n*n/4;
        int pos = 0;
        for(auto &e: cnt) {
            int x = e.first;
            if(cnt[x]%4 != 0) {
                cout << "NO" << endl;
                return 0;
            }else {
                REP(k, cnt[x]/4) {
                    int i = pos/(n/2);
                    int j = pos%(n/2);
                    ans[i][j] = ans[i][n-1-j] = ans[n-1-i][j] = ans[n-1-i][n-1-j] = x;
                    ++pos;
                }
            }
        }
        cout << "YES" << endl;
        REP(i, n) {
            REP(j, n) {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    }else {
        int n4 = (n/2)*(n/2);
        int n2 = n-1;
        int m4 = 0, m2 = 0;
        int pos = 0;
        for(auto &e: cnt) {
            int x = e.first;
            while(m4 < n4 && cnt[x] >= 4) {
                ++m4;
                cnt[x] -= 4;
                int i = pos/(n/2);
                int j = pos%(n/2);
                ans[i][j] = ans[i][n-1-j] = ans[n-1-i][j] = ans[n-1-i][n-1-j] = x;
                ++pos;
            }
            if(m4 == n4) break;
        }
        if(m4 < n4) {
            cout << "NO" << endl;
            return 0;
        }
        pos = 0;
        for(auto e: cnt) {
            int x = e.first;
            while(m2 < n2 && cnt[x] >= 2) {
                ++m2;
                cnt[x] -= 2;
                if(m2 <= n/2)
                    ans[n/2][pos] = ans[n/2][n-1-pos] = x;
                else
                    ans[pos-n/2][n/2] = ans[n-1-pos+n/2][n/2] = x;
                ++pos;
            }
            if(m2 == n2) break;
        }
        if(m2 < n2) {
            cout << "NO" << endl;
            return 0;
        }
        for(auto e: cnt) {
            if(e.second > 0) {
                ans[n/2][n/2] = e.first;
            }
        }
        cout << "YES" << endl;
        REP(i, n) {
            REP(j, n) {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    }
}
