#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main()
{
	int T;
	cin >> T;
	for(int k = 0; k != T; ++k){
		int N, num, ans, s;
		cin >> N;
		for(int i = 101; i != 1000; ++i){
			num = i * 1000 + (i % 10) * 100 + ((i % 100) / 10) * 10 + (i / 100); // 回文数
			if(num >= N)
				break;
			for(int j = 100; j != 1000; ++j){
				s = num / j;
				if((s < 1000) && (s >= 100) && (s * j == num)){
					ans = num;
					break;
				}
			}
		}
		cout << ans << endl;
	}
}
