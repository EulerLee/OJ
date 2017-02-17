#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    vector<string> S;
    int maxl = -1;
    while(getline(cin ,s)) {
        S.push_back(s);
        if((int)s.size() > maxl) {
            maxl = s.size();
        }
    }
    for(int i = 0; i < maxl + 2; ++i) {
        cout << "*";
    }
    cout << endl;
    bool left = true;
    int ov;
    for(auto x: S) {
        cout << "*";
        ov = maxl - x.size();
        if(ov % 2 == 0) {
            for(int i = 0; i < ov / 2; ++i) {
                cout << " ";
            }
            cout << x;
            for(int i = 0; i < ov / 2; ++i) {
                cout << " ";
            }
        }else {
            if(left) {
                for(int i = 0; i < ov / 2; ++i) {
                    cout << " ";
                }
                cout << x;
                for(int i = 0; i < ov / 2 + 1; ++i) {
                    cout << " ";
                }
            }else {
                for(int i = 0; i < ov / 2 + 1; ++i) {
                    cout << " ";
                }
                cout << x;
                for(int i = 0; i < ov / 2; ++i) {
                    cout << " ";
                }
            }
            left = !left;
        }
        cout << "*" << endl;
    }
    for(int i = 0; i < maxl + 2; ++i) {
        cout << "*";
    }
    cout << endl;
}
