#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define RANGE(i, x, n) for(int i = x; i < n; ++i)
#define REG(x, y) make_pair(min(x, y), max(x, y))
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

const int MAXN = 3e5+10;
int las[MAXN][19];
int got[MAXN][19];



int main()
{
    accelerate();
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    REP(i, n) {
        cin >> a[i];
    }

    for(int i = n-1; i >= 0; --i) {
        if(i == n-1) {
            REP(k, 19) {
                las[i][k] = INF;
            }
        }else {
            REP(k, 19) {
                if((a[i+1]>>k)&1) {
                    las[i][k] = i+1;
                }else {
                    las[i][k] = las[i+1][k];
                }
            }
        }
    }

    for(int i = n-1; i >= 0; --i) {
        if(i == n-1) {
            REP(k, 20) {
                if((a[i]>>k)&1) {
                    got[i][k] = i;
                }else {
                    got[i][k] = INF;
                }
            }
        }else {
            set<int> S;
            REP(k, 19) {
                if((a[i]>>k)&1) {
                    got[i][k] = i;
                    int j = las[i][k];
                    if(j != INF) S.insert(j);
                }else {
                    got[i][k] = INF;
                }
            }
            REP(k, 19) {
                if(((a[i]>>k)&1) == 0) {
                    for(auto x: S) {
                        got[i][k] = min(got[i][k], got[x][k]);
                    }
                }
            }
        }
    }

    REP(i, q) {
        int x, y;
        cin >> x >> y;
        --x, --y;
        int flg = 0;
        REP(k, 19) {
            if((a[y]>>k)&1) {
                if(got[x][k] <= y) {
                    flg = 1;
                    break;
                }
            }
        }
        if(flg) {
            cout << "Shi" << endl;
        }else {
            cout << "Fou" << endl;
        }
    }
}
