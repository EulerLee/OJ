#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <unordered_map>
#include <cstdlib>
#include <cstring>
#include <cmath>
using namespace std;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int MAXN = 1<<18;
ll N, dat[2*MAXN-1][10][2];

void init(int n_)
{
    N = 1;
    while(N < n_) N *= 2;
    for(int i = 0; i < 2*N-1; ++i) {
        for(int j = 0; j < 10; ++j) {
            dat[i][j][0] = INF;
            dat[i][j][1] = INF;
        }
    }
}

void update(int k, int a)
{
    k += N-1;
    int tmp = a;
    for(int i = 0; i < 10; ++i) {
        dat[k][i][1] = INF;
        if(tmp%10 != 0) dat[k][i][0] = a;
        else dat[k][i][0] = INF;
        tmp /= 10;
    }
    while(k > 0) {
        k = (k-1)>>1;
        for(int i = 0; i < 10; ++i) {
            if(dat[k*2+1][i][0] < dat[k*2+2][i][0]) {
                dat[k][i][0] = dat[k*2+1][i][0];
                dat[k][i][1] = min(dat[k*2+1][i][1], dat[k*2+2][i][0]);
            }else if(dat[k*2+1][i][0] > dat[k*2+2][i][0]) {
                dat[k][i][0] = dat[k*2+2][i][0];
                dat[k][i][1] = min(dat[k*2+2][i][1], dat[k*2+1][i][0]);
            }else {
                dat[k][i][0] = dat[k][i][1] = dat[k*2+1][i][0];
            }
        }
    }
}

pair<ll, ll> query(int a, int b, int i, int j, int k, int pos)
{
    if(b <= i || a >= j) return make_pair(INF, INF);
    if(a <= i && j <= b) {
        return make_pair(dat[k][pos][0], dat[k][pos][1]);
    }
    auto vl = query(a, b, i, (i+j)>>1, k*2+1, pos);
    auto vr = query(a, b, (i+j)>>1, j, k*2+2, pos);
    pair<ll, ll> res;
    if(vl.first < vr. first) {
        res.first = vl.first;
        res.second = min(vl.second, vr.first);
    }else if(vl.first > vr.first) {
        res.first = vr.first;
        res.second = min(vr.second, vl.first);
    }else {
        res.first = res.second = vl.first;
    }
    return res;
}

int main()
{
    accelerate();
    int n, m;
    cin >> n >> m;
    init(n);
    for(int i = 0; i < n; ++i) {
        int tmp;
        cin >> tmp;
        update(i, tmp);
    }
    for(int i = 0; i < m; ++i) {
        int cm, a, b;
        cin >> cm >> a >> b;
        if(cm == 1) {
            update(a-1, b);
        }else {
            pair<ll, ll> ans(INF, INF);
            for(int i = 0; i < 10; ++i) {
                auto res = query(a-1, b, 0, N, 0, i);
                if(ans.first + ans.second > res.first + res.second) {
                    ans = res;
                }
            }
            if(ans.second == INF) {
                cout << -1 << endl;
            }else {
                cout << ans.first+ans.second << endl;
            }
        }
    }
}
