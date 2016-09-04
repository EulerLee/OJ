#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
	int T;
	cin >> T;
	for(int k = 0; k != T; ++k){
		string s;
		cin >> s;
		bool able = true;
		for(int i = 0; i < (s.size() + 1) / 2; ++i){
			if(s[i] == '.'){
				if(i * 2 + 1 == s.size()){	//very middle
					s[i] = 'a';
				}
				else if(s[s.size() - i - 1] == '.'){
					s[s.size() - i - 1] = 'a';
					s[i] = 'a';
				}
				else{
					s[i] = s[s.size() - i - 1];
				}
			}
			else{
				if(s[s.size() - i - 1] == '.'){
					s[s.size() - i - 1] = s[i];
				}
				else{
					if(s[i] != s[s.size() - i - 1]){
						able = false;
						break;
					}
				}
			}
		}
		if(able){
			cout << s << endl;
		}
		else{
			cout << -1 << endl;
		}
	}
}

