#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX = 100001;
const long long INF = 10000000000000001;

struct Ticket{
	int v;
	int len;
	long w;
};

vector<Ticket> city[MAX];
int rmp[MAX];
vector<long long> minw(MAX, INF);
int sl[MAX][20];
int mp[MAX][20];

void fa(Ticket tk)	//set the father of node tk.v & the least cost from tk.v to capital
{
	int u = rmp[tk.v];
	if(sl[u][0] == -1 || tk.len == 1){	//u is the father of tk.v: case1: the father of city'u' isn't exsisted; case2: the father of city'u' can't be reached
		if(minw[u] + tk.w < minw[tk.v]){
			sl[tk.v][0] = u;
			minw[tk.v] = minw[u] + tk.w;
		}
		return;
	}
	int vulen = 1;	//tk.v -> u length
	int uflen;		//u -> father length
	for(int i = 19; i >= 0; --i){
		uflen = 1 << i;
		while(uflen + vulen > tk.len || sl[u][i] == -1){	//we've known u is NOT the answer
			--i;
			uflen = 1 << i;
		}
		//now node sl[u][i] is reachable and of course exsisted
		//but NOT for node sl[u][i + 1]
		u = sl[u][i];	//u is REACHABLE now
		vulen += uflen;
		if(sl[u][0] == -1 || vulen == tk.len){	//same as what's told above
			if(minw[u] + tk.w < minw[tk.v]){
				sl[tk.v][0] = u;
				minw[tk.v] = minw[u] + tk.w;
			}
		}
	}
}

void fa(Ticket tk)
{
	int u = rmp[tk.v];
	int vulen = 1;
	int uflen;
	int i = 19;
	while(uflen + vulen > tk.len || sl[u][i] = -1 || i >= 0){	//node sl[u][i] is unreachable
		--i;
		uflen = 1 < i;
	}
	if(i == -1){	//the father of node'u' is unreachable
		while(u != -1 || vulen <= tk.len){	//u is reachable
			if(minw[tk.v] > minw[u] + tk.w){
				minw[tk.v] = minw[u] + tk.w;
				sl[tk.v][0] = u;
			}
			u = rmp[u];
			++vulen;
		}
	}
	else{
		u = sl[u][i];
		vulen += uflen;
		while(u !=)
	}
}

void update(int v)
{
	int u = sl[v][0];
	for(int i = 1; i != 20; ++i){
		if(u == -1)break;
		sl[v][i] = sl[u][i - 1];
		u = sl[v][i];
	}
}

long long DP(int sta)
{
	if(sta == 0){
		minw[0] = 0;
		return 0;
	}
	else if(minw[sta] != INF){
		return minw[sta];
	}
	else{
		if(minw[rmp[sta]] == INF)
			DP(rmp[sta]);
		for(auto x: city[sta]){
			fa(x);
		}
		update(sta);
		return minw[sta];
	}
}

int main()
{
	//initalize skiplist
	for(int i = 0; i != 20; ++i){
		for(int j = 0; j != MAX; ++j){
			sl[j][i] = -1;
		}
	}

	//initalize mp
	

	int N, M;
	cin >> N >> M;

	rmp[0] = -1;
	int a, b;
	for(int i = 0; i != N - 1; ++i){
		cin >> a >> b;
		rmp[a - 1] = b - 1;
	}

	int v;
	Ticket tmp;
	for(int i = 0; i != M; ++i){
		cin >> tmp.v >> tmp.len >> tmp.w;
		--tmp.v;
		city[tmp.v].push_back(tmp);
	}

	int Q;
	cin >> Q;
	while(Q--){
		int h;
		cin >> h;
		cout << DP(h - 1) << endl;
	}
	for(int i = 0; i != 20; ++i){
		for(int j = 0; j != N; ++j){
			cout << sl[j][i] << '\t';
		}
		cout << endl;
	}
}

