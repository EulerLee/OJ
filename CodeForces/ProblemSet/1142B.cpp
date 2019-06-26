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

const int MAXN = 2e5+10;
int STB[MAXN][18];

void init_ST(vector<int> &B)
{
    int n = B.size();
    REP(i, n) {
        STB[i][0] = B[i];
    }
    RANGE(j, 1, 18) {
        REP(i, n) {
            int tmp = STB[i][j-1];
            if(tmp == -1) {
                STB[i][j] = -1;
            }else {
                STB[i][j] = STB[tmp][j-1];
            }
        }
    }
}

int main()
{
    accelerate();

    int n, m, q;
    cin >> n >> m >> q;
    vector<int> P(n);
    vector<int> A(m);
    unordered_map<int, int> indp;
    REP(i, n) {
        cin >> P[i];
        indp[P[i]] = i;
    }
    vector<int> B(m, -1);
    vector<int> T(n+1, -1);
    REP(i, m) {
        cin >> A[i];
        int next = indp[A[i]]-1;
        if(next < 0) next = n-1;
        B[i] = T[P[next]];
        T[A[i]] = i;
    }
    /*REP(i, m) {
        cout << B[i] << " ";
    }
    cout << endl;*/
    init_ST(B);
    vector<int> L(m, -1);
    REP(i, m) {
        int nt = n-1;
        int x = 0;
        int ans = i;
        while(nt) {
            if(nt&1) {
                ans = STB[ans][x];
                if(ans == -1) break;
            }
            ++x;
            nt >>= 1;
        }
        L[i] = ans;
    }

    vector<int> LE(m, -1);
    int maxl = -1;
    RANGE(i, n-1, m) {
        if(L[i] != -1) {
            maxl = max(maxl, L[i]);
        }
        LE[i] = maxl;
    }
    vector<int> res(q);
    REP(i, q) {
        int l, r;
        cin >> l >> r;
        --l, --r;
        if(LE[r] >= l) {
            res[i] = 1;
        }else {
            res[i] = 0;
        }
    }
    for(auto x: res) cout << x;
    cout << endl;
}
