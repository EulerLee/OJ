#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX = 10001;

int clen(int n)
{
	if(n == 2 || n == 5)
		return 0;
	else{
		int tmp = 1;
		int len = 0;
		while(tmp < n){
			tmp *= 10;
		}
		map<int, int> ll;
		while(true){
			tmp = tmp % n;
			if(ll.find(tmp) != ll.end()){
				return len - ll[tmp];
			}
			ll[tmp] = len;
			while(tmp < n){
				tmp *= 10;
				++len;
				ll[tmp] = len;
			}
		}
	}
}

int main()
{
	int T;
	cin >> T;
	vector<bool> able(MAX, true);
	vector<int> al(MAX, 0);
	vector<int> pl = {0, 1};
	//noticed that when n is prime, its length of recurring cycle is much larger than other numbers
	for(int x = 2; x != MAX; ++x){
		if(able[x]){
			for(int i = 1; i * x < MAX; ++i){
				able[i * x] = false;
			}
			al[x] = clen(x);
			pl.push_back(x);
			if(al[x - 1] >= al[x]){
				al[x] = al[x - 1];
				pl[x] = pl[x - 1];
			}
		}
		else{
			pl.push_back(pl[x - 1]);
			al[x] = al[x - 1];
		}
	//	cout << x << ":\t" << pl[x] << endl;
	}
	while(T--){
		int N;
		cin >> N;
		cout << pl[N - 1] << endl;
	}
}

