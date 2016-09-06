#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <memory.h>
#include <queue>
#include <cstdio>

using namespace std;

const long INF = 1000000001;
const int MAX = 100000;
struct ticket{
	int len;
	long w;
};
struct qnode{
	int v;
	long w;
	qnode(int _v = 0, int _w = 0) :v(_v), w(_w){}
	bool operator < (const qnode &r)const{
		return w > r.w;
	}
};
struct Edge{
	int v;
	long w;
	Edge(int _v = 0, int _w = 0) :v(_v), w(_w){}
};
vector<Edge> E[MAX];
bool vis[MAX];
long dist[MAX];

void addedge(int u, int v, long long w)
{
	E[u].push_back(Edge(v, w));
}

void dijikstra(int n, int sta)
{
	memset(vis, false, sizeof(vis));
	for(int i = 0; i != n; ++i){
		dist[i] = INF;
	}
	priority_queue<qnode> que;
	while(!que.empty()){
		que.pop();
	}
	dist[sta] = 0;
	que.push(qnode(sta, 0));
	qnode tmp;
	while(!que.empty()){
		tmp = que.top();
		que.pop();
		int u = tmp.v;
		if(vis[u]) continue;
		vis[u] = true;
		for(int i = 0; i != E[u].size(); ++i){
			int v = E[u][i].v;
			long cost = E[u][i].w;
			if(!vis[v] && dist[v] > dist[u] + cost){
				dist[v] = dist[u] + cost;
				que.push(qnode(v, dist[v]));
			}
		}
	}
}

int main()
{
	int N, M;
	cin >> N >> M;
	int rmp[MAX];
	rmp[0] = -1;
	int a, b;
	for(int i = 0; i != N - 1; ++i){
		cin >> a >> b;
		rmp[a - 1] = b - 1;
	}
	/*for(int i = 0; i != N; ++i){
		cout << rmp[i] << ' ';
	}
	cout << endl;*/
	int v, k;
	long w;
	vector<ticket> city[MAX];
	for(int i = 0; i != M; ++i){
		ticket tmp;
		cin >> v >> tmp.len >> tmp.w;
		city[v - 1].push_back(tmp);
	}
	/*for(int i = 0; i != N; ++i){
		for(auto x: city[i]){
			cout << i << ':' << x.len << ' ' << x.w << endl;
		}
	}*/
	int length;
	long cost;
	for(int i = 1; i != N; ++i){
		v = rmp[i];
		length = 1;
		while(v != -1){
			bool able = false;
			cost = INF;
			for(auto &x: city[i]){
				if(x.len >= length && x.w < cost){
					able = true;
					cost = x.w;
				}
			}
			if(able){
				E[v].push_back(Edge(i, cost));	//将边反向，这样在dijikstra算法中才能从标号为1的点（首都）出发一次得到所有城市到首都的最短路
				//cout << i << "->" << v << ':' << cost << endl;
			}
			v = rmp[v];
			++length;
		}
		
	}
	dijikstra(N, 0);

	int Q;
	cin >> Q;
	while(Q--){
		int h;
		cin >> h;
		cout << dist[h - 1] << endl;
	}
}

