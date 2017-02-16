#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int d, sum;
    cin >> d >> sum;
    vector<int> mint(d, 0);
    vector<int> maxt(d, 0);
    vector<int> ans(d, 0);
    int l = 0, r = 0;
    for(int i = 0; i < d; ++i) {
        cin >> mint[i] >> maxt[i];
        ans[i] = mint[i];
        l += mint[i];
        r += maxt[i];
    }
    if(sum >= l && sum <= r) {
        cout << "YES" << endl;
        sum -= l;
        for(int i = 0; i < d; ++i) {
            if(sum > 0) {
                if(sum > maxt[i] - mint[i]) {
                    sum -= maxt[i] - mint[i];
                    ans[i] = maxt[i];
                }else {
                    ans[i] += sum;
                    sum = 0;
                }
            }else {
                break;
            }
        }
        for(auto x: ans) {
            cout << x << " ";
        }
        cout << endl;
    }else {
        cout << "NO" << endl;
    }
}
