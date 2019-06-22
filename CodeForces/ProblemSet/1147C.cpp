#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define RANGE(i, x, n) for(int i = x; i < n; ++i)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
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
    vector<int> A(n);
    REP(i, n) cin >> A[i];
    map<int, int> cnt;
    for(auto x: A) {
        ++cnt[x];
    }
    if(cnt.begin()->second > n/2) {
        cout << "Bob" << endl;
    }else {
        cout << "Alice" << endl;
    }
}
