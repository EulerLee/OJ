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

const int MAXN = 5e5+1;

struct Node3 {
    ll x;
    ll y;
    ll z;
    Node3(ll x = 0, ll y = 0, ll z = 0) : x(x), y(y), z(z) {}
    void print() {
        cout << x << " " << y << " " << z << endl;
    }
};

struct Node2 {
    ll x;
    ll y;
    Node2(ll x = 0, ll y = 0) : x(x), y(y) {}
};

bool cmp1(const Node3 &l, const Node3 &r)
{
    return l.x > r.x;
}

bool cmp2(const Node3 &l, const Node3 &r)
{
    return l.y > r.y;
}

ll bit[MAXN+1];
ll getmaxz(int i)
{
    ll s = 0;
    while(i) {
        s = max(s, bit[i]);
        i -= LOWBIT(i);
    }
    return s;
}
void setmaxz(int i, ll x, int n)
{
    while(i < n) {
        if(bit[i] < x) {
            bit[i] = x;
        }else {
            break;
        }
        i += LOWBIT(i);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<Node3> ladies(n, Node3());
    REP(i, n) {
        cin >> ladies[i].x;
    }
    REP(i, n) {
        cin >> ladies[i].y;
    }
    REP(i, n) {
        cin >> ladies[i].z;
    }
    sort(ladies.begin(), ladies.end(), cmp2);
    /*cout << endl;
    for(auto x: ladies) {
        x.print();
    }*/
    //  离散化
    ll index = 1;
    ll pre = ladies[0].y;
    ladies[0].y = index;
    RANGE(i, 1, n) {
        if(ladies[i].y == pre) {
            ladies[i].y = index;
        }else {
            pre = ladies[i].y;
            ladies[i].y = ++index;
        }
    }
    /*cout << endl;
    for(auto x: ladies) {
        x.print();
    }*/
    sort(ladies.begin(), ladies.end(), cmp1);
    /*cout << endl;
    for(auto x: ladies) {
        x.print();
    }
    cout << endl;*/

    ll ans = 0;
    ll curx = ladies[0].x;
    vector<int> tmp;
    REP(i, n) {
        if(ladies[i].x != curx) {
            curx = ladies[i].x;
            for(auto x: tmp) {
                setmaxz(ladies[x].y, ladies[x].z, n);
            }
            tmp.clear();
        }
        tmp.push_back(i);
        if(ladies[i].z < getmaxz(ladies[i].y-1)) {
            ++ans;
            //ladies[i].print();
        }
    }
    cout << ans << endl;
}
