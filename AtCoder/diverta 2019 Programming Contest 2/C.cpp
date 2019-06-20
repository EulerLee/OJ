#include <bits/stdc++.h>
using namespace std;

vector<int> deg;

bool compare(int i, int j)
{
    return deg[i] > deg[j];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<int> A(n);
    for(int i = 0; i < n; ++i) {
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    deg.resize(n);
    vector<int> ind(n);
    for(int i = 0; i < n; ++i) {
        ind[i] = i;
        if(i < n/2) {
            deg[i] = 2*i+1;
        }else {
            deg[i] = 2*(i-n/2);
        }
    }
    sort(ind.begin(), ind.end(), compare);
    ll pre;
    for(int i = 0; i < n; ++i) {
        if(i == 0) {
            pre = A[i];
        }else {
            
        }
    }
}
