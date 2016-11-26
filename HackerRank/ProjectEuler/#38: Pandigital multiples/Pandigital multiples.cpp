#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define RANGE(i, x, n) for(int i = x; i < n; ++i)
using namespace std;

map<char, int> vis;

bool C(int x, int K)
{
    REP(i, K) {
        vis[i + '0' + 1] = 0;
    }
    int tmp;
    string s;
    RANGE(i, 1, 10) {
        tmp = x * i;
        s = to_string(tmp);
        for(auto y: s) {
            if(vis.find(y) != vis.end()){
                ++vis[y];
            }
            else {
                return false;
            }
        }
        int flag = 0;
        for(auto y: vis) {
            if(y.second == 1) {
                continue;
            }else if(y.second == 0) {
                flag = 1;
            }else {
                return false;
            }
        }
        if(flag == 0) {
            return true;
        }
    }
    return false;
}

int main()
{
    int N, K;
    cin >> N >> K;
    RANGE(i, 2, N) {
        if(C(i, K)) {
            cout << i << endl;
        }
    }
}
