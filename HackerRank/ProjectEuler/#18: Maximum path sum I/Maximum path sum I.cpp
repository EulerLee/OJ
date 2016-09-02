#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

void dpans(vector<vector<int>> &trg, int N)
{
	if(N == 1){
		return;
	}
	for(int i = 0; i != N - 1; ++i){
		trg[N - 2][i] = trg[N - 1][i] > trg[N - 1][i + 1] ? (trg[N - 2][i] + trg[N - 1][i]) : (trg[N - 2][i] + trg[N - 1][i + 1]);
	}
	dpans(trg, N - 1);
}

int main()
{
	int T;
	cin >> T;
	for(int k = 0; k != T; ++k){
		int N;
		cin >> N;
		vector<vector<int>> trg;
		for(int i = 1; i < N + 1; ++i){
			vector<int> tmp;
			int t;
			for(int j = 0; j != i; ++j){
				cin >> t;
				tmp.push_back(t);
			}
			trg.push_back(tmp);
		}
		dpans(trg, N);
		cout << trg[0][0] << endl;
	}
}

