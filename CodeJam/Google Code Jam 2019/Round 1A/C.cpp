#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define RANGE(i, x, n) for(int i = x; i < n; ++i)
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

struct Trie {
    int sum;
    Trie* next[26];
    Trie(int sum = 0) : sum(sum) {
        REP(i, 26) {
            next[i] = nullptr;
        }
    }
    Trie* addson(int k) {
        if(!next[k]) {
            next[k] = new Trie();
            next[k]->sum = 1;
        }else {
            next[k]->sum++;
        }
        return next[k];
    }
};

int DFS(Trie *R)
{
    int cntp = 0;
    REP(i, 26) {
        if(R->next[i]) {
            cntp += DFS(R->next[i]);
        }
    }
    R->sum -= cntp;
    return cntp + 2*(R->sum/2 > 0);
}

void solve(int N, vector<string> &as)
{
    Trie *T = new Trie();
    T->sum = 0;
    REP(i, N) {
        Trie* p = T;
        for(int j = as[i].size()-1; j >= 0; --j) {
            p = p->addson(as[i][j]-'A');
        }
    }
    int ans = 0;
    REP(i, 26) {
        if(T->next[i]) ans += DFS(T->next[i]);
    }
    cout << ans << endl;
}

int main()
{
    accelerate();
    int T;
    cin >> T;
    for(int t = 1; t <= T; ++t) {
        int N;
        cin >> N;
        vector<string> as(N);
        REP(i, N) {
            cin >> as[i];
        }
        cout << "Case #" << t << ": ";
        solve(N, as);
    }
}
