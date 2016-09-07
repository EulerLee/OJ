#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <memory.h>
#define MIN(a, b) ((a) < (b) ? (a) : (b))

using namespace std;

const int MAX = 1e5 + 10;
const long long INF = 1e15;

struct Ticket{
	int v;
	int k;
	long long cost;
};

vector<Ticket> city[MAX];
int pa[MAX][20];
long long mic[MAX][20];
long long minw[MAX];

long long DP(int v)
{
	if(minw[v] != INF){
		return minw[v];
	}
	for(auto tk: city[v]){
		int u = pa[v][0];
		DP(u);
		long long vulen = 1;
		long long uflen;
		for(int i = 0; i != 20; ++i){
			uflen = 1 << i;
			if(vulen + uflen > tk.k || pa[u][i] == 0){
				if(i == 0){
					minw[v] = MIN(minw[v], minw[u] + tk.cost);
					mic[v][0] = MIN(minw[v], minw[pa[v][0]] + tk.cost);
					break;
				}
				else{
					minw[v] = MIN(minw[v], mic[u][i - 1] + tk.cost);	//here comes
					vulen += (1 << (i - 1));
					u = pa[u][i - 1];
					i = -1;
				}
			}
		}
	}
	int u = pa[v][0];
	for(int i = 1; i != 20; ++i){
		pa[v][i] = pa[u][i - 1];
		mic[v][i] = MIN(mic[u][i - 1], mic[v][i - 1]);
		u = pa[v][i];
	}
	return minw[v];
}

int main()
{
	for(int i = 0; i != 20; ++i){
		for(int j = 0; j != MAX; ++j){
			mic[j][i] = INF;
			minw[j] = INF;
			pa[j][i] = 0;
		}
	}
	minw[1] = 0;
	int N, M;
	cin >> N >> M;
	int a, b;
	for(int i = 0; i != N - 1; ++i){
		cin >> a >> b;
		pa[a][0] = b;
	}
	Ticket tk;
	for(int i = 0; i != M; ++i){
		cin >> tk.v >> tk.k >> tk.cost;
		city[tk.v].push_back(tk);
	}
	int Q, h;
	cin >> Q;
	while(Q--){
		cin >> h;
		cout << DP(h) << endl;
	}
	/*cout << "MIC: " << endl;
	for(int i = 0; i != 20; ++i){
		for(int j = 1; j != N + 1; ++j){
			cout << mic[j][i] << '\t';
		}
		cout << endl;
	}
	cout << "PA: " << endl;
	for(int i = 0; i != 20; ++i){
		for(int j = 1; j != N + 1; ++j){
			cout << pa[j][i] << '\t';
		}
		cout << endl;
	}*/
}

