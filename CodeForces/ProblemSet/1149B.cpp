#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define RANGE(i, x, n) for(int i = x; i < n; ++i)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int INF = 0x3f3f3f3f;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int n, q;
const int MAXN = 1e5+1;
string wou;
int dp[251][251][251];
int pos[3][251];
int nex[MAXN][26];
char s[3][251];
int cnt[3];

int solve(int i = cnt[0], int j = cnt[1], int k = cnt[2])
{
    if(i == 0 && j == 0 && k == 0) {
        return -1;
    }
    int &res = dp[i][j][k];

    if(res != -1) {
        return res;
    }
    res = INF;
    if(i > 0) {
        int tmp = solve(i-1, j, k);     // index
        if(tmp != INF) res = min(res, nex[tmp+1][s[0][i-1]-'a']);
    }
    if(j > 0) {
        int tmp = solve(i, j-1, k);     // index
        if(tmp != INF) res = min(res, nex[tmp+1][s[1][j-1]-'a']);
    }
    if(k > 0) {
        int tmp = solve(i, j, k-1);     // index
        if(tmp != INF) res = min(res, nex[tmp+1][s[2][k-1]-'a']);
    }
    //cout << i << " " << j << " " << k << ": " << res << endl;
    return res;
}

int main()
{
    accelerate();

    cin >> n >> q;
    cin >> wou;

    int pre[26];
    memset(nex, INF, sizeof nex);
    memset(pre, 0, sizeof pre);
    memset(dp, -1, sizeof dp);
    REP(i, n) {
        int shf = wou[i]-'a';
        RANGE(j, pre[shf], i+1) {
            nex[j][shf] = i;
        }
        pre[shf] = i+1;
    }

    /*REP(i, n+1) {
        cout << i << ":\n";
        REP(j, 26) {
            if(nex[i][j] != INF) {
                cout << "\t" << (char)('a'+j) << "\t" << nex[i][j] << endl;
            }
        }
    }*/
    REP(i, q) {
        char sg;
        cin >> sg;
        int nm;
        cin >> nm;
        --nm;
        if(sg == '+') {
            char ch;
            cin >> ch;
            s[nm][cnt[nm]] = ch;
            ++cnt[nm];
            REP(t0, cnt[(nm+1)%3]+1) {
                REP(t1, cnt[(nm+2)%3]+1) {
                    if(nm == 0) {
                        dp[cnt[nm]][t0][t1] = -1;
                    }else if(nm == 1) {
                        dp[t1][cnt[nm]][t0] = -1;
                    }else {
                        dp[t0][t1][cnt[nm]] = -1;
                    }
                }
            }
            if(solve() != INF) {
                cout << "YES" << endl;
            }else {
                cout << "NO" << endl;
            }
        }else {
            --cnt[nm];
            if(solve() != INF) {
                cout << "yes" << endl;
            }else {
                cout << "no" << endl;
            }
        }
    }
}
