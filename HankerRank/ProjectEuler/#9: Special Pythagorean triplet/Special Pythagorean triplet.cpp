#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
	int T;
	cin >> T;
	for(int k = 0; k != T; ++k){
		int n, a, b, c;
		int ans = 1;
		cin >> n;
		for(a = 1, b = (n - 2) / 2; a + b < n; ++a){
			b = (n - 2 * a) / 2;
			c = n - a - b;
			if(a >= c)
				break;
judge:
			if(a * a + b * b == c * c){
				if(a * b * c > ans){
					ans = a * b * c;
				}
			}
			else{
				++b;
				--c;
				if(b >= c)
					continue;
				else{
					goto judge;
				}
			}
		}
		cout << ans << endl;
	}
}
