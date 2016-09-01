#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
	int UP = 1000001;
	int T;
	cin >> T;
	long ans = 0;
	vector<long> suml (UP, 0);
	vector<bool> able (UP, true);
	able[0] = false;
	able[1] = false;
	for(int x = 2; x != UP; ++x){
		suml[x] = ans;
		if(able[x]){
			for(int i = 1; i * x < UP; ++i){
				able[i * x] = false;
			}
			ans += x;
			suml[x] = ans;
		}
	}
	for(int k = 0; k != T; ++k){
		int n;
		cin >> n;
		cout << suml[n] << endl;
	}
}

