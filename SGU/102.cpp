#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; ++i)
#define RANGE(i, x, n) for(int i = x; i < n; ++i)
typedef long long ll;
typedef long double ld;
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

    int N;
    cin >> N;
    int M = N;
    vector<int> P;
    for(int d = 2; d*d <= N; ++d) {
        if(N%d == 0) {
            P.push_back(d);
            while(N%d == 0) {
                N /= d;
            }
        }
    }
    if(N != 1) {
        P.push_back(N);
    }

    for(auto x: P) {
        M *= (x-1);
        M /= x;
    }
    cout << M << endl;
}
