#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <unordered_map>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <queue>
using namespace std;
typedef long long ll;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

const int MAXN = 2e5+10;

int main()
{
    accelerate();
    int n, k;
    cin >> n >> k;
    vector<int> P(n, 0);
    vector<int> Q(n, 0);
    vector<int> indp(n+1, 0);
    vector<int> indq(n+1, 0);

    for(int i = 0; i < n; i++) {
        cin >> P[i];
        indp[P[i]] = i;
    }
    for(int i = 0; i < n; ++i) {
        cin >> Q[i];
        indq[Q[i]] = i;
    }
    char ans[n];

    char ch = 'a';
    int p = 0, q = 0;
    int np = indp[Q[0]];
    int nq = indq[P[0]];
    int cnt = 0;
    while(p < n && q < n) {
        for(int i = p; i <= np; ++i) {
            nq = max(nq, indq[P[i]]);
            ans[P[i]-1] = ch;
        }
        p = np;
        for(int i = q; i <= nq; ++i) {
            np = max(np, indp[Q[i]]);
        }
        q = nq;

        //cout << p << " " << np << " " << q << endl;
        if(p == np) {
            ++p, ++q;
            ++cnt;
            if(ch < 'z') ++ch;
            if(p < n && q < n) {
                np = indp[Q[q]];
                nq = indq[P[p]];
            }else {
                break;
            }
        }
    }
    if(cnt >= k) {
        cout << "YES" << endl;
        for(int i = 0; i < n; ++i) cout << ans[i]; cout << endl;
    }else {
        cout << "NO" << endl;
    }
}
