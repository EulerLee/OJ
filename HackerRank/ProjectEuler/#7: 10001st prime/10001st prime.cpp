/*
*	the Nth prime
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
	int T;
	cin >> T;
	vector<int> pl = {2, 3};
	for(int k = 0; k != T; ++k){
		int n;
		cin >> n;
		while(n > pl.size()){
			int x = pl[pl.size() - 1] + 2;
			//if x is prime, push it into pl. 
			//continue
			//else x += 2
			bool isprime = true;
judge:
			for(int i = 0; i != pl.size(); ++i){
				if(x % pl[i] == 0){
					isprime = false;
					break;
				}
			}
			if(isprime)
				pl.push_back(x);
			else{
				x += 2;
				isprime = true;
				goto judge;
			}
		}
		cout << pl[n - 1] << endl;
	}
}
