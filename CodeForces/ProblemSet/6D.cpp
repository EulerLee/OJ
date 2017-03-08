#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <queue>
#include <cstring>
#include <algorithm>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define RANGE(i, x, n) for(int i = x; i < n; ++i)
using namespace std;

const int MAX = 0x3f3f3f3f;

struct Node {
    int h[10];
    int c;
    int g;
    int f;
    vector<int> ans;
    bool operator <(const Node &r) const {
        return f < r.f;
    }
    bool operator >(const Node &r) const {
        return f > r.f;
    }
};

int getw(Node &node, int x, int n)
{
    int res = 0;
    REP(i, n) {
        if(node.h[i] >= 0) {
            res += node.h[i] + 1;
        }
    }
    if(res % x == 0) {
        node.g = res / x;
        return res / x;
    }else {
        node.g = res / x + 1;
        return res / x + 1;
    }
}

bool reached(Node node, int n)
{
    REP(i, n) {
        if(node.h[i] >= 0) {
            return false;
        }
    }
    return true;
}

void shot(int pos, int a, int b, Node &node, int n)
{
    node.h[pos] -= a;
    //h[pos] = h[pos] < 0 ? -1 : h[pos];
    if(pos - 1 >= 0) {
        node.h[pos - 1] -= b;
        //h[pos] = h[pos] < 0 ? -1 : h[pos];
    }
    if(pos + 1 < n) {
        node.h[pos + 1] -= b;
        //h[pos] = h[pos] < 0 ? -1 : h[pos];
    }
}

int getpos(Node &node, int n)
{
    REP(i, n) {
        if(node.h[i] >= 0) {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> h(n, 0);
    REP(i, n) {
        cin >> h[i];
    }
    vector<int> ans;

    Node node;
    REP(i, h.size()) {
        node.h[i] = h[i];
    }
    getw(node, a + b + b, n);
    node.c = 0;
    node.f = node.c + node.g;

    while(node.h[0] >= 0) {
        shot(1, a, b, node, n);
        node.ans.push_back(2);
    }
    while(node.h[n - 1] >= 0) {
        shot(n - 2, a, b, node, n);
        node.ans.push_back(n - 1);
    }

    priority_queue<Node, vector<Node>, greater<Node> > T;
    while(!T.empty()) T.pop();
    T.push(node);

    while(!T.empty()) {
        node = T.top();
        T.pop();
        if(reached(node, h.size())) {
            break;
        }else {
            Node n1, n2;
            n1.c = n2.c = node.c + 1;
            REP(i, h.size()) {
                n1.h[i] = n2.h[i] = node.h[i];
            }
            int pos = getpos(node, (int)h.size());
            shot(pos, a, b, n1, h.size());
            getw(n1, a + b + b, (int)h.size());
            n1.f = n1.c + n1.g;
            n1.ans.assign(node.ans.begin(), node.ans.end());
            n1.ans.push_back(pos + 1);
            T.push(n1);

            if(pos < n - 1) {
                shot(pos + 1, a, b, n2, h.size());
                getw(n2, a + b + b, (int)h.size());
                n2.f = n2.c + n2.g;
                n2.ans.assign(node.ans.begin(), node.ans.end());
                n2.ans.push_back(pos + 2);
                T.push(n2);
            }
        }
    }
    cout << node.ans.size() << endl;
    REP(i, node.ans.size()) {
        cout << node.ans[i];
        if(i == node.ans.size() - 1) {
            cout << endl;
        }else {
            cout << ' ';
        }
    }
}
