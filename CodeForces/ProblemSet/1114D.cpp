#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;

int N;
vector<int> C(5001, 0);
int cur[5001];
int pre[5001];

int LCS(vector<int> &A, vector<int> &B)
{
    int n = A.size();
    int m = B.size();
    REP(i, n+1) {
        REP(j, m+1) {
            if(i*j == 0) {
                cur[j] = 0;
            }else {
                if(A[i-1] == B[j-1]) {
                    cur[j] = pre[j-1] + 1;
                }else {
                    cur[j] = max(pre[j], cur[j-1]);
                }
            }
        }
        memcpy(pre, cur, sizeof pre);
    }
    return cur[m];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> N;
    int pre;
    int pos = 0;
    for(int i = 0; i < N; ++i) {
        if(i == 0) {
            cin >> C[pos];
            pre = C[0];
            ++pos;
        }else {
            cin >> C[pos];
            if(C[pos] == pre) {
                continue;
            }else {
                pre = C[pos];
                ++pos;
            }
        }
    }
    N = pos;

    vector<int> RC(N, 0);
    for(int i = 0; i < N; ++i) {
        RC[i] = C[N-1-i];
    }
    cout << N - 1 - LCS(C, RC)/2 << endl;
}
