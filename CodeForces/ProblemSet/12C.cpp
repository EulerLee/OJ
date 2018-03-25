#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <cstdlib>
#include <set>
#include <queue>
#include <bitset>
using namespace std;
typedef long long ll;
typedef long double ld;
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
#define LOWBIT(x) ((x)&(-x))

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> price(n, 0);
    map<string, int> count;
    vector<int> sum;
    REP(i, n) {
        cin >> price[i];
    }
    REP(i, m) {
        string tmp;
        cin >> tmp;
        ++count[tmp];
    }
    sort(price.begin(), price.end());
    for(auto x: count) {
        sum.push_back(x.second);
    }
    sort(sum.begin(), sum.end(), greater<int>());
    int minans, maxans;
    minans = maxans = 0;
    REP(i, sum.size()) {
        minans += sum[i] * price[i];
        maxans += sum[i] * price[n-i-1];
    }
    cout << minans << " " << maxans << endl;
}
