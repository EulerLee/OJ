#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

long long fact[14];

void fun(vector<char> &sigma, long long N)
{
	int len = sigma.size();
	if(len == 1){
		cout << sigma[0] << endl;
		return;
	}
	else if(N <= fact[len - 1]){
		cout << sigma[0];
		sigma.erase(sigma.begin());
		fun(sigma, N);
		return;
	}
	else{
		int pos = (N - 1) / fact[len - 1];
		cout << sigma[pos];
		sigma.erase(sigma.begin() + pos);
		N %= fact[len - 1];
		if(N == 0){
			N = fact[len - 1];
		}
		fun(sigma, N);
		return;
	}
}

int main()
{
	int T;
	cin >> T;
	while(T--){
		long long N;
		cin >> N;
		vector<char> sigma = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'};
		long long tmp = 1;
		fact[0] = 1;
		for(int i = 1; i != 14; ++i){
			tmp *= i;
			fact[i] = tmp;
		}

		fun(sigma, N);
	}
}


