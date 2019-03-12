#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;

struct Point
{
    int x;
    int y;
    int key;
    Point(int x = 0, int y = 0) : x(x), y(y), key(0) {}
    bool operator<(const Point &r) {
        return x == r.x ? y < r.y : x < r.x;
    }
    bool operator==(const Point &r) {
        return x == r.x && y == r.y;
    }
};

const int MAXN = 1<<18;
int N, dat[2*MAXN - 1];

void init(int n_)
{
    N = 1;
    while(N < n_) {
        N *= 2;
    }
    for(int i = 0; i < 2*N-1; ++i) {
        dat[i] = INF;
    }
}

void update(int k, int a)
{
    k += N-1;
    dat[k] = a;
    while(k > 0) {
        k = (k-1) / 2;
        dat[k] = min(dat[k*2 + 1], dat[k*2 + 2]);
    }
}

int query(int a, int b, int k, int l, int r)
{
    if(r <= a || b <= l) return INF;
    if(a <= l && r <= b) return dat[k];
    else {
        int vl = query(a, b, k*2 + 1, l, (l+r)/2);
        int vr = query(a, b, k*2 + 2, (l+r)/2, r);
        return min(vl, vr);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    vector<pair<int, Point>> cmds;
    vector<Point> poi;
    map<pair<int, int>, int> fcp;
    map<int, pair<int, int>> ktop;
    while(T--) {
        string cmd;
        int x, y;
        cin >> cmd >> x >> y;
        if(cmd == "add") {
            poi.push_back(Point(x, y));
            cmds.push_back(make_pair(1, Point(x, y)));
        }else if(cmd == "remove") {
            cmds.push_back(make_pair(2, Point(x, y)));
        }else if(cmd == "find"){
            poi.push_back(Point(x, y));
            cmds.push_back(make_pair(3, Point(x, y)));
        }
    }

    sort(poi.begin(), poi.end());
    int it = 0;
    for(auto e: poi) {
        if(fcp.find(make_pair(e.x, e.y)) == fcp.end()) {
            fcp[make_pair(e.x, e.y)] = it;
            ktop[it] = make_pair(e.x, e.y);
            ++it;
        }
    }
    int n = it+1;
    init(n);
    for(auto &e: cmds) {
        e.second.key = fcp[make_pair(e.second.x, e.second.y)];
    }

    for(auto cmd: cmds) {
        auto ele = cmd.second;
        if(cmd.first == 1) {
            update(ele.key, ele.key);
            //cout << ele.key << " " << query(0, N, 0, 0, N) << endl;
        }else if(cmd.first == 2) {
            update(ele.key, INF);
        }else {
            //cout << ele.key << " ";
            int v = query(ele.key+1, N, 0, 0, N);
            //cout << v << endl;
            if(v == INF) {
                cout << -1 << endl;
next:
                continue;
            }
            while(ktop[v].first <= ele.x || ktop[v].second <= ele.y) {
                v = query(v+1, N, 0, 0, N);
                if(v == INF) {
                    cout << -1 << endl;
                    goto next;
                }
            }
            cout << ktop[v].first << " " << ktop[v].second << endl;
        }
    }
}
