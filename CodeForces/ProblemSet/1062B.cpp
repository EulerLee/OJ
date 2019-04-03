#include <bits/stdc++.h>
using namespace std;

int quickpow(int x, int n)
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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    if(n == 1) {
        cout << "1 0" << endl;
        return 0;
    }
    vector<int> isprime(n+1, 1);
    vector<int> prime;
    for(int i = 2; i <= n; ++i) {
        if(isprime[i]) {
            prime.push_back(i);
            for(int k = 1; k*i <= n; ++k) {
                isprime[k*i] = 0;
            }
        }
    }
    int top = 0;
    int res = 1;
    vector<int> ind;
    for(auto p: prime) {
        if(n % p == 0) {
            res *= p;
            int tmp = n;
            int e = 0;
            while(tmp%p == 0) {
                tmp /= p;
                ++e;
            }
            ind.push_back(e);
            top = max(top, e);
        }
    }
    int ans = 0;
    int mi = 1;
    while(mi < top) {
        ++ans;
        mi *= 2;
    }
    if(mi > top) {
        ++ans;
    }else {
        bool flag = false;
        for(auto e: ind) {
            if(e != mi) {
                flag = true;
                break;
            }
        }
        if(flag) ++ans;
    }
    cout << res << " " << ans << endl;
}
