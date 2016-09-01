#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int T;
	cin >> T;
	vector<int> al (5000001, 1);
	long max = 1, lm = 1;
    int lo = 1;
	for(int i = 2; i != 5000001; ++i){
		long res = 1;
        long tmp = i;
		while(tmp != 1){
			if(tmp % 2 == 0){
				tmp /= 2;
				++res;
			}
			else{
				tmp = tmp * 3 + 1;
				++res;
			}
		}
		if(res >= max){
            al[i] = res;
			for(int k = lo; k < i; ++k){
				al[k] = lo;
			}
			max = res;
			lo = i;
		}
	}
    for(int k = lo; k < 5000001; ++k){
        al[k] = lo;
    }
	for(int i = 0; i != T; ++i){
		int n;
		cin >> n;
		cout << al[n] << endl;
	}
}

