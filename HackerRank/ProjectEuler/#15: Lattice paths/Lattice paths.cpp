#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <utility>
#define TOP 1000000007

using namespace std;

long fun(pair<int, int> id, map<pair<int, int>, long> &al)
{
	if(id.first == 0 || id.second == 0){
		al[id] = 1;
		return 1;
	}
	else{
		pair<int, int> led (id,first, id.second - 1);
		pair<int, int> upd (id.first - 1, id.second);
		long lans, uans;
		if(al.find(led) != al.end()){
			lans = al[led];
		}
		else{
			lans = fun(led, al);
		}
		if(al.find(upd) != al.end()){
			uans = al[upd];
		}
		else{
			uans = fun(upd, al);
		}
		al[id] = (lans + ulans) % TOP;
		return al[id];
	}
}

int main()
{
	int T;
	cin >> T;
	map<pair<int, int>, long> al;
	for(int k = 0; k != T; ++k){
		int n, m;
		cin >> n >> m;
		pair<int, int> id (n, m);
		if(al.find(id) != al.end()){
			cout << al[id] << endl;
		}
		cout << fun(id, al) << endl;
	}
}

