#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;
const ll INF = 0x3f3f3f3f;
const ll mod = 998244353ll;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

const ll MAXN = 1050000;
int n, k;
int color[MAXN];
int cnt[MAXN];
vector<int> adj[MAXN];
ll dp[MAXN][2];
int cutable = 1;
vector<ll> fa(MAXN);

void input()
{
    cin >> n >> k;
    REP(i, n) {
        cin >> color[i];
        cnt[color[i]]++;
    }
    REP(i, n-1) {
        int x, y;
        cin >> x >> y;
        --x, --y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}

ll quick_pow(ll x, ll n)
{
    ll ans = 1;
    while(n) {
        if(n&1) {
            ans *= x;
            ans %= mod;
        }
        x *= x;
        x %= mod;
        n >>= 1;
    }
    return ans;
}

ll depth[MAXN*2-1];
ll id[300010];
ll vs[MAXN*2-1];

void preinitRMQ(ll v, ll pa, ll d, ll &p)
{
    id[v] = p;
    vs[p] = v;
    depth[p++] = d;
    for(auto x: adj[v]) {
        if(x == pa) continue;
        fa[x] = v;
        preinitRMQ(x, v, d+1, p);
        vs[p] = v;
        depth[p++] = d;
    }
}

ll N, dat[MAXN*2-1], vet[MAXN*2-1];

void init_RMQ(ll _n)
{
    N = 1;
    while(N < _n) N*=2;
    REP(i, N*2-1) {
        dat[i] = INF;
    }
}

void update(ll p, ll x, ll y)
{
    p += N-1;
    dat[p] = x;
    vet[p] = y;
    while(p > 0) {
        p = (p-1)>>1;
        if(dat[p*2+1] <= dat[p*2+2]) {
            dat[p] = dat[p*2+1];
            vet[p] = vet[p*2+1];
        }else {
            dat[p] = dat[p*2+2];
            vet[p] = vet[p*2+2];
        }
    }
}

ll query(ll a, ll b, ll l, ll r, ll p, ll &v)
{
    if(r <= a || l >= b) return INF;
    else if(a <= l && r <= b) {
        v = vet[p];
        return dat[p];
    }
    ll vl, vr;
    ll ml = query(a, b, l, (l+r)>>1, p*2+1, vl);
    ll mr = query(a, b, (l+r)>>1, r, p*2+2, vr);
    if(ml <= mr) {
        v = vl;
        return ml;
    }else {
        v = vr;
        return mr;
    }
}

void init()
{
    ll p = 0;
    preinitRMQ(0, -1, 0, p);
    init_RMQ(p);
    REP(i, p) {
        update(i, depth[i], vs[i]);
    }
}

ll LCA(ll u, ll v)
{
    if(id[u] > id[v]) swap(u, v);
    ll ans;
    query(id[u], id[v]+1, 0, N, 0, ans);
    return ans;
}

bool coloring()
{
    vector<ll> act(k+1, -1);
    vector<ll> used(n);
    REP(i, n) {
        if(used[i] || color[i] == 0) continue;
        used[i] = 1;
        ll col = color[i];
        if(act[col] == -1) {
            act[col] = i;
            continue;
        }else {
            ll j = act[col];
            act[col] = LCA(i, j);
            if(color[act[col]] != 0 && color[act[col]] != col) return false;

            if(color[act[col]] == 0) ++cnt[col];
            color[act[col]] = col;

            ll cur = i;
            used[cur] = 0;
            while(cur != act[col]) {
                if(used[cur]) {
                    if(color[cur] != col) return false;
                    break;
                }
                if(color[cur] != col) {
                    if(color[cur] == 0) {
                        color[cur] = col;
                        ++cnt[col];
                    }
                    else return false;
                }
                used[cur] = 1;
                cur = fa[cur];
            }
            cur = j;
            while(cur != act[col]) {
                if(used[cur]) {
                    if(color[cur] != col) return false;
                    break;
                }
                if(color[cur] != col) {
                    if(color[cur] == 0) {
                        color[cur] = col;
                        ++cnt[col];
                    }
                    else return false;
                }
                used[cur] = 1;
                cur = fa[cur];
            }
            used[act[col]] = 1;
        }
    }
    return true;
}

// 切割考虑的是边要或不要
int DFS(int v = 0, int far = -1)
{
    if(adj[v].size() == 1 && v != 0) {
        dp[v][0] = (color[v] == 0);
        dp[v][1] = (color[v] > 0);
        --cnt[color[v]];
        if(color[v] == 0 || cnt[color[v]] == 0) return 0;
        else return color[v];
    }
    int res_col = color[v];
    int havecol = 0;
    ll mul01 = 1;
    vector<int> X;
    for(auto u: adj[v]) {
        if(u != far) {
            int tmp = DFS(u, v);
            mul01 *= (dp[u][0] + dp[u][1])%mod;
            mul01 %= mod;
            if(tmp > 0) {
                X.push_back(u);
                havecol = -1;
                if(res_col == 0) res_col = tmp;
                else if(res_col != tmp) {
                    cutable = 0;
                    return 0;
                }
            }else if(tmp == -1) {
                havecol = -1;
            }
        }
    }
    if(res_col == 0) {
        dp[v][0] = mul01;
        dp[v][1] = 0;
        for(auto u: adj[v]) {
            if(u == far) continue;
            ll tmp = mul01;
            tmp *= quick_pow((dp[u][0] + dp[u][1])%mod, mod-2);
            tmp %= mod;
            tmp *= dp[u][1];
            tmp %= mod;
            dp[v][1] += tmp;
            dp[v][1] %= mod;
        }
        return havecol;
    }else {
        dp[v][0] = 0;
        dp[v][1] = mul01;
        for(auto u: X) {
            dp[v][1] *= quick_pow((dp[u][0] + dp[u][1])%mod, mod-2);
            dp[v][1] %= mod;
            dp[v][1] *= dp[u][1];
            dp[v][1] %= mod;
        }
        if(color[v] == res_col) {
            --cnt[res_col];
        }
        color[v] = res_col;
        return (cnt[res_col] == 0? -1 : res_col);
    }

}

void printDFS(int v = 0, int far = -1)
{
    cout << v+1 << ":\t" << dp[v][0] << " " << dp[v][1] << endl;
    for(auto u: adj[v]) {
        if(u != far) {
            printDFS(u, v);
        }
    }
}

int main()
{
    accelerate();
    input();
    init();
    if(!coloring()) {
        cout << 0 << endl;
        return 0;
    }
    DFS();
    cout << cutable*dp[0][1] << endl;

    //printDFS();
}
