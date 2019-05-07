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
    int M = N/3+(N%3 >= 1);
    cout << N - M << endl;
}
