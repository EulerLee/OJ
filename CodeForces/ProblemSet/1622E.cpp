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
#include <numeric>
#define PII pair<int, int>
#define T3I tuple<int, int, int>
using namespace std;

typedef long long ll;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int INF = 0x3f3f3f3f;

void run()
{
    int n, m;
    cin >> n >> m;
    vector<int> X(n);
    vector<vector<int>> S(n, vector<int>(m));
    ll xsum = 0;
    for(int i = 0; i < n; ++i) {
        cin >> X[i];
        xsum += X[i];
    }
    vector<int> A(m);
    for(int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        for(int j = 0; j < m; ++j) {
            S[i][j] = s[j] - '0';
            A[j] += S[i][j];
        }
    }

    ll ans = -1;
    int ans_msk = -1;
    vector<int> P(m);
    for(int msk = 0; msk < (1<<n); ++msk) {
        auto B = A;
        ll sum = xsum;
        for(int i = 0; i < n; ++i) {
            if((msk>>i)&1) {
                for(int j = 0; j < m; ++j) {
                    B[j] -= 2*S[i][j];
                }
                sum -= 2ll*X[i];
            }
        }
        vector<int> idx(m);
        iota(idx.begin(), idx.end(), 0);
        auto cmp = [&](int i, int j) {
            return B[i] < B[j];
        };
        sort(idx.begin(), idx.end(), cmp);
        vector<int> p(m);
        for(int i = 0; i < m; ++i) {
            p[idx[i]] = i+1;
        }
        bool flg = true;
        for(int i = 0; i < n; ++i) {
            ll tmp = 0;
            for(int j = 0; j < m; ++j) {
                tmp += S[i][j] * p[j];
            }
            if((msk>>i)&1) {
                if(tmp > X[i]) {
                    flg = false;
                    break;
                }
            }else {
                if(tmp < X[i]) {
                    flg = false;
                    break;
                }
            }
        }
        if(!flg) {
            continue;
        }

        ll tmp = 0;
        for(int i = 0; i < m; ++i) {
            tmp += p[i]*B[i];
        }
        tmp -= sum;
        if(tmp > ans) {
            ans = tmp;
            P = p;
        }
    }

    for(auto x: P) {
        cout << x << " ";
    }
    cout << endl;
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