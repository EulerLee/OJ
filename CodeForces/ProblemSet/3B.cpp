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

vector<int> a;
vector<int> b;

bool compare_a(int i, int j)
{
    return a[i] < a[j];
}

bool compare_b(int i, int j)
{
    return b[i] < b[j];
}

int main()
{
    accelerate();
    int n, v;
    cin >> n >> v;
    vector<int> oda;
    vector<int> odb;
    vector<int> aton;
    vector<int> bton;
    REP(i, n) {
        int x, y;
        cin >> x >> y;
        if(x == 1) {
            a.push_back(y);
            oda.push_back(a.size()-1);
            aton.push_back(i);
        }else {
            b.push_back(y);
            odb.push_back(b.size()-1);
            bton.push_back(i);
        }
    }

    sort(oda.begin(), oda.end(), compare_a);
    sort(odb.begin(), odb.end(), compare_b);

    int pa = (int)a.size()-1;
    int pb = (int)b.size()-1;

    int ans = 0;
    set<int> res_a;
    set<int> res_b;
    while(pa >= 0 && pb >= 0) {
        if(v >= 2) {
            int ta, tb;
            if(pa >= 1) {
                ta = a[oda[pa]]+a[oda[pa-1]];
                tb = b[odb[pb]];
                if(tb >= ta) {
                    res_b.insert(pb);
                    --pb;
                    ans += tb;
                }else {
                    res_a.insert(pa);
                    res_a.insert(pa-1);
                    pa -= 2;
                    ans += ta;
                }
                v -= 2;
            }else {
                ta = a[oda[pa]];
                tb = b[odb[pb]];
                if(tb >= ta) {
                    res_b.insert(pb);
                    --pb;
                    ans += tb;
                    v -= 2;
                }else {
                    res_a.insert(pa);
                    pa -= 1;
                    ans += ta;
                    v--;
                }
            }
        }else if(v == 1) {
            if(pa+1 < a.size()) {
                int ta = a[oda[pa]];
                int tb = b[odb[pb]]-a[oda[pa+1]];
                if(ta > tb) {
                    res_a.insert(pa);
                    ans += ta;
                    --v;
                    --pa;
                }else {
                    ans += tb;
                    res_a.erase(pa+1);
                    res_b.insert(pb);
                    ++pa;
                    --pb;
                    --v;
                }
            }else {
                ans += a[oda[pa]];
                res_a.insert(pa);
                --pa;
                --v;
            }
        }else {
            break;
        }
    }
#define AA(x) aton[oda[x]]
#define BB(x) bton[odb[x]]
    if(v == 0) {
        //cout << "v0" << endl;
        cout << ans << endl;
        for(auto x: res_a) {
            cout << AA(x)+1 << " ";
        }
        for(auto x: res_b) {
            cout << BB(x)+1 << " ";
        }
        cout << endl;
        return 0;
    }
    if(pa >= 0) {
        //cout << "b0" << endl;
        while(pa >= 0) {
            ans += a[oda[pa]];
            res_a.insert(pa);
            --pa;
            --v;
            if(v == 0) break;
        }
        cout << ans << endl;
        for(auto x: res_a) {
            cout << AA(x)+1 << " ";
        }
        for(auto x: res_b) {
            cout << BB(x)+1 << " ";
        }
        cout << endl;
        return 0;
    }else {
        //cout << "a0" << endl;
        while(pb >= 0 && v >= 2) {
            ans += b[odb[pb]];
            res_b.insert(pb);
            --pb;
            v -= 2;
        }
        if(v == 0 || pb < 0 || a.size() == 0) {
            cout << ans << endl;
            for(auto x: res_a) {
                cout << AA(x)+1 << " ";
            }
            for(auto x: res_b) {
                cout << BB(x)+1 << " ";
            }
            cout << endl;
            return 0;
        }else {
            int ta = a[oda[0]];
            int tb = b[odb[pb]];
            if(ta >= tb) {
                cout << ans << endl;
                for(auto x: res_a) {
                    cout << AA(x)+1 << " ";
                }
                for(auto x: res_b) {
                    cout << BB(x)+1 << " ";
                }
                cout << endl;
                return 0;
            }else {
                ans += tb-ta;
                res_a.erase(0);
                res_b.insert(pb);
                cout << ans << endl;
                for(auto x: res_a) {
                    cout << AA(x)+1 << " ";
                }
                for(auto x: res_b) {
                    cout << BB(x)+1 << " ";
                }
                cout << endl;
                return 0;
            }
        }
    }
}
