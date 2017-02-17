#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string s;
    set<string> name;
    int ans = 0;
    while(getline(cin, s)) {
        if(s[0] == '+') {
            s.assign(s.begin() + 1, s.end());
            name.insert(s);
        }else if(s[0] == '-') {
            s.assign(s.begin() + 1, s.end());
            name.erase(name.find(s));
        }else {
            int pos = s.find_first_of(':');
            ans += (s.size() - pos - 1) * name.size();
        }
    }
    cout << ans << endl;
}
