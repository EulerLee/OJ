#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <regex>
using namespace std;

void trans(string &s, int flag)
{
    string tmp = s;
    if(flag) {  // rxcy to excel
        tmp.assign(tmp.begin() + tmp.find_first_of('C') + 1, tmp.end());
        int c = stoi(tmp);
        string sc;
        while(c != 0) {
            int cx = c % 26 - 1;
            cx = cx < 0 ? cx + 26 : cx;
            char ctmp = 'A' + cx;
            sc = ctmp + sc;
            c /= 26;
            c = cx == 25 ? c - 1 : c;
        }
        tmp.assign(s.begin() + s.find_first_not_of('R'), s.begin() + s.find_first_of('C'));
        s = sc + tmp;
    }else {     // excel to rxcy
        tmp.assign(tmp.begin(), tmp.begin() + tmp.find_first_of("0123456789"));
        int c = 0;
        for(auto x: tmp) {
            c *= 26;
            c += x - 'A' + 1;
        }
        tmp.assign(s.begin() + s.find_first_of("0123456789"), s.end());
        s = "R" + tmp + "C" + to_string(c);
    }
}

int main()
{
    int T;
    cin >> T;
    string s1 = "[A-Z]+[0-9]+";
    string s2 = "C[1-9]+R[0-9]+";
    smatch m;
    regex excel(s1);
    regex rxcy(s2);
    while(T--) {
        string s;
        cin >> s;
        if(regex_match(s, m, excel)) {
            trans(s, 0);
        }else {
            trans(s, 1);
        }
        cout << s << endl;
    }
}