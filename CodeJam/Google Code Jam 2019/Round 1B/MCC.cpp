#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    for(int ti = 1; ti <= T; ++ti) {
        int P, Q;
        cin >> P >> Q;
        vector<int> sumx1(Q+1);
        vector<int> sumx2(Q+1);
        vector<int> sumy1(Q+1);
        vector<int> sumy2(Q+1);

        for(int i = 0; i < P; ++i) {
            int x, y;
            char D;
            cin >> x >> y >> D;
            if(D == 'N') {
                sumy1[y+1] += 1;
            }else if(D == 'S') {
                sumy2[y-1] += 1;
            }else if(D == 'E') {
                sumx1[x+1] += 1;
            }else {
                sumx2[x-1] += 1;
            }
        }
        //for(auto y: sumy1) cout << y << " ";cout << endl;
        for(int i = 1; i < Q+1; ++i) {
            sumx1[i] += sumx1[i-1];
            sumy1[i] += sumy1[i-1];
        }
        for(int i = Q-1; i >= 0; --i) {
            sumx2[i] += sumx2[i+1];
            sumy2[i] += sumy2[i+1];
        }

        for(int i = 0; i < Q+1; ++i) {
            sumx1[i] += sumx2[i];
            sumy1[i] += sumy2[i];
        }

        //for(auto y: sumy1) cout << y << " ";cout << endl;
        int ansx = 0, ansy = 0;
        //int ansx, ansy;
        int maxx = 0, maxy = 0;
        for(int i = 0; i < Q+1; ++i) {
            if(maxx < sumx1[i]) {
                maxx = sumx1[i];
                ansx = i;
            }
            if(maxy < sumy1[i]) {
                maxy = sumy1[i];
                ansy = i;
            }
        }
        cout << "Case #" << ti << ": " << ansx << " " << ansy << endl;
    }
}
