#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define RANGE(i, x, n) for(int i = x; i < n; ++i)
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

const int MAXN = 5e5+10;
int par[MAXN];
int ran[MAXN];
int sum[MAXN];

void init(int n)
{
    REP(i, n) {
        par[i] = i;
        ran[i] = 0;
        sum[i] = 1;
    }
}

int find(int x)
{
    if(par[x] == x) {
        return x;
    }else {
        return par[x] = find(par[x]);
    }
}

void unite(int x, int y)
{
    x = find(x);
    y = find(y);
    if(x == y) return;
    if(ran[x] < ran[y]) {
        par[x] = y;
        sum[y] += sum[x];
    }else {
        par[y] = x;
        sum[x] += sum[y];
        if(ran[x] == ran[y]) ran[x]++;
    }
}

bool issame(int x, int y)
{
    return find(x) == find(y);
}

int main()
{
    accelerate();

    int n, m;
    cin >> n >> m;
    init(n);
    REP(i, m) {
        int k;
        cin >> k;
        int x;
        REP(i, k) {
            if(i == 0) {
                cin >> x;
                --x;
            }else {
                int y;
                cin >> y;
                --y;
                unite(x, y);
            }
        }
    }

    REP(i, n) {
        cout << sum[find(i)] << " ";
    }
    cout << endl;
}
