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
#define PLL pair<ll, ll>
#define T3I tuple<int, int, int>
#define x first
#define y second
using namespace std;

typedef long long ll;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int INF = 0x3f3f3f3f;

const int MAXN = 1<<21;
ll dat[MAXN], N, add[MAXN];
void init(int n)
{
    N = 1;
    while(N < n) N <<= 1;
    for(int i = 0; i < N*2; ++i) {
        dat[i] = -LLINF;
        add[i] = 0;
    }
}

void update(int k, ll x)
{
    k += N-1;
    dat[k] = x;
    while(k) {
        k = (k-1)>>1;
        dat[k] = max(dat[k*2+1], dat[k*2+2]);
    }
}

void seg_add(int a, int b, ll x, int i, int j, int k)
{
    if(b <= a) return;
    if(a >= j || b <= i) return;
    if(a <= i && j <= b) {
        add[k] += x;
        dat[k] += x;
        return;
    }
    seg_add(a, b, x, i, (i+j)>>1, k*2+1);
    seg_add(a, b, x, (i+j)>>1, j, k*2+2);
    dat[k] = max(dat[k*2+1], dat[k*2+2]) + add[k];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, p;
    cin >> n >> m >> p;
    vector<PLL> A(n), B(m);
    vector<pair<PLL, ll>> C(p);
    for(int i = 0; i < n; ++i) {
        cin >> A[i].x >> A[i].y;
    }
    for(int i = 0; i < m; ++i) {
        cin >> B[i].x >> B[i].y;
    }
    for(int i = 0; i < p; ++i) {
        cin >> C[i].x.x >> C[i].x.y >> C[i].y;
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    sort(C.begin(), C.end());

    for(int i = 1; i < m; ++i) {
        if(B[i].x == B[i-1].x) B[i].y = B[i-1].y;
    }
    B.resize(unique(B.begin(), B.end())-B.begin());
    m = B.size();
    init(m);
    for(int i = 0; i < m; ++i) {
        update(i, -B[i].y);
    }
    int j = 0;
    ll ans = -LLINF;
    for(int i = 0; i < n; ++i) {
        ll a = A[i].x;
        while(j < p && C[j].x.x < a) {
            int pos = upper_bound(B.begin(), B.end(), PLL(C[j].x.y, LLINF)) - B.begin();
            seg_add(pos, m, C[j].y, 0, N, 0);
            ++j;
        }
        ans = max(ans, dat[0]-A[i].y);
    }
    cout << ans << endl;
}
