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
#include <bitset>
#define PII pair<int, int>
#define T3I tuple<int, int, int>
using namespace std;

typedef long long ll;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int INF = 0x3f3f3f3f;

typedef vector<int> vec;
typedef vector<vec> mat;

void run()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> A(n, vector<int>(m));
    vector<int> idx(n);

    for(int i = 0; i < n; ++i) {
        idx[i] = i;
        for(int j = 0; j < m; ++j) {
            cin >> A[i][j];
        }
    }
    // auto cmp = [&](const vector<int> &l, const vector<int> &r ) {
    //     return l[0] < r[0];
    // };
    auto cmp = [&](int i, int j) {
        return A[i][0] < A[j][0];
    };
    sort(idx.begin(), idx.end(), cmp);

    vector<mat> M(4, mat(n, vec(m)));
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            M[0][i][j] = A[idx[i]][j];
            if(i > 0) M[0][i][j] = max(M[0][i][j], M[0][i-1][j]);
            if(j > 0) M[0][i][j] = max(M[0][i][j], M[0][i][j-1]);
        }
    }
    for(int i = n-1; i >= 0; --i) {
        for(int j = 0; j < m; ++j) {
            M[1][i][j] = A[idx[i]][j];
            if(i < n-1) M[1][i][j] = min(M[1][i][j], M[1][i+1][j]);
            if(j > 0) M[1][i][j] = min(M[1][i][j], M[1][i][j-1]);
        }
    }
    for(int i = 0; i < n; ++i) {
        for(int j = m-1; j >= 0; --j) {
            M[2][i][j] = A[idx[i]][j];
            if(i > 0) M[2][i][j] = min(M[2][i][j], M[2][i-1][j]);
            if(j < m-1) M[2][i][j] = min(M[2][i][j], M[2][i][j+1]);
        }
    }
    for(int i = n-1; i >= 0; --i) {
        for(int j = m-1; j >= 0; --j) {
            M[3][i][j] = A[idx[i]][j];
            if(i < n-1) M[3][i][j] = max(M[3][i][j], M[3][i+1][j]);
            if(j < m-1) M[3][i][j] = max(M[3][i][j], M[3][i][j+1]);
        }
    }

    for(int i = 0; i < n-1; ++i) {
        for(int j = 0; j < m-1; ++j) {
            if(M[0][i][j] < M[1][i+1][j] && M[2][i][j+1] > M[3][i+1][j+1]) {
                string ans(n, 'R');
                for(int k = 0; k < n; ++k) {
                    ans[idx[k]] = (k <= i ? 'B' : 'R');
                }
                cout << "YES" << endl << ans << " " << j+1 << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
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