#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cstring>
#include <cmath>
#define RANGE(i, x, n) for(int i = x; i < n; ++i)
#define REP(i, n) for(int i = 0; i < n; ++i)
using namespace std;

int main()
{
    int n;
    cin >> n;
    int L = 0, R = 0;
    vector<int> arr = {0};
    int l, r;
    int ml = 0, mr = 0;
    int il, ir;
    REP(i, n){
        cin >> l >> r;
        arr.push_back(r - l);
        L += (l - r);
        if(r - l < 0){
            if(l - r > ml){
                ml = l - r;
                il = i + 1;
            }
        }else{
            if(r - l > mr){
                mr = r - l;
                ir = i + 1;
            }
        }
    }
    ml = -ml;
    R = - L;
    if(ml == 0 || mr == 0){
        cout << 0 << endl;
    }else{
        int res1 = L + mr;
        int res2 = R + ml;
        res2 = abs(res2);
        int ans = 0;
        if(res1 > res2){
            ans = ir;
        }else{
            ans = il;
        }
        cout << ans << endl;
    }
}
