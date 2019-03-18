#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
using namespace std;

int N, A, B;

int firstdiff(int a, int b)
{
    a = a^b;
    b = 0;
    while((a&1) == 0) {
        ++b;
        a >>= 1;
    }
    return b+1;
}

int delps(int a, int ps)
{
    int ae = (a >> (ps-1)) << (ps-1);
    ae = ae ^ a;
    ae += (a >> ps) << (ps-1);
    return ae;
}

int addps(int a, int ps, int bit)
{
    int b = (a >> (ps-1)) << (ps-1);
    b = b^a;
    int c = (a >> (ps-1)) << 1;
    c += bit;
    c <<= (ps-1);
    c += b;
    return c;
}

vector<int> solve(int a, int b, int n)
{
    if(n == 1) {
        vector<int> ans = {a, b};
        return ans;
    }
    int ps = firstdiff(a, b);
    //cout << a << " " << b << " " << ps << endl;
    int ae = delps(a, ps);
    int be = delps(b, ps);
    int c = ae^1;
    vector<int> vl = solve(ae, c, n-1);
    vector<int> vr = solve(c, be, n-1);
    for(auto &x: vl) {
        x = addps(x, ps, (a>>(ps-1))&1);
    }
    for(auto x: vr) {
        x = addps(x, ps, (b>>(ps-1))&1);
        vl.push_back(x);
    }
    return vl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> N >> A >> B;
    int m = A^B;
    int d = 0;
    while(m) {
        if(m&1) ++d;
        m >>= 1;
    }
    if(d%2 == 0) {
        cout << "NO" << endl;
        return 0;
    }
    vector<int> ans = solve(A, B, N);
    cout << "YES" << endl;
    for(auto x: ans) {
        cout << x << " ";
    }
    cout << endl;
}
