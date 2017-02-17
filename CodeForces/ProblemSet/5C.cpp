#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int maxl = -1, sum = 0;
    int ob = 0, sta = 0;
    for(int i = 0; i < s.size(); ++i) {
        if(s[i] == '(') {
            ++ob;
        }else {
            --ob;
        }
        if(ob < 0) {
            ob = 0;
            sta = i + 1;
            continue;
        }else if(ob == 0) {
            if(i + 1 - sta > maxl) {
                maxl = i + 1 - sta;
                sum = 1;
            }else if(i + 1 - sta == maxl) {
                ++sum;
            }
        }
    }
    if(ob > 0) {
        ob = 0;
        sta = 0;
        for(int i = 0; i < s.size(); ++i) {
            if(s[s.size() - 1 - i] == '(') {
                --ob;
            }else {
                ++ob;
            }
            if(ob < 0) {
                ob = 0;
                sta = i + 1;
                continue;
            }else if(ob == 0) {
                if(i + 1 - sta > maxl) {
                    maxl = i + 1 - sta;
                    sum = 1;
                }else if(i + 1 - sta == maxl) {
                    ++sum;
                }
            }
        }
    }
    if(maxl == -1) {
        cout << 0 << " " << 1 << endl;
    }else {
        cout << maxl << " " << sum << endl;
    }
}
