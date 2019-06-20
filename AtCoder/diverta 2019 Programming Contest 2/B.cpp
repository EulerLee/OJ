#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;
    vector<pair<int, int>> P(N);
    map<pair<int, int>, int> cnt;
    for(int i = 0; i < N; ++i) {
        cin >> P[i].first >> P[i].second;
    }
    for(int i = 0; i < N; ++i) {
        for(int j = i+1; j < N; ++j) {
            auto tmp = make_pair(P[j].first - P[i].first, P[j].second - P[i].second);
            if(tmp.first < 0) {
                tmp.first = -tmp.first;
                tmp.second = -tmp.second;
            }else if(tmp.first * tmp.second == 0) {
                tmp.first = abs(tmp.first);
                tmp.second = abs(tmp.second);
            }
            if(tmp.first != 0 || tmp.second != 0) cnt[tmp]++;
        }
    }

    int maxc = 0;
    for(auto x: cnt) {
        maxc = max(maxc, x.second);
    }
    cout << N-maxc << endl;
}
