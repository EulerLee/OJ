#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <set>

using namespace std;

const int INF = 100001;
long long num[300];
int vis[INF];
set<int> mp;

long long sum(long long C, long long N)
{
	if(num[C] != 0){
		return num[C];
	}else if(C == 1 || C == 0){
        if(mp.size() == 0){
	      	long long i = 2;
    		while(i <= N){
			     mp.insert(i);
			     ++i;
            }
        }
		return 0;
	}else{
		sum(C - 1, N);
		long long i = 2;
		while(i <= N){
			mp.insert(C * i);
			++i;
		}
		num[C] = C * (N - 1) - mp.size();
		return num[C];
	}
}

int main()
{
	long long N;
	cin >> N;
	long long a1, a2, c;
	long long ans = 0;
	for(a1 = 2; a1 <= (long long)sqrt(N) + 1; ++a1){
		if(!vis[a1]){
			vis[a1] = 1;
			a2 = a1 * a1;
			c = 1;
			while(a2 <= N){
				vis[a2] = 1;
				++c;
				a2 *= a1;
			}
			ans += sum(c, N);
		}
	}
	ans = (N - 1) * (N - 1) - ans;
	cout << ans << endl;
}


