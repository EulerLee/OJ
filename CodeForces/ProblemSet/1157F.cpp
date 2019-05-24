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
    int n;
    cin >> n;
    vector<int> cnt(200001);
    REP(i, n) {
        int tmp;
        cin >> tmp;
        cnt[tmp]++;
    }
    ll ans = 0;
    ll sum = 0;
    int sta = -1;
    int l, r;
    l = r = -1;
    REP(i, 200001) {
        if(cnt[i] == 0) {
            if(ans < sum) {
                ans = sum;
            }
            sum = 0;
            sta = -1;
        }else if(cnt[i] == 1) {
            sum += cnt[i];
            if(sta == -1) {
                sta = i;
            }
            if(ans < sum) {
                ans = sum;
                l = sta;
                r = i;
            }
            sta = i;
            sum = cnt[i];
        }else {
            sum += cnt[i];
            if(sta == -1) {
                sta = i;
            }
            if(ans < sum) {
                ans = sum;
                l = sta;
                r = i;
            }
        }
    }
    cout << ans << endl;
    RANGE(i, l, r+1) {
        if(i == l) {
            REP(k, cnt[i]) {
                cout << i << " ";
            }
        }else if(i == r) {
            REP(k, cnt[i]) {
                cout << i << " ";
            }
        }else {
            REP(k, cnt[i]-1) {
                cout << i << " ";
            }
        }
    }
    for(int i = r-1; i > l; --i) {
        cout << i << " ";
    }
    cout << endl;
}
