/*
单向图的最长边
*/
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define RANGE(i, x, n) for(int i = x; i < n; ++i)
using namespace std;

//vector<vector<int> > g;
bool g[5000][5000];
int len[5000];
int nextp[5000];

int longestpath(int &n, int &x, int &w, int &h, vector<int> &wi, vector<int> &hi)
{
    if(len[x] != -1) {
        return len[x];
    }
    vector<int> adj;
    REP(i, n) {
        if(g[x][i]) {
            adj.push_back(i);
        }
    }
    if(adj.size() == 0) {
        if(wi[x] > w && hi[x] > h) {
            len[x] = 1;
            nextp[x] = 0;
            return 1;
        }else {
            len[x] = 0;
            return 0;
        }
    }else {
        if(wi[x] > w && hi[x] > h) {
            int maxl = -1, tmp;
            int pos;
            for(auto y: adj) {
                tmp = longestpath(n, y, w, h, wi, hi);
                if(maxl < tmp) {
                    maxl = tmp;
                    pos = y;
                }
            }
            len[x] = 1 + maxl;
            if(maxl > 0) {
                nextp[x] = pos + 1;
            }else {
                nextp[x] = 0;
            }
            return len[x];
        }else {
            len[x] = 0;
            return 0;
        }
    }
}

int main()
{
    memset(len, -1, sizeof len);
    memset(nextp, 0, sizeof nextp);
    int n, w, h;
    cin >> n >> w >> h;
    vector<int> wi(n, 0);
    vector<int> hi(n, 0);
    REP(i, n) {
        cin >> wi[i] >> hi[i];
    }
    REP(i, n) {
        RANGE(j, i, n) {
            g[i][j] = g[j][i] = false;
            if(wi[i] < wi[j] && hi[i] < hi[j]) {
                g[i][j] = true;
            }else if(wi[i] > wi[j] && hi[i] > hi[j]) {
                g[j][i] = true;
            }
        }
    }
    int ans = -1, tmp;
    int pos;
    REP(i, n) {
        tmp = longestpath(n, i, w, h, wi, hi);
        if(ans < tmp) {
            ans = tmp;
            pos = i + 1;
        }
    }
    cout << ans << endl;
    if(ans) {
        while(pos > 0) {
            cout << to_string(pos) << " ";
            pos = nextp[pos - 1];
        }
        cout << endl;
    }
}
