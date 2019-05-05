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
    int T;
    cin >> T;
    for(int ti = 1; ti <= T; ++ti) {
        int n;
        cin >> n;
        vector<string> A(n);
        for(int i = 0; i < n; ++i) {
            cin >> A[i];
        }
        sort(A.begin(), A.end());
        //for(auto x: A) cout << x << endl; cout << endl;
        string ans;
        vector<int> vis(n);
        for(int i = 0; i < 500; ++i) {
            //cout << sta << endl;
            int flg = 0;
            for(int j = 0; j < n; ++j) {
                if(vis[j]) continue;
                int k = i;
                if(k >= A[j].size()) k %= A[j].size();
                if(A[j][k] == 'S') {
                    flg |= 1;
                }else if(A[j][k] == 'R') {
                    flg |= 2;
                }else {
                    flg |= 4;
                }
            }
            if(flg == 7) {
                cout << "Case #" << ti << ": IMPOSSIBLE" << endl;
                goto nextround;
            }else if(flg == 1) {
                ans += 'R';
                for(int j = 0; j < n; ++j) {
                    int k = i;
                    if(k >= A[j].size()) k %= A[j].size();
                    if(A[j][k] == 'S') {
                        vis[j] = 1;
                    }
                }
            }else if(flg == 2) {
                ans += 'P';
                for(int j = 0; j < n; ++j) {
                    int k = i;
                    if(k >= A[j].size()) k %= A[j].size();
                    if(A[j][k] == 'R') {
                        vis[j] = 1;
                    }
                }
            }else if(flg == 4) {
                ans += 'S';
                for(int j = 0; j < n; ++j) {
                    int k = i;
                    if(k >= A[j].size()) k %= A[j].size();
                    if(A[j][k] == 'P') {
                        vis[j] = 1;
                    }
                }
            }else if(flg == 3) {
                ans += 'R';
                for(int j = 0; j < n; ++j) {
                    int k = i;
                    if(k >= A[j].size()) k %= A[j].size();
                    if(A[j][k] == 'S') {
                        vis[j] = 1;
                    }
                }
            }else if(flg == 5) {
                ans += 'S';
                for(int j = 0; j < n; ++j) {
                    int k = i;
                    if(k >= A[j].size()) k %= A[j].size();
                    if(A[j][k] == 'P') {
                        vis[j] = 1;
                    }
                }
            }else if(flg == 6) {
                ans += 'P';
                for(int j = 0; j < n; ++j) {
                    int k = i;
                    if(k >= A[j].size()) k %= A[j].size();
                    if(A[j][k] == 'R') {
                        vis[j] = 1;
                    }
                }
            }else {
                break;
            }
        }
        cout << "Case #" << ti << ": " << ans << endl;
nextround:
        continue;
    }
}
