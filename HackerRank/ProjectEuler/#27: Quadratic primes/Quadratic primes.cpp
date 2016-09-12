#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX = 1e7 + 1;

int qua(int n, int a, int b)
{
	int ans = n * n + n * a + b;
	if(ans > 0){
		return ans;
	}
	else{
		return 0;
	}
}

int main()
{
	int N;
	cin >> N;
	vector<bool> able(MAX, true);
	able[0] = false;
	able[1] = false;
	vector<int> pl;
	for(int x = 2; x != MAX; ++x){
		if(able[x]){
			pl.push_back(x);
			for(int i = 2; i * x < MAX; ++i){
				able[i * x] = false;
			}
		}
	}
	int a, b;
	int ma = 0;
	int tmp, bt, n;
	for(int k = 1; k < N + 1; k += 2){
		for(int i = 0; i != pl.size(); ++i){
			tmp = 0;
			bt = pl[i];
			if(bt > N)
				break;
			n = 0;
			while(true){
				if(able[qua(n, k, bt)]){
					++tmp;
					++n;
				}
				else{
					break;
				}
			}
			if(tmp > ma){
				ma = tmp;
				a = k;
				b = bt;
			}
		//	cout << k << ',' << bt << ":\t" << tmp << endl;
		}
		for(int i = 0; i != pl.size(); ++i){
			tmp = 0;
			bt = pl[i];
			if(bt > N)
				break;
			n = 0;
			while(true){
				if(able[qua(n, -k, bt)]){
					++tmp;
					++n;
				}
				else{
					break;
				}
			}
			if(tmp > ma){
				ma = tmp;
				a = -k;
				b = bt;
			}
		//	cout << -k << ',' << bt << ":\t" << tmp << endl;
		}
	}
	cout << a << ' ' << b << endl;
}

