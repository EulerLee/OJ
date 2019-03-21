#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
const int INF = 0x3f3f3f3f;

ll digitsum(ll N)
{
        ll ans = 0;
        while(N) {
                ans += N%10;
                N /= 10;
        }
        return ans;
}

ll normalize(ll N, ll &step)
{
        ll ans = N;
        step = 0;
        while(ans > 9) {
                ll tmp = 0;
                while(ans) {
                        tmp += ans % 10;
                        ans /= 10;
                }
                ans = tmp;
                ++step;
        }
        return ans;
}

ll BFS(ll N, ll cur_plus, ll plus_ceil, ll target, ll D)
{
        if(N == target) return 0;
        ll rs, ls;
        rs = ls = INF;
        if(N > 9) {
                ls = 1 + BFS(digitsum(N), cur_plus, plus_ceil, target, D);
        }
        if(cur_plus < plus_ceil) {
                rs = 1 + BFS(N+D, cur_plus+1, plus_ceil, target, D);
        }
        return min(ls, rs);
}

int main()
{
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int T;
        cin >> T;
        while(T--) {
                ll N, D;
                cin >> N >> D;
                vector<int> A(10, -1);
                ll step = 0;
                ll a = normalize(N, step);
                //cout << a << step;
                ll count = 0;
                while(A[a] == -1) {
                        A[a] = count;
                        a = normalize(a+D, step);
                        ++count;
                }
                REP(i, 10) {
                        if(A[i] != -1) {
                                a = i;
                                count = A[i];
                                break;
                        }
                }

                //cout << a << " " << count << endl;

                /*normalize(N+count*D, step);
                count += step;*/

                ll ans = BFS(N, 0, count, a, D);
                cout << a << " " << ans << endl;
        }
}
