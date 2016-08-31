#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> al (10, 1);
	for(auto &x :al){
		cout << x << endl;
	}
}
