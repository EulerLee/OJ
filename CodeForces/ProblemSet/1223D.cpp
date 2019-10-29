#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

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
#include <unordered_set>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> A(n);
    map<int, int> mp;
    for(int i = 0; i < n; ++i) {
        cin >> A[i];
        mp[A[i]] = 1;
    }
    int cnt = 0;
    for(auto &e: mp) {
        e.second = cnt++;
    }
    vector<int> cne(cnt, 1);
    //cne[cnt-1] = 0;
    unordered_set<int> S;
    for(auto x: A) {
        //cout << x << ":\t" << mp[x] << endl;
        int cur = mp[x];
        if(S.find(cur+1) != S.end()) {
            cne[cur] = 0;
        }
        S.insert(cur);
    }
    int len = 1;
    int tmp = 1;
    for(int i = 0; i < cnt-1; ++i) {
        //cout << cne[i] << " ";
        if(cne[i]) {
            ++tmp;
        }else {
            len = max(len, tmp);
            tmp = 1;
        }
    }
    len = max(len, tmp);
    //cout << endl << cnt << " " << len << endl;
    cout << cnt-len << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while(T--) {
        solve();
    }
}
