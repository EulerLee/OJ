#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <cstdlib>
#include <set>
#include <queue>
#include <bitset>
using namespace std;
typedef long long ll;
typedef long double ld;
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
#define LOWBIT(x) ((x)&(-x))

struct Node {
    int x;
    int y;
    bool operator==(const Node &r) const {
        return x == r.x && y == r.y;
    }
};

struct Segment {
    Node sta;
    Node end;
    bool iszero() {
        return sta == end;
    }
    bool parallel_x() {
        if(iszero()) return false;
        return sta.y == end.y;
    }
    bool parallel_y() {
        if(iszero()) return false;
        return sta.x == end.x;
    }
    bool operator==(const Segment &r) const {
        return (sta == r.sta && end == r.end) || (sta == r.end && end == r.sta);
    }
    bool operator!=(const Segment &r) const {
        return !(*this == r);
    }
};

int main()
{
    vector<Segment> segx;
    vector<Segment> segy;
    set<int> X;
    set<int> Y;
    Segment s;
    int px = 0, py = 0;
    REP(i, 4) {
        cin >> s.sta.x >> s.sta.y;
        X.insert(s.sta.x);
        Y.insert(s.sta.y);
        cin >> s.end.x >> s.end.y;
        X.insert(s.end.x);
        Y.insert(s.end.y);
        if(s.parallel_x()) {
            segx.push_back(s);
        }else if(s.parallel_y()) {
            segy.push_back(s);
        }
    }
    if(X.size() == 2 && Y.size() == 2 && segx.size() == 2 && segy.size() == 2 && segx[0] != segx[1] && segy[0] != segy[1]) {
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }
}
