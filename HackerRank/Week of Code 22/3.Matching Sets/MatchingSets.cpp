#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main()
{
	int n;
	cin >> n;
	long temp, suma = 0, sumb = 0;
	vector<long> al, bl;
	for(int i = 0; i != n; ++i){
		cin >> temp;
		suma += temp;
		al.push_back(temp);
	}
	for(int i = 0; i != n; ++i){
		cin >> temp;
		sumb += temp;
		bl.push_back(temp);
	}
	if(suma != sumb){
		cout << "-1" << endl;
		return 0;
	}
	sort(al.begin(), al.end());
	sort(bl.begin(), bl.end());
	long ans = 0;
	for(int i = 0; i != n; ++i){
		if(al[i] - bl[i] > 0)
			ans += al[i] - bl[i];
	}
	cout << ans << endl;
}

