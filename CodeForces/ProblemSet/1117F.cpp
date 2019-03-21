#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;

int n,p;
string s;
int G[18][18];
const int MAXN = (1<<17)+1;
int vis[MAXN];
//int vab[MAXN][17][17];
int cur[MAXN];
int ans = INF;
vector<vector<int>> cnt(17, vector<int>(100001, 0));
vector<int> pos[17];

void input()
{
    cin >> n >> p;
    cin >> s;
    REP(i, p) {
        REP(j, p) {
            cin >> G[i][j];
        }
    }
    REP(i, n) {
        pos[s[i]-'a'].push_back(i);
        REP(j, p) {
            cnt[j][i+1] = cnt[j][i] + (s[i] == 'a'+j?1:0);
        }
    }
}

void mark(int m, int a, int b)
{
    if(cur[m] == 1) return;
    cur[m] = 1;
    vis[m] = 1;
    REP(i, p) {
        if(i == a || i == b) continue;
        if((m>>i)&1) {
            mark(m^(1<<i), a, b);
        }
    }
}

void findm(int a, int b)
{
    if(pos[a].size()*pos[b].size() == 0) return;
    int subm = 0;

    for(int i = 0; i < pos[a].size(); ++i) {
        int x = pos[a][i];
        if(pos[b][0] > x) {
            int y = pos[b][0];
            while(i+1 < pos[a].size() && pos[a][i+1] < y)
            {
                ++i;
            }
            x = pos[a][i];
            subm = 0;
            REP(k, p) {
                if(k == a || k == b) continue;
                if(cnt[k][y+1]-cnt[k][x+1] > 0) {
                    subm |= (1<<k);
                }
            }
            int m = (1<<p)-1;
            m ^= subm;
            //cout << m << ": " << a << " " << b << " " << subm << endl;
            mark(m, a, b);
        }else {
            int l = 0, r = pos[b].size();
            int m = (l+r)>>1;
            while(r-l > 1) {
                if(pos[b][m] < x) {
                    l = m;
                }else {
                    r = m;
                }
                m = (l+r)>>1;
            }
            if(r != pos[b].size()) {
                int y = pos[b][r];
                /*l = i;
                r = pos[a].size();
                m = (l+r)>>1;
                while(r-l > 1) {
                    if(pos[a][m] < y) {
                        l = m;
                    }else {
                        r = m;
                    }
                    m = (l+r)>>1;
                }*/
                while(i+1 < pos[a].size() && pos[a][i+1] < y)
                {
                    ++i;
                }
                x = pos[a][i];
                subm = 0;
                REP(k, p) {
                    if(k == a || k == b) continue;
                    if(cnt[k][y+1]-cnt[k][x+1] > 0) {
                        subm |= (1<<k);
                    }
                }
                m = (1<<p)-1;
                m ^= subm;
                //cout << m << ": " << a << " " << b << " " << subm << endl;
                mark(m, a, b);
            }
        }
    }
}

void findmeq(int a)
{
    int subm = 0;
    for(int i = 0; i < int(pos[a].size())-1; ++i) {
        subm = 0;
        int x = pos[a][i];
        int y = pos[a][i+1];
        //cout << x << " " << y << endl;
        REP(k, p) {
            if(k == a) continue;
            if(cnt[k][y]-cnt[k][x] > 0) {
                subm |= (1<<k);
            }
        }
        int m = (1<<p)-1;
        m ^= subm;

        //cout << m << ": " << a << endl;
        mark(m, a, a);
    }
}

bool DFS(int m)
{
    if(vis[m] == 0) {
        vis[m] = 2;
        bool flag = false;
        REP(i, p) {
            if((m>>i)&1) {
                flag |= DFS(m^(1<<i));
            }
        }
        if(!flag) {
            int len = 0;
            REP(i, p) {
                if((m>>i)&1) {
                    len += cnt[i][n];
                }
            }
            ans = min(ans, len);
        }
        return true;
    }
    return false;
}

void solve()
{
    REP(i, p) {
        REP(j, p) {
            if(G[i][j] == 0) {
                memset(cur, 0, sizeof cur);
                if(i == j) findmeq(i);
                else findm(i, j);
            }
        }
    }

    DFS((1<<p)-1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    input();
    solve();

    cout << ans << endl;
}
