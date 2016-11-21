#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX = 1e6 + 1;
vector<bool> isprime(MAX, true);

bool C_left(int n)
{
    if(isprime[n]) {
        if(n < 10) {
            return true;
        }
        string sn = to_string(n);
        sn.erase(sn.begin(), sn.begin() + 1);
        return C_left(stoi(sn));
    }
    return false;
}

bool C_right(int n)
{
    if(isprime[n]) {
        if(n < 10) {
            return true;
        }
        return C_right(n / 10);
    }
    return false;
}

int main(void)
{
    int N;
    cin >> N;

    isprime[0] = isprime[1] = false;
    for(int i = 2; i < N; ++i) {
        if(isprime[i]) {
            for(int k = 2; k * i < N; ++k) {
                isprime[i * k] = false;
            }
        }
    }

    int ans = 0;
    for(int i = 11; i < N; ++i) {
        if(C_left(i) && C_right(i)) {
            ans += i;
            //cout << i << endl;
        }
    }
    cout << ans << endl;
}
