#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

const int MAX = 0x3f3f3f3f;

string sp[3][3];

struct pos {
    int x;
    int y;
};

int distance(pos p, pos a)
{
    if(p.x < 0 || p.x > 7 || p.y < 0 || p.y > 7) {
        return MAX;
    }else {
        return abs(p.x - a.x) + abs(p.y - a.y) - min(abs(p.x - a.x), abs(p.y - a.y));
    }
}

string mov(pos &p, pos a)
{
    int tmp;
    int m = MAX;
    string s;
    int dx, dy;
    pos tp;
    for(int i = -1; i <= 1; ++i) {
        for(int j = -1; j <= 1; ++j) {
            if(i == 0 && j == 0) continue;
            tp.x = p.x + i;
            tp.y = p.y + j;
            tmp = distance(tp, a);
            if(tmp < m) {
                m = tmp;
                dx = i;
                dy = j;
            }
        }
    }
    p.x += dx;
    p.y += dy;
    s = sp[dx + 1][dy + 1];
    return s;
}

int main()
{
    sp[0][0] = "LU";
    sp[0][1] = "U";
    sp[0][2] = "RU";
    sp[1][0] = "L";
    sp[1][2] = "R";
    sp[2][0] = "LD";
    sp[2][1] = "D";
    sp[2][2] = "RD";
    pos p, a;
    string s;
    cin >> s;
    p.y = s[0] - 'a';
    p.x = '8' - s[1];
    cin >> s;
    a.y = s[0] - 'a';
    a.x = '8' - s[1];

    vector<string> ans;
    while(!(p.x == a.x && p.y == a.y)) {
        ans.push_back(mov(p, a));
    }
    cout << ans.size() << endl;
    for(auto x: ans) {
        cout << x << endl;
    }
}
