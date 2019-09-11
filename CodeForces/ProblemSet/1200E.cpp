#include <iostream>
#include <map>
#include <vector>
#include <unordered_map>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace std;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void getnexta(string &s, vector<int> &next)
{
    int n = s.size();
    next.resize(n);
    next[0] = -1;
    for(int i = 1; i < n; ++i) {
        int p = next[i-1];
        while(p !=- 1) {
            if(s[p+1] == s[i]) break;
            p = next[p];
        }
        if(s[p+1] == s[i]) next[i] = p+1;
        else next[i] = -1;
    }
}

int getpos(string &res, string &des)
{
    int sta = (int)res.size() - (int)des.size();
    sta = max(0, sta);
    vector<int> next;
    getnexta(des, next);
    int j = 0;
    for(int i = sta; i < res.size(); ++i) {
        if(res[i] == des[j]) {
            ++j;
        }else {
            if(j == 0) continue;
            int p = next[j-1];
            j = p+1;
            --i;
        }
    }
    return j;
}

int main()
{
    accelerate();
    int n;
    cin >> n;
    string ans;
    for(int i = 0; i < n; ++i) {
        string tmp;
        cin >> tmp;
        int pos = getpos(ans, tmp);
        ans += tmp.substr(pos);
    }
    cout << ans << endl;
}
