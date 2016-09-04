#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int T;
	cin >> T;
	for(int k = 0; k != T; ++k){
		int n = 0;
		string sn;
		cin >> sn;
		for(auto x: sn){
			if(x == '0'){
				++n;
			}
		}
		if(n == sn.size() - 1 || n == 1)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
}

