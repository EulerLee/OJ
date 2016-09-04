#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int T;
	cin >> T;
	while(T--){
		int N;
		cin >> N;
		int cl[110];
		map<int, int> type[110];
		int tmp;
		for(int i = 0; i != N; ++i){
			cin >> cl[i];
			for(int j = 0; j != cl[i]; ++j){
				cin >> tmp;
				if(type[i].find(tmp) == type[i].end()){
					type[i][tmp] = 1;
				}
				else{
					++type[i][tmp];
				}
			}
		}

		int winer, max = 0;
		bool tie = false;
		for(int i = 0; i != N; ++i){
			tmp = cl[i];
			int len = type[i].size();
			while(len >= 4){
				switch(len){
					case 4: ++tmp; break;
					case 5: tmp += 2; break;
					case 6: tmp += 4; break;
					default: break;
				}
				for(auto &x :type[i]){
					--x.second;
					if(x.second == 0){
						--len;
					}
				}
			}
			if(tmp == max){
				tie = true;
			}
			else if(tmp > max){
				tie = false;
				max = tmp;
				winer = i;
			}
		}
		if(tie){
			cout << "tie" << endl;
		}
		else{
			if(winer == 0){
				cout << "chef" << endl;
			}
			else{
				cout << winer + 1 << endl;
			}
		}
	}
}

