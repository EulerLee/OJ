#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define RANGE(i, x, n) for(int i = x; i < n; ++i)
using namespace std;

int main()
{
    string sf, sb, a, b;
    cin >> sf;
    cin >> a;
    cin >> b;
    sb.assign(sf.size(), 'a');
    REP(i, sf.size()) {
        sb[sf.size()-1-i] = sf[i];
    }
    bool fw = false, ba = false;
    int pos = sf.find(a);
    if(pos != -1) {
        pos = sf.find(b, pos + a.size());
        if(pos != -1) {
            fw = true;
        }
    }
    pos = sb.find(a);
    if(pos != -1) {
        pos = sb.find(b, pos + a.size());
        if(pos != -1) {
            ba = true;
        }
    }
    if(fw && ba) {
        cout << "both" << endl;
    }else if(fw) {
        cout << "forward" << endl;
    }else if(ba) {
        cout << "backward" << endl;
    }else {
        cout << "fantasy" << endl;
    }
}
