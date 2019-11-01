#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <iostream>
#include <string>
#include <vector>
#include <string>
#include <cstring>
#include <map>
#include <set>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <unordered_set>
#include <unordered_map>
#include <tuple>
#include <queue>
#define PII pair<int, int>
#define PILL pair<int, ll>
#define T3I tuple<int, int, int>
#define X first
#define Y second
#define STA(a, b) min(a, b), max(a, b)
using namespace std;

typedef long long ll;

const int INF = 0x3f3f3f3f;
const int MAXN = 2e5+10;
const int DSIZE = 1<<18;
int dat[DSIZE*2-1], N;
vector<PII> E[MAXN];

void ST_init(int n_)
{
    N = 1;
    while(N < n_) N*=2;
    /*for(int i = 0; i < N*2-1; ++i) {
        dat[i] = 0;
    }*/
}

void ST_add(int a, int b, int x, int i, int j, int k)
{
    if(b <= i || j <= a) return;
    if(a <= i && j <= b) {
        dat[k] += x;
        return;
    }
    ST_add(a, b, x, i, (i+j)>>1, k*2+1);
    ST_add(a, b, x, (i+j)>>1, j, k*2+2);
}

int ST_get(int k)
{
    k += N-1;
    int res = dat[k];
    while(k) {
        k = (k-1)/2;
        res += dat[k];
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;
    ST_init(MAXN);
    int L = INF, R = 0;
    for(int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        --x, --y;
        L = min(L, x);
        R = max(R, y);
        E[x].emplace_back(y, i);
        ST_add(x, y+1, 1, 0, N, 0);
    }

    auto cmp = [](const T3I &a, const T3I &b) {
        return get<1>(a) < get<1>(b);
    };
    priority_queue<T3I, vector<T3I>, decltype(cmp)> Q(cmp);
    vector<int> res;
    for(int i = L; i <= R; ++i) {
        for(auto e: E[i]) {
            Q.emplace(i, e.X, e.Y);
        }
        int val = ST_get(i);
        //cout << i+1 << ":\t" << val << endl;
        if(val > k) {
            for(int j = 0; j < val-k; ++j) {
                auto e = Q.top();
                int x = get<0>(e);
                int y = get<1>(e);
                int t = get<2>(e);
                res.push_back(t);
                Q.pop();
                ST_add(x, y+1, -1, 0, N, 0);
                //cout << "\t" << x+1 << " " << y+1 << endl;
            }
        }
    }
    cout << res.size() << endl;
    for(auto x: res) cout << x+1 << " ";
}
