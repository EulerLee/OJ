#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)

const int KLENTH = 1e6+2;

struct Circle {
        ll X;
        ll Y;
        ll R;
        Circle(ll x = 0, ll y = 0, ll r = 0) : X(x), Y(y), R(r) {}
};

int main()
{
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int N, Q;
        cin >> N >> Q;
        vector<Circle> circles(N, Circle());
        REP(i, N) {
                cin >> circles[i].X >> circles[i].Y >> circles[i].R;
        }
        vector<ll> line(KLENTH, 0);
        REP(i, N) {
                RANGE(j, i+1, N) {
                        double tmp = sqrt((circles[i].X - circles[j].X)*(circles[i].X - circles[j].X) + (circles[i].Y - circles[j].Y)*(circles[i].Y - circles[j].Y));
                        int sta = ceil(tmp);
                        if(max(circles[i].R, circles[j].R) >= sta + min(circles[i].R, circles[j].R)) {
                                sta = max(circles[i].R, circles[j].R) - (floor(tmp) + min(circles[i].R, circles[j].R));
                        }else {
                                sta -= circles[i].R + circles[j].R;
                        }
                        sta = min(KLENTH-1, max(0, sta));
                        int end = floor(sqrt((circles[i].X - circles[j].X)*(circles[i].X - circles[j].X) + (circles[i].Y - circles[j].Y)*(circles[i].Y - circles[j].Y)));
                        end += circles[i].R + circles[j].R+1;
                        end = min(KLENTH-1, end);
                        ++line[sta];
                        --line[end];
                }
        }
        RANGE(i, 1, KLENTH) {
                line[i] += line[i-1];
        }
        REP(i, Q) {
                int K;
                cin >> K;
                cout << line[K] << endl;
        }
}
