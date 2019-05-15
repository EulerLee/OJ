#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
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

int quick_pow(int x, int n)
{
    int ans = 1;
    while(n) {
        if(n&1) {
            ans *= x;
        }
        x *= x;
        n >>= 1;
    }
    return ans;
}

vector<int> a;
bool compare(int i, int j)
{
    return a[i] < a[j];
}

int main()
{
    accelerate();

    int n;
    cin >> n;
    a.resize(n);
    vector<int> order(n);
    REP(i, n) {
        order[i] = i;
        cin >> a[i];
    }
    sort(order.begin(), order.end(), compare);
    //for(auto x: order) cout << x << " "; cout << endl;
    vector<pair<int, int>> dv(a[order[n-1]]+1, make_pair(-1, -1));

    int top = a[order[n-1]];
    vector<int> vis(top+1);
    vector<int> prime{2};
    for(int i = 3; i <= top; i+=2) {
        if(vis[i] == 0) {
            vis[i] = 1;
            prime.push_back(i);
            for(int k = 1; k*i <= top; ++k) {
                vis[k*i] = 1;
            }
        }
    }

    REP(i, n) {
        int m = a[order[i]];
        if(m == 1) {
            if(dv[1].first == -1) {
                dv[1].first = order[i];
            }else if(dv[1].second == -1) {
                dv[1].second = order[i];
            }
            continue;
        }

        vector<int> D(11);
        vector<int> S(11);
        int cnt = 0;
        for(int j = 0; prime[j]*prime[j] <= m && j < prime.size(); ++j) {
            if(m%prime[j] == 0) {
                int tmp = 0;
                while(m%prime[j] == 0) {
                    ++tmp;
                    m /= prime[j];
                }
                D[cnt] = prime[j];
                S[cnt] = tmp;
                ++cnt;
            }
        }
        if(m != 1) {
            D[cnt] = m;
            S[cnt] = 1;
            ++cnt;
        }

        //for(auto x: D) cout << x << " "; cout << endl;
        //for(auto x: S) cout << x << " "; cout << endl;

        m = a[order[i]];
        int cur = m;
        vector<int> ind(S.begin(), S.end());
        int flg = 0;
        int j = 0;

        while(true) {
            if(j == cnt) {
                //cout << cur << endl;
                if(dv[cur].first == -1) {
                    dv[cur].first = order[i];
                }else if(dv[cur].second == -1) {
                    dv[cur].second = order[i];
                }else {
                    int k = cnt-1;
                    while(k >= 0) {
                        if(ind[k] < S[k]) break;
                        --k;
                    }
                    if(k == -1) {
                        break;
                    }else {
                        j = k;
                        flg = 1;
                        continue;
                    }
                }
                --j;
                flg = 1;
                continue;
            }
            if(j == -1) break;
            if(flg) {
                if(ind[j] == 0) {
                    cur *= quick_pow(D[j], S[j]);
                    ind[j] = S[j];
                    --j;
                    flg = 1;
                }else {
                    --ind[j];
                    cur /= D[j];
                    flg = 0;
                    ++j;
                }
            }else {
                ++j;
            }
        }
    }

    ll ans = 1ll*a[order[0]]*a[order[1]];
    auto res = make_pair(order[0], order[1]);
    RANGE(i, 1, dv.size()) {
        if(dv[i].second != -1) {
            //cout << i << ":\t" << dv[i][0] << " " << dv[i][1] << endl;
            if(1ll*a[dv[i].first]*a[dv[i].second]/i < ans) {
                ans = 1ll*a[dv[i].first]*a[dv[i].second]/i;
                res = make_pair(dv[i].first, dv[i].second);
            }
        }
    }
    //cout << ans << endl;
    int x = min(res.first, res.second);
    int y = max(res.first, res.second);
    cout << x+1 << " " << y+1 << endl;
}
