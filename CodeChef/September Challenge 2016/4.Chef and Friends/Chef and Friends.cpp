#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;
const int N = 1e3 + 1;
int nrm[N][N];
bool viewed[N];
int clr[N];

void DFS(int s, int c, int n)
{
	if(!viewed[s]){
		viewed[s] = true;
		clr[s] = c;
		for(int i = 1; i != n + 1; ++i){
			if(!viewed[i] && nrm[s][i]){
				DFS(i, 0 - c, n);
			}
		}
	}
}

int main()
{
	int T;
	cin >> T;
	for(int k = 0; k != T; ++k){
		int n, m;
		cin >> n >> m;
		bool able = true;
		for(int i = 0; i != N; ++i){
			viewed[i] = false;
			clr[i] = 1;
			for(int j = 0; j != N; ++j){
				nrm[i][j] = 1;
			}
		}
		for(int i = 0; i != m; ++i){
			int a, b;
			cin >> a >> b;
			nrm[a][b] = nrm[b][a] = 0;
		}	//input section ends

		if(n == 1){
			cout << "YES" << endl;
			continue;
		}	//outrange

		//algorithm
		for(int i = 1; i <= n; ++i){
			DFS(i, 1, n);
		}
		for(int i = 1; i <= n; ++i){
			for(int j = 1; j <= n; ++j){
				if((i != j) && (nrm[i][j]) && (clr[i] == clr[j])){
					able = false;
					goto end;
				}
			}
		}

end:
/*
		for(int i = 1; i <= n; ++i){
			for(int j = 1; j <= n; ++j){
				cout << nrm[i][j] << ' ';
			}
			cout << endl;
		}
		for(int i = 1; i <= n; ++i){
			cout << clr[i] << ' ';
		}
		cout << endl;
*/
		if(able)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	} 
}

