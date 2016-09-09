#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

const int N = 2001;
const long long INF = 1e9 + 1;

int main()
{
	int n, X;
	cin >> n >> X;
	int al[N];
	vector<int> pl;
	for(int i = 0; i != n; ++i){
		cin >> al[i];
		if(al[i] < X){
			pl.push_back(i);
		}
	}
	long long ans = 0;
	int pos, len;
	for(int k = 0; k != pl.size(); ++k){
		ans += al[pl[k]];
		pos = pl[k];
		len = (pl[(k + 1) % pl.size()] - pl[k] + n - 1) % n;
		for(int i = 1; i != len + 1; ++i){
			if(al[(pos + i) % n] < al[pos] + X){
				ans += al[(pos + i) % n];
			}
			else{
				ans += (al[pos] + X);
			}
		}
	}
	cout << ans << endl;
}

