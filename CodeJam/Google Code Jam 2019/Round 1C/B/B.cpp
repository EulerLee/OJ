#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    accelerate();
    int T, F;
    cin >> T >> F;
    while(T--) {
        map<char, vector<int>> FI;
        for(int i = 0; i < 119; i++) {    // 119
            cout << i*5+1 << endl;
            cout.flush();
            char ch;
            cin >> ch;
            FI[ch].push_back(i);
        }
        string ans;
        vector<int> vis;
        for(auto e: FI) {
            if(e.second.size() == 23) {
                ans += e.first;
                for(auto x: e.second) {
                    vis.push_back(x);
                }
            }
        }
        //for(auto x: vis) cout << x << " "; cout << endl;
        FI.clear();
        for(auto x: vis) {                  // 23
            cout << 2+x*5 << endl;
            cout.flush();
            char ch;
            cin >> ch;
            //cout << ch << endl;
            FI[ch].push_back(x);
        }
        vis.clear();
        for(auto e: FI) {
            if(e.second.size() == 5) {
                ans += e.first;
                for(auto x: e.second) {
                    vis.push_back(x);
                }
            }
        }
        //for(auto x: vis) cout << x << " "; cout << endl;
        FI.clear();
        for(auto x: vis) {                  // 5
            cout << 3+x*5 << endl;
            cout.flush();
            char ch;
            cin >> ch;
            //cout << ch << endl;
            FI[ch].push_back(x);
        }
        vis.clear();
        for(auto e: FI) {
            if(e.second.size() == 1) {
                ans += e.first;
                for(auto x: e.second) {
                    vis.push_back(x);
                }
            }
        }
        //for(auto x: vis) cout << x << " "; cout << endl;
        cout << vis[0]*5+4 << endl;
        cout.flush();
        char ch;
        cin >> ch;
        set<char> S;
        for(auto x: ans) {
            S.insert(x);
        }
        S.insert(ch);
        for(int i = 0; i < 5; ++i) {
            if(S.find('A'+i) == S.end()) {
                ans += 'A'+i;
                break;
            }
        }
        ans += ch;

        cout << ans << endl;
        cout.flush();
        char flg;
        cin >> flg;
        if(flg == 'N') return 0;
    }
}
