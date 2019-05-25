#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define RANGE(i, x, n) for(int i = x; i < n; ++i)
#define REG(x, y) make_pair(min(x, y), max(x, y))
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int INF = 0x3f3f3f3f;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

struct Node {
    int ind;
    int a;
    int b;
    Node(int ind = 0, int a = 0, int b = 0): ind(ind), a(a), b(b) {}
    bool operator<(const Node &r) const {
        return a-b > r.a-r.b;
    }
};

int main()
{
    accelerate();
    string s;
    cin >> s;
    int n = s.size();
    int m = 0;
    priority_queue<Node> Q;
    int cnt0 = 0, cnt1 = 0;

    ll ans = 0;
    int i = 0;
    for(auto &x: s) {
        if(x == '(') {
            ++cnt0;
        }else if(x == ')') {
            ++cnt1;
            if(cnt1 > cnt0) {
                if(Q.empty()) {
                    cout << -1 << endl;
                    return 0;
                }
                auto node = Q.top();
                Q.pop();
                ans += node.a-node.b;
                s[node.ind] = '(';
                ++cnt0;
                --cnt1;
            }
        }else {
            int a, b;
            cin >> a >> b;
            if(cnt0 > cnt1) {
                ans += b;
                Q.push(Node(i, a, b));
                x = ')';
                ++cnt1;
            }else {
                x = ')';
                Q.push(Node(i, a, b));
                ans += b;
                auto node = Q.top();
                Q.pop();
                ans += node.a-node.b;
                s[node.ind] = '(';
                ++cnt0;
            }
        }
        ++i;
    }
    cnt0 = cnt1 = 0;
    for(auto x: s) {
        if(x == ')') ++cnt1;
        else ++cnt0;
        if(cnt1 > cnt0) {
            cout << -1 << endl;
            return 0;
        }
    }
    if(cnt0 != cnt1) {
        cout << -1 << endl;
        return 0;
    }
    cout << ans << endl;
    cout << s << endl;
}
