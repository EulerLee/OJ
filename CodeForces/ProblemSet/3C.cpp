#include <iostream>
#include <vector>
#include <string>
#define REP(i, n) for(int i = 0; i < n; ++i)
using namespace std;

bool win(char g[3][3], char x)
{
    if(g[0][0] == x && g[0][1] == x && g[0][2] == x) return true;
    if(g[1][0] == x && g[1][1] == x && g[1][2] == x) return true;
    if(g[2][0] == x && g[2][1] == x && g[2][2] == x) return true;
    if(g[0][0] == x && g[1][0] == x && g[2][0] == x) return true;
    if(g[0][1] == x && g[1][1] == x && g[2][1] == x) return true;
    if(g[0][2] == x && g[1][2] == x && g[2][2] == x) return true;
    if(g[0][0] == x && g[1][1] == x && g[2][2] == x) return true;
    if(g[0][2] == x && g[1][1] == x && g[2][0] == x) return true;
    return false;
}

int main()
{
    char g[3][3];
    int nx = 0, no = 0;
    REP(i, 3)
        REP(j, 3){
            cin >> g[i][j];
            if(g[i][j] == 'X') {
                ++nx;
            }else if(g[i][j] == '0') {
                ++no;
            }
        }
    if(no > nx || nx - no > 1) {
        cout << "illegal" << endl;
    }else if(win(g, 'X') && win(g, '0')) {
        cout << "illegal" << endl;
    }else if(win(g, 'X') && no == nx) {
        cout << "illegal" << endl;
    }else if(win(g, '0') && nx == no + 1) {
        cout << "illegal" << endl;
    }else if(win(g, 'X')) {
        cout << "the first player won" << endl;
    }else if(win(g, '0')) {
        cout << "the second player won" << endl;
    }else if(no + nx == 9) {
        cout << "draw" << endl;
    }else if(nx == no) {
        cout << "first" << endl;
    }else {
        cout << "second" << endl;
    }
}
