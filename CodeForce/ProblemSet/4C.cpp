#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, int> name;
    string s;
    while(n--) {
        cin >> s;
        if(name.find(s) != name.end()) {
            cout << s << to_string(name[s]++) << endl;
        }else {
            cout << "OK" << endl;
            name[s] = 1;
        }
    }
}
