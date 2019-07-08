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

struct Seg {
    int l;
    int r;
    Seg(int l = 0, int r = 0) : l(l), r(r) {}
    bool operator<(const Seg &s) {
        return l == s.l ? r < s.r : l < s.l;
    }
};

const int MAXN = 5e5+10;
int ST[MAXN][20];

int solve(int x, int y)
{
    if(ST[x][19] < y) return -1;
    int k = 19;
    int ans = 0;
    while(k >= 0) {
        //cout << x << " " << k << ":\t" << ST[x][k] << endl;
        if(ST[x][k] >= y) {
            if(k == 0) {
                ans++;
            }
            --k;
        }else {
            ans += (1<<k);
            x = ST[x][k];
        }
    }
    return ans == 0 ? -1 : ans;
}

int main()
{
    accelerate();

    int n, m;
    cin >> n >> m;
    vector<Seg> S(n);
    REP(i, n) {
        cin >> S[i].l >> S[i].r;
    }
    sort(S.begin(), S.end());

    int R = -1;
    memset(ST, 0, sizeof ST);
    int j = 0;
    REP(i, MAXN) {
        if(j == n) {
            ST[i][0] = R;
            continue;
        }
        if(i < S[j].l) {
            ST[i][0] = R;
        }else {
            while(S[j].l == i) {
                R = max(R, S[j].r);
                ++j;
                if(j == n) break;
            }
            ST[i][0] = R;
        }
    }

    RANGE(j, 1, 20) {
        REP(i, MAXN) {
            int tmp = ST[i][j-1];
            if(tmp == -1) {
                ST[i][j] = -1;
            }else {
                ST[i][j] = ST[tmp][j-1];
            }
        }
    }

    REP(i, m) {
        int x, y;
        cin >> x >> y;
        cout << solve(x, y) << endl;
    }
}
