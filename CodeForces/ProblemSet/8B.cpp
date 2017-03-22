#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define RANGE(i, x, n) for(int i = x; i < n; ++i)
using namespace std;

const int MAXN = 201;
int vis[MAXN][MAXN];

void visit(int x, int y, int ox, int oy)
{
    RANGE(i, -1, 2) {
        vis[ox][oy+i] = 1;
    }
    RANGE(i, -1, 2) {
        vis[ox+i][oy] = 1;
    }
    RANGE(i, -1, 2) {
        vis[x][y+i] = (vis[x][y+i] == 1 ? 1 : 2);
    }
    RANGE(i, -1, 2) {
        vis[x+i][y] = (vis[x+i][y] == 1 ? 1 : 2);
    }
    vis[x][y] = 1;
}

int main()
{
    string s;
    cin >> s;
    int x, y, ox, oy;
    x = y = 100;
    vis[x][y] = 1;
    vis[x+1][y] = vis[x-1][y] = vis[x][y-1] = vis[x][y+1] = 2;
    ox = oy = -1;
    for(auto c: s) {
        ox = x;
        oy = y;
        switch(c) {
            case 'L': --x; break;
            case 'R': ++x; break;
            case 'U': ++y; break;
            case 'D': --y; break;
            default: break;
        }
        //cout << x << ' ' << y << ' ' << vis[x][y] << endl;
        if(vis[x][y] == 1) {
            cout << "BUG" << endl;
            return 0;
        }else {
            visit(x, y, ox, oy);
        }
    }
    cout << "OK" << endl;
}