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

const int MAXN = 1e5+1;
int N, dat[MAXN*4], addi[MAXN*4];

void init(int n)
{
    N = 1;
    while(N < n) N <<= 1;
    for(int i = 0; i < N*2; ++i) {
        dat[i] = addi[i] = 0;
    }
}

void update(int id, int x, int i, int j, int k)
{
    if(k == id+N-1) {
        dat[k] = x;
        addi[k] = 0;
    }else {
        addi[k*2+1] += addi[k];
        addi[k*2+2] += addi[k];
        addi[k] = 0;
        if(i <= id && id < (i+j)/2) {
            update(id, x, i, (i+j)/2, k*2+1);
        }else {
            update(id, x, (i+j)/2, j, k*2+2);
        }
    }
}

void add_range(int x, int l, int r, int i, int j, int k)
{
    if(l <= i && j <= r) {
        addi[k] += x;
        return;
    }else if(l >= j || r <= i) {
        return;
    }
    addi[k*2+1] += addi[k];
    addi[k*2+2] += addi[k];
    addi[k] = 0;
    add_range(x, l, r, i, (i+j)/2, k*2+1);
    add_range(x, l, r, (i+j)/2, j, k*2+2);
}

int query(int id, int i, int j, int k)
{
    if(k == id+N-1) {
        return dat[k]+addi[k];
    }
    addi[k*2+1] += addi[k];
    addi[k*2+2] += addi[k];
    addi[k] = 0;
    if(i <= id && id < (i+j)/2) {
        return query(id, i, (i+j)/2, k*2+1);
    }else {
        return query(id, (i+j)/2, j, k*2+2);
    }
}

void run()
{
    int n;
    cin >> n;
    init(n);
    string s, t;
    cin >> s >> t;
    queue<int> Q[26];
    queue<int> IDX[26];
    for(int i = 0; i < n; ++i) {
        IDX[s[i]-'a'].push(i);
        update(i, i, 0, N, 0);
        for(int j = int(s[i]-'a')+1; j < 26; ++j) {
            Q[j].push(i);
        }
    }
    ll ans = LLINF;
    ll base = 0;
    unordered_set<int> S;
    for(int i = 0; i < n; ++i) {
        bool flg = true;
        int idx = t[i]-'a';
        int v = -1;
        if(Q[idx].empty()) {
            flg = false;
        }else {
            v = Q[idx].front(); 
            while(!Q[idx].empty() && S.find(v) != S.end()) {
                Q[idx].pop();
                if(!Q[idx].empty())
                    v = Q[idx].front();
            }
            if(S.find(v) != S.end()) {
                flg = false;
            }
        }
        // cout << v << endl;

        if(flg) {
            ans = min(ans, base + query(v, 0, N, 0) - i);
        }
        // cout << "ans: " << ans << endl;

        if(IDX[idx].empty()) {
            break;
        }
        int ind = IDX[idx].front(); IDX[idx].pop();
        base += query(ind, 0, N, 0) - i;
        // cout << "ind: " << ind << "\tact: " << query(ind, 0, N, 0) << "\ti: " << i << endl;
        S.insert(ind);
        add_range(1, 0, ind, 0, N, 0);
        // cout << "add range: [" << i << " " << ind << ")" << endl;
        update(ind, i, 0, N, 0);
        // cout << "update: " << ind << "->" << i << endl;
    }
    ans = ans == LLINF? -1 : ans;
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