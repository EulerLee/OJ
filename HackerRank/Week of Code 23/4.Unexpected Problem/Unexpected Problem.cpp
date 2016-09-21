#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

vector<long long> pos(string cm, string s)
{
	vector<long long> ans;
	long long m = s.size();
	long long pi[m];
	pi[0] = 0;
	long long k = 0;
	for(long long q = 1; q != m; ++q){
		while(k > 0 && s[k] != s[q]){
			k = pi[k - 1];
		}
		if(s[k] == s[q]){
			++k;
		}
		pi[q] = k;
	}
	/*for(auto x: pi){
		cout << x << endl;
	}*/
	long long n = cm.size();
	long long q = 0;
	for(long long i = 0; i != n; ++i){
		while(q > 0 && s[q] != cm[i]){
			q = pi[q - 1];
		}
		if(s[q] == cm[i]){
			++q;
		}
		if(q == m){
			ans.push_back(i - m + 1);
			//cout << i - m + 1<< endl;
			q = pi[q - 1];
		}
	}
	return ans;
}



int main()
{
	string s;
	long long m;
	cin >> s;
	cin >> m;
	string cm = s + s;
	vector<long long> po = pos(cm, s);
	/*for(auto x: po){
		cout << x << endl;
	}*/

	long long ans = 0;
	long long k = m / s.size(), r = m % s.size();
	ans += k;
	for(auto x: po){
		if(x > 0 && x <= r){
			ans += k + 1;
		}
		else if(x > r && x < s.size()){
			ans += k;
		}
	}
	cout << ans % (1000000007) << endl;
}

