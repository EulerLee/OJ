#include <iostream>
#include <string>
#include <vector>
#include <string>
#include <cstring>
#include <map>
#include <set>
#include <algorithm>
#include <cstdlib>
#include <cmath>
using namespace std;

const int MAXN = 2010;
int S[MAXN][MAXN];
int D[MAXN][MAXN];
int L[MAXN];
int N;

int row[MAXN];
int col[MAXN];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            char x;
            cin >> x;
            S[i][j] = x == '1';
        }
    }
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            char x;
            cin >> x;
            D[i][j] = x == '1';
        }
    }
    int fir = -1;
    for(int i = 0; i < N; ++i) {
        char x;
        cin >> x;
        L[i] = x=='1';
        if(fir == -1 && L[i] != 0) fir = i;
    }
    if(fir == -1) {
        for(int i = 0; i < N; ++i) {
            for(int j = 0; j < N; ++i) {
                if(S[i][j] != D[i][j]) {
                    cout << -1 << endl;
                    return 0;
                }
            }
        }
        cout << 0 << endl;
        return 0;
    }
    row[fir] = S[fir][fir]^D[fir][fir];
    //col[fir] = 0;
    for(int i = 0; i < N; ++i) {
        if(L[i] == 1 && i != fir) {
            row[i] = S[i][fir]^D[i][fir]^col[fir];
            col[i] = S[fir][i]^D[fir][i]^row[fir];
        }
    }
    for(int i = 0; i < N; ++i) {
        if(L[i] == 0) {
            row[i] = S[i][fir]^D[i][fir];
            col[i] = S[fir][i]^D[fir][i];
        }
    }
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            if(L[i]) S[i][j] ^= col[j];
            if(L[j]) S[i][j] ^= row[i];
            if(S[i][j] != D[i][j]) {
                cout << -1 << endl;
                return 0;
            }
        }
    }
    int sum = 0;
    for(int i = 0; i < N; ++i) {
        sum += row[i] + col[i];
    }
    cout << sum << endl;
    for(int i = 0; i < N; ++i) {
        if(row[i]) cout << "row " << i << endl;
        if(col[i]) cout << "col " << i << endl;
    }
}
