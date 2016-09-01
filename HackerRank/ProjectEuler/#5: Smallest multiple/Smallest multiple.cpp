#include <iostream>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

int main()
{
	int T;
	cin >> T;
	for(int k = 0; k != T; ++k){
		map<int, int> mpl;
		vector<int> pl = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
		for(auto &x :pl){
			mpl[x] = 0;
		}
		int n, ans;
		cin >> n;
		for(int i = 2; i != n + 1; ++i){
			for(auto &x :pl){
				int ans = 0, temp = i;
				while(temp % x == 0){
					++ans;
					temp /= x;
				}
				if(mpl[x] < ans)
					mpl[x] = ans;
			}
		}
		int res = 1;
		auto iter = mpl.begin();
		while(iter != mpl.end()){
			for(int j = 0; j != iter->second; ++j){
				res *= iter->first;
			}
			++iter;
		}
		cout << res << endl;
	}
}
