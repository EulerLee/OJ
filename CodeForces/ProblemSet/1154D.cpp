#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define RANGE(i, x, n) for(int i = x; i < n; ++i)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int INT_INF = 0x3f3f3f3f;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    accelerate();
    int n, b, a;
    cin >> n >> b >> a;
    vector<int> S(n);
    REP(i, n) {
        cin >> S[i];
    }
    int s = b, t = a;
    REP(i, n) {
        if(s == 0 && t == 0) {
            cout << i << endl;
            return 0;
        }else if(s == 0) {
            --t;
        }else if(t == 0) {
            --s;
            if(S[i] == 1) ++t;
        }else {
            if(S[i] == 0) {
                --t;
            }else {
                if(t == a) --t;
                else {
                    --s;
                    ++t;
                }
            }
        }
    }
    cout << n << endl;
}
