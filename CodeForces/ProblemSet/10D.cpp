#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
#include <utility>
using namespace std;
typedef long long ll;
typedef long double ld;
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)

int c[501][501];    // end right on index i

void solve(vector<int> &A, vector<int> &B)
{
    int n = A.size();
    int m = B.size();
    int ans = 0;
    vector<vector<int>> index(n, vector<int>());
    RANGE(j, 1, m+1) {
        int maxlen = 0;
        RANGE(i, 1, n+1) {  // cycle-i inner
            if(A[i-1] < B[j-1] && c[i][j-1] > maxlen) {
                maxlen = c[i][j-1];
            }
            if(A[i-1] != B[j-1]) {
                c[i][j] = c[i][j-1];
            }else {
                c[i][j] = maxlen + 1;
                index[i-1].push_back(j-1);
            }
        }
    }

    /*RANGE(i, 1, m+1) {
        pre = index[i-1][0];
        RANGE(j, 1, n+1) {
            if(A[i-1] != B[j-1]) {
                c[i][j] = c[i][j-1];
                index[i-1][j-1] = pre;
            }else {
                c[i][j] = 1;
                RANGE(k, 1, i) {
                    if(c[i][j] < c[k][j-1]+1 && A[k-1] < B[j-1]) {
                        c[i][j] = c[k][j-1]+1;
                    }
                }
                index[i-1][j-1] = pre;
                pre = make_pair(i-1, j-1);
            }
        }
    }*/

    vector<int> path;
    int iend = -1;
    RANGE(i, 1, n+1) {
        if(ans < c[i][m]) {
            ans = c[i][m];
            iend = i-1;
        }
    }

    cout << ans << endl;

    if(ans == 0) {
        return;
    }

    int curi = iend;
    int maxj = index[curi][index[curi].size()-1];
    int len = ans;
    int pre = A[curi]+1;
    while(len > 0) {
        if(c[curi+1][maxj+1] >= len && A[curi] < pre) {
            path.push_back(A[curi]);
            pre = A[curi];
            --len;
            if(A[curi] == B[maxj]) {
                --maxj;
            }else {
                // find the max element that less than maxj in index[i]
                /*int l = 0;
                int r = index[curi].size();
                int mid = (l+r)>>1;
                while(r - l > 1) {
                    if(index[curi][mid] < maxj) {
                        l = mid;
                    }else {
                        r = mid;
                    }
                }
                maxj = l-1;*/
                int nextind = index[curi].size()-1;
                while(index[curi][nextind] >= maxj) {
                    --nextind;
                }
                maxj = index[curi][nextind]-1;
            }
        }
        --curi;
    }

    REP(i, ans) {
        cout << path[ans-i-1] << " ";
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n;
    vector<int> A(n, 0);
    REP(i, n) {
        cin >> A[i];
    }
    cin >> m;
    vector<int> B(m, 0);
    REP(i, m) {
        cin >> B[i];
    }

    solve(A, B);
}
