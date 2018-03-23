#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)

const int INF=0x3f3f3f3f;
const int MAXN=1001;
struct Edge
{
    int u,v;
    int cost;
    Edge(int _u=0,int _v=0,int _cost=0):u(_u),v(_v),cost(_cost){}
};
vector<Edge>E;
bool bellman_ford(int start,int n, vector<int> &dist)//点的编号从1开始
{
    for(int i=1;i<=n;i++)dist[i]=INF;
        dist[start]=0;
    for(int i=1;i<n;i++)//最多做n-1次
    {
        bool flag=false;
        for(int j=0;j<E.size();j++)
        {
            int u=E[j].u;
            int v=E[j].v;
            int cost=E[j].cost;
            if(dist[v]>dist[u]+cost)
            {
                dist[v]=dist[u]+cost;
                flag=true;
            }
        }
        if(!flag)return true;//没有负环回路
    }
    for(int j=0;j<E.size();j++)
        if(dist[E[j].v]>dist[E[j].u]+E[j].cost)
            return false;//有负环回路
    return true;//没有负环回路
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n, m;
    ll s, t;
    cin >> n >> m >> s >> t;
    REP(i, m) {
        int x, y;
        cin >> x >> y;
        E.push_back(Edge(x, y, 1));
        E.push_back(Edge(y, x, 1));
    }
    vector<int> dist2(MAXN, INF);
    vector<int> dist1(MAXN, INF);
    bellman_ford(s, n, dist1);
    bellman_ford(t, n, dist2);

    int ans = n*(n-1)/2 - m;
    RANGE(i, 1, n+1) {
        RANGE(j, i, n+1) {
            if(j == i) continue;
            if(dist1[i] + dist2[j] + 1 < dist1[t] || dist1[j] + dist2[i] + 1 < dist1[t]) {
                --ans;
            }
        }
    }
    cout << ans << endl;
}
