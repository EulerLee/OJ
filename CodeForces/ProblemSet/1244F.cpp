#include <iostream>
#include <string>
#include <vector>
#include <string>
#include <cstring>
#include <map>
#include <set>
#include <algorithm>
#include <cstdlib>
#include <cmath>
using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> tag(n);
    int f = -1;
    for(int i = 0; i < n; ++i) {
        if(s[i] == s[(i+1)%n] || s[i] == s[(i-1+n)%n]) {
            tag[i] = 1;
            f = i;
        }
    }

    if(f == -1) {
        if(k%2 == 1) {
            for(auto x: s) {
                if(x == 'W') cout << 'B';
                else cout << 'W';
            }
            cout << endl;
        }else {
            cout << s << endl;
        }
        return 0;
    }
    vector<pair<int, char>> dis;
    for(int i = 0; i < n; ++i) {
        dis.emplace_back(0, s[i]);
    }
    int d = 0;
    char col = s[f];
    for(int i = 0; i < n; ++i) {
        int cur = (i+f)%n;
        if(tag[cur] == 1) {
            d = 0;
            col = s[cur];
        }else {
            dis[cur] = make_pair(++d, col);
        }
    }
    for(int i = 0; i < n; ++i) {
        int cur = (f-i+n)%n;
        if(tag[cur] == 1) {
            d = 0;
            col = s[cur];
        }else {
            if(++d < dis[cur].first) {
                dis[cur] = make_pair(d, col);
            }
        }
    }
    for(int i = 0; i < n; ++i) {
        if(k >= dis[i].first) {
            cout << dis[i].second;
        }else {
            if(k%2 == 0) cout << s[i];
            else {
                if(s[i] == 'W') cout << 'B';
                else cout << 'W';
            }
        }
    }
    cout << endl;
}
