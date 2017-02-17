#include <iostream>
#include <vector>
#include <map>
#define ISVOWELS(x) (x == 'A' || x == 'E' || x == 'O' || x == 'I' || x == 'U' || x == 'Y')
using namespace std;

int main()
{
    string s;
    cin >> s;
    int ans = 0, tmp;
    int pre = -1;
    for(int i = 0; i < s.size(); ++i){
        if(ISVOWELS(s[i])){
            tmp = i - pre;
            ans = tmp > ans ? tmp : ans;
            pre = i;
        }
    }
    tmp = s.size() - pre;
    ans = tmp > ans ? tmp : ans;
    cout << ans << endl;
}
