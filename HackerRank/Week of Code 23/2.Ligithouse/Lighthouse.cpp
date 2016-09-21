#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std;

const int N = 51;

int size[N][N];

bool rsize(int x, int y, int r, bool mp[][N], int n)
{
	if(r == 0){
		if(mp[x][y]){
			size[x][y] = 0;
			return true;
		}
		else{
			return false;
		}
	}
	else{
		if(size[x][y] == r - 1){
			for(int i = 0; i != r + 1; ++i){
				int j = r * r - i * i;
				j = (int)sqrt(j);
				bool flag = true;
				if(x + i < n + 1 && y + j < n + 1 && x - i > 0 && y - j > 0){
					for(int l = x - i; l != x + i + 1; ++l){
						if(mp[l][y + j] && mp[l][y - j]){
							continue;
						}
						else{
							return false;
						}
					}
					for(int l = y - j; l != y + j + 1; ++l){
						if(mp[x - i][l] && mp[x + i][l]){
							continue;
						}
						else{
							return false;
						}
					}
					continue;
				}
				else{
					return false;
				}
			}
			size[x][y] = r;
			return true;
		}
		else{
			return false;
		}
	}
}

int main()
{
	int n;
	cin >> n;
	bool mp[N][N];
	char tmp;
	for(int i = 1; i != n + 1; ++i){
		for(int j = 1; j != n + 1; ++j){
			size[i][j] = -1;
			cin >> tmp;
			if(tmp == '.'){
				mp[i][j] = true;
			}
			else{
				mp[i][j] = false;
			}
		}
	}
	int ans = 0;
	for(int i = 1; i != n + 1; ++i){
		for(int j = 1; j != n + 1; ++j){
			if(mp[i][j]){
				for(int r = 0; rsize(i, j, r, mp, n); ++r);
				if(size[i][j] > ans){
					ans = size[i][j];
				}
			}
		}
	}
	cout << ans << endl;
}

