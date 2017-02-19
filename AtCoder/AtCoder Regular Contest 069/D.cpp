#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    string ans;
    char last;
    ans = "SS";
    last = (s[0] == 'o' ? 'S' : 'W');
    for(int i = 1; i < s.size(); ++i) {
        if(s[i] == 'o') {
            if(ans[i] == 'S') {
                ans += (ans[i - 1] == 'S' ? "S" : "W");
            }else {
                ans += (ans[i - 1] == 'S' ? "W" : "S");
            }
        }else {
            if(ans[i] == 'S') {
                ans += (ans[i - 1] == 'S' ? "W" : "S");
            }else {
                ans += (ans[i - 1] == 'S' ? "S" : "W");
            }
        }
    }
    if(ans[ans.size() - 2] == last && ans[ans.size() - 1] == ans[0]) {
        cout << ans.assign(ans.begin(), ans.begin() + ans.size() - 1) << endl;
        return 0;
    }

    ans = "SW";
    last = (s[0] == 'o' ? 'W' : 'S');
    for(int i = 1; i < s.size(); ++i) {
        if(s[i] == 'o') {
            if(ans[i] == 'S') {
                ans += (ans[i - 1] == 'S' ? "S" : "W");
            }else {
                ans += (ans[i - 1] == 'S' ? "W" : "S");
            }
        }else {
            if(ans[i] == 'S') {
                ans += (ans[i - 1] == 'S' ? "W" : "S");
            }else {
                ans += (ans[i - 1] == 'S' ? "S" : "W");
            }
        }
    }
    if(ans[ans.size() - 2] == last && ans[ans.size() - 1] == ans[0]) {
        cout << ans.assign(ans.begin(), ans.begin() + ans.size() - 1) << endl;
        return 0;
    }

    ans = "WS";
    last = (s[0] == 'o' ? 'W' : 'S');
    for(int i = 1; i < s.size(); ++i) {
        if(s[i] == 'o') {
            if(ans[i] == 'S') {
                ans += (ans[i - 1] == 'S' ? "S" : "W");
            }else {
                ans += (ans[i - 1] == 'S' ? "W" : "S");
            }
        }else {
            if(ans[i] == 'S') {
                ans += (ans[i - 1] == 'S' ? "W" : "S");
            }else {
                ans += (ans[i - 1] == 'S' ? "S" : "W");
            }
        }
    }
    if(ans[ans.size() - 2] == last && ans[ans.size() - 1] == ans[0]) {
        cout << ans.assign(ans.begin(), ans.begin() + ans.size() - 1) << endl;
        return 0;
    }

    ans = "WW";
    last = (s[0] == 'o' ? 'S' : 'W');
    for(int i = 1; i < s.size(); ++i) {
        if(s[i] == 'o') {
            if(ans[i] == 'S') {
                ans += (ans[i - 1] == 'S' ? "S" : "W");
            }else {
                ans += (ans[i - 1] == 'S' ? "W" : "S");
            }
        }else {
            if(ans[i] == 'S') {
                ans += (ans[i - 1] == 'S' ? "W" : "S");
            }else {
                ans += (ans[i - 1] == 'S' ? "S" : "W");
            }
        }
    }
    if(ans[ans.size() - 2] == last && ans[ans.size() - 1] == ans[0]) {
        cout << ans.assign(ans.begin(), ans.begin() + ans.size() - 1) << endl;
        return 0;
    }
    cout << -1 << endl;
}
