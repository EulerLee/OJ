#include <iostream>
#include <vector>
#include <algorithm>
#define RANGE(i, x, n) for(int i = x; i < n; ++i)
#define REP(i, n) for(int i = 0; i < n; ++i)
using namespace std;

int main()
{
    string P, S;
    int K;
    cin >> P >> S >> K;
    if(K >= P.size() + S.size()) {
        cout << "Yes" << endl;
    }else if(S == P) {
        if(K % 2 == 0) {
            cout << "Yes" << endl;
        }else {
            cout << "No" << endl;
        }
    }else {
        if(S.size() == P.size()) {
            REP(i, S.size()) {
                if(S[i] != P[i]) {
                    if((K >= (P.size() + S.size() - 2 * i) && (K - P.size() - S.size() + 2 * i) % 2 == 0)){
                        cout << "Yes" << endl;
                    }else {
                        cout << "No" << endl;
                    }
                    break;
                }
            }
        }else if(S.size() < P.size()) {
            REP(i, P.size()) {
                if(i == S.size() || S[i] != P[i]) {
                    if((K >= (P.size() + S.size() - 2 * i) && (K - P.size() - S.size() + 2 * i) % 2 == 0)){
                        cout << "Yes" << endl;
                    }else {
                        cout << "No" << endl;
                    }
                    break;
                }
            }
        }else{
            REP(i, S.size()) {
                if(i == P.size() || S[i] != P[i]) {
                    if((K >= (P.size() + S.size() - 2 * i) && (K - P.size() - S.size() + 2 * i) % 2 == 0)){
                        cout << "Yes" << endl;
                    }else {
                        cout << "No" << endl;
                    }
                    break;
                }
            }
        }
    }
}
