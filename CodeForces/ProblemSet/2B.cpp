#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <cstring>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define RANGE(i, x, n) for(int i = x; i < n; ++i)
using namespace std;

const int MAX = 0x3f3f3f3f;
long long g[1000][1000];
char path2[1000][1000];
char path5[1000][1000];
long long five[1000][1000];
long long two[1000][1000];
long long r5[1000][1000];
long long r2[1000][1000];

void getres5(int i, int j, int n)
{
    if(r5[i][j] != -1) {
        return;
    } else if(i == 0) {
        if(j == 0) {
            r5[i][j] = five[i][j];
        }else {
            r5[i][j] = five[i][j] + r5[i][j - 1];
            path5[i][j] = 'R';
        }
    }else if(j == 0) {
        r5[i][j] = five[i][j] + r5[i - 1][j];
        path5[i][j] = 'D';
    }else {
        long long fu, fl;
        fu = five[i][j] + r5[i - 1][j];
        fl = five[i][j] + r5[i][j - 1];
        if(fu < fl) {
            r5[i][j] = fu;
            path5[i][j] = 'D';
        }else {
            r5[i][j] = fl;
            path5[i][j] = 'R';
        }
    }
}

void printpath5(int i, int j, int n)
{
    if(i == 0 && j == 0) {
        return;
    }else {
        if(path5[i][j] == 'D') {
            printpath5(i - 1, j, n);
            cout << 'D';
        }else {
            printpath5(i, j - 1, n);
            cout << 'R';
        }
    }
}

void getres2(int i, int j, int n)
{
    if(r2[i][j] != -1) {
        return;
    }else if(i == 0) {
        if(j == 0) {
            r2[i][j] = two[i][j];
        }else {
            r2[i][j] = two[i][j] + r2[i][j - 1];
            path2[i][j] = 'R';
        }
    }else if(j == 0) {
        r2[i][j] = two[i][j] + r2[i - 1][j];
        path2[i][j] = 'D';
    }else {
        long long tu, tl;
        tu = two[i][j] + r2[i - 1][j];
        tl = two[i][j] + r2[i][j - 1];
        if(tu < tl) {
            r2[i][j] = tu;
            path2[i][j] = 'D';
        }else {
            r2[i][j] = tl;
            path2[i][j] = 'R';
        }
    }
}

void printpath2(int i, int j, int n)
{
    if(i == 0 && j == 0) {
        return;
    }else {
        if(path2[i][j] == 'D') {
            printpath2(i - 1, j, n);
            cout << 'D';
        }else {
            printpath2(i, j - 1, n);
            cout << 'R';
        }
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    memset(g, 0, sizeof g);
    memset(five, 0, sizeof five);
    memset(two, 0, sizeof two);
    memset(r5, -1, sizeof r5);
    memset(r2, -1, sizeof r2);
    int n;
    long long tmp;
    int zx, zy;
    bool zeroflag = false;
    cin >> n;
    REP(i, n)
        REP(j, n) {
            cin >> g[i][j];
            tmp = g[i][j];
            if(tmp == 0) {
                zeroflag = true;
                zx = i;
                zy = j;
                two[i][j] = five[i][j] = 1;
                continue;
            }
            while(tmp % 2 == 0) {
                tmp /= 2;
                ++two[i][j];
            }
            while(tmp % 5 == 0) {
                tmp /= 5;
                ++five[i][j];
            }
            g[i][j] /= tmp;
        }

    REP(i, n)
        REP(j, n) {
            // double scan
            getres5(i, j, n);
            getres2(i, j, n);
        }

    int ans = min(r5[n - 1][n - 1], r2[n - 1][n - 1]);
    if(zeroflag) {
        if(ans > 1) {
            cout << 1 << endl;
            REP(i, zx) {
                cout << 'D';
            }
            REP(i, n - 1) {
                cout << 'R';
            }
            RANGE(i, zx, n - 1) {
                cout << 'D';
            }
        }else {
            cout << ans << endl;
            if(r5[n - 1][n - 1] < r2[n - 1][n - 1]) {
                printpath5(n - 1, n - 1, n);
            }else {
                printpath2(n - 1, n - 1, n);
            }
        }
    }else {
        cout << ans << endl;
        if(r5[n - 1][n - 1] < r2[n - 1][n - 1]) {
            printpath5(n - 1, n - 1, n);
        }else {
            printpath2(n - 1, n - 1, n);
        }
    }
    cout << endl;
}
