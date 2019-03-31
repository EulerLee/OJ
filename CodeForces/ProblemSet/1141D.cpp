#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    accelerate();

    int n;
    cin >> n;
    string sl, sr;
    cin >> sl >> sr;
    map<char, set<int>> P;
    REP(i, n) {
        P[sl[i]].insert(i);
    }
    set<int> Q;
    vector<int> wait;
    vector<pair<int, int>> ans;
    REP(i, n) {
        if(sr[i] == '?') {
            Q.insert(i);
        }else {
            if(!P[sr[i]].empty()) {
                //cout << *P[sr[i]].begin() + 1 << " " << i+1 << endl;
                ans.push_back(make_pair(*P[sr[i]].begin() + 1, i+1));
                P[sr[i]].erase(P[sr[i]].begin());
            }else if(!P['?'].empty()) {
                //cout << *P['?'].begin() + 1 << " " << i+1 << endl;
                ans.push_back(make_pair(*P['?'].begin() + 1, i+1));
                P['?'].erase(P['?'].begin());
            }
        }
    }
    for(auto &s: P) {
        if(!s.second.empty()) {
            for(auto x: s.second) {
                wait.push_back(x);
            }
        }
        s.second.clear();
    }
    int pos = 0;
    while(!Q.empty() && pos < wait.size()) {
        int p = *Q.begin();
        //cout << p+1 << " " << wait[pos]+1 << endl;
        ans.push_back(make_pair(wait[pos]+1, p+1));
        ++pos;
        Q.erase(Q.begin());
    }
    cout << ans.size() << endl;
    for(auto x: ans) {
        cout << x.first << " " << x.second << endl;
    }
}
