#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <set>
#include <cstring>
#include <cmath>
typedef long long LL;
typedef long double LD;
#define RANGE(i, x, n) for(LL i = x; i < n; ++i)
#define REP(i, n) for(LL i = 0; i < n; ++i)
using namespace std;

const int INF = 0x3f3f3f3f;
int G[100][100];

int value(int x, int y, int m, int K, int mid)
{
    if(y+m-1 > K) {
        return INF;
    }
    bool flag = false;
    int ans = m*abs(x-mid);
    REP(i, m) {
        if(G[x-1][y+i-1]) {
            return INF;
        }
        ans += abs(y+i-mid);
    }
    return ans;
}

int main()
{
    int N, K;
    cin >> N >> K;
    int M[N];
    memset(G, 0, sizeof G);
    REP(i, N) {
        cin >> M[i];
    }
    int mid = ceil((K+0.0)/2);
    int x[N];
    int yl[N];
    int yr[N];
    REP(i, N) {
        x[i] = -1;
        int minv = INF;
        int tmpv;
        RANGE(row, 1, K+1) {
            RANGE(seat, 1, K+1) {
                tmpv = value(row, seat, M[i], K, mid);
                if(tmpv < minv) {
                    x[i] = row;
                    yl[i] = seat;
                    yr[i] = seat + M[i] - 1;
                    minv = tmpv;
                }
            }
        }
        if(minv != INF) {
            REP(j, M[i]) {
                G[x[i] - 1][yl[i] + j - 1] = 1;
            }
        }
    }
    REP(i, N) {
        cout << x[i];
        if(x[i] != -1) {
            cout << " " << yl[i] << " " << yr[i] << endl;
        }else {
            cout << endl;
        }
    }
}
