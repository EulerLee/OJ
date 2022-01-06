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
#include <bitset>
#define PII pair<int, int>
#define T3I tuple<int, int, int>
using namespace std;

typedef long long ll;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int INF = 0x3f3f3f3f;

const int MAXA = 1e5+1;
const int MAXN = 2*MAXA;
int N, dat[MAXN*2];

void init(int n)
{
    N = 1;
    while(N < n) {
        N <<= 1;
    }
    for(int i = 0; i < N*2; ++i) {
        dat[i] = INF;
    }
}

void update(int k, int x)
{
    k += N-1;
    dat[k] = x;
    while(k != 0) {
        k = (k-1)/2;
        dat[k] = min(dat[k*2+1], dat[k*2+2]);
    }
}

int query(int l, int r, int i, int j, int k)
{
    if(l >= j || r <= i) {
        return INF;
    }
    if(l <= i && j <= r) {
        return dat[k];
    }
    int vl = query(l, r, i, (i+j)>>1, k*2+1);
    int vr = query(l, r, (i+j)>>1, j, k*2+2);
    return min(vl, vr);
}

void run()
{
    int n, m;
    cin >> n >> m;
    vector<int> T(n);
    map<int, int> mp;
    int tot = 0;
    for(int i = 0; i < n; ++i) {
        cin >> T[i];
        mp[T[i]];
    }
    vector<int> S[m];
    vector<ll> suma(m);
    for(int i = 0; i < m; ++i) {
        int k;
        cin >> k;
        tot += k;
        ll sum = 0;
        for(int j = 0; j < k; ++j) {
            int age;
            cin >> age;
            S[i].push_back(age);
            sum += age;
        }
        suma[i] = sum;
        int upb = (sum + k - 1) / k;
        mp[upb];
        for(int j = 0; j < k; ++j) {
            if(k > 1) {
                int tmp = (sum - S[i][j] + k - 2) / (k-1);
                mp[tmp];
            }
        }
    }

    int cnt = 1;
    for(auto &e: mp) {
        e.second = cnt++;
    }
    mp[0] = 0;

    init(cnt);
    vector<int> A(cnt);
    for(int i = 0; i < n; ++i) {
        A[mp[T[i]]]++;
    }
    for(int i = 0; i < m; ++i) {
        int k = S[i].size();
        int upb = (suma[i] + k - 1) / k;
        A[mp[upb]]--;
    }
    for(int i = cnt-2; i >= 0; --i) {
        A[i] += A[i+1];
    }
    for(int i = 0; i < cnt; ++i) {
        update(i, A[i]);
    }

    string ans(tot, '0');
    cnt = 0;
    for(int i = 0; i < m; ++i) {
        int k = S[i].size();
        int ori = (suma[i] + k-1) / k;
        ori = mp[ori];
        for(int j = 0; j < k; ++j) {
            int cur = 0; 
            if(k > 1) {
                cur = (suma[i] - S[i][j] + k-2) / (k-1);
            }
            cur = mp[cur];
            int v[3];
            if(cur < ori) {
                v[0] = query(0, cur+1, 0, N, 0);
                v[1] = query(cur+1, ori+1, 0, N, 0) + 1;
                v[2] = query(ori+1, N, 0, N, 0);
            }else {
                v[0] = query(0, ori+1, 0, N, 0);
                v[1] = query(ori+1, cur+1, 0, N, 0) - 1;
                v[2] = query(cur+1, N, 0, N, 0);
            }
            if(v[0] >= 0 && v[1] >= 0 && v[2] >= 0) {
                ans[cnt] = '1';
            }
            ++cnt;
        }
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while(T--) {
        run();
    }
}