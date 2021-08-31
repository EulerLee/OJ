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
#include <unordered_map>
#include <tuple>
#include <queue>
#include <bitset>
#define PII pair<int, int>
#define T3I tuple<int, int, int>
using namespace std;

typedef long long ll;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int INF = 0x3f3f3f3f;

unordered_set<char> S {'A', 'E', 'I', 'O', 'U'};

void run(int case_id)
{
    string s;
    cin >> s;
    int n = s.size();
    int cnt_v = 0, cnt_c = 0;
    unordered_map<char, int> cnt;
    for(auto x: s) {
        ++cnt[x];
    }
    for(auto x: S) {
        cnt_v += cnt[x];
    }
    cnt_c = n - cnt_v;

    int ans = INF;
    for(char c = 'A'; c <= 'Z'; ++c) {
        int tmp = 0;
        if(S.find(c) != S.end()) {
            tmp = cnt_c + (cnt_v - cnt[c])*2;
        }else {
            tmp = cnt_v + (cnt_c - cnt[c])*2;
        }
        ans = min(ans, tmp);
    }

    cout << "Case #" << case_id << ": " << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    for(int i = 0; i < T; ++i) {
        run(i+1);
    }
}