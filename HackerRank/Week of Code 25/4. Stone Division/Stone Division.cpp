#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define RANGE(i, x, n) for(int i = x; i < n; ++i)
#define REP(i, n) for(int i = 0; i < n; ++i)
using namespace std;
vector<long long> S;

long long grundy(long long n)
{
    if(n == 0 || n == 1) {
        return 0;
    }
    /*vector<long long> factors;
    for(auto x: S) {
        if(n % x == 0) {
            factors.push_back(x);
        }
    }
    if(factors.size() == 0) {
        return 0;
    }else {
        map<long long, int> mp;
        for(auto x: factors) {
            if(x % 2 == 0) {
                mp[0] = 1;
            }else {
                mp[grundy(n / x)] = 1;
            }
        }
        long long ans = 0;
        while(true) {
            if(mp[ans] == 0) {
                return ans;
            }
            ++ans;
        }
    }*/
    map<long long, int> mp;
    for(auto x: S) {
        if(n % x == 0) {
            if(x % 2 == 0) {
                mp[0] = 1;
            }else {
                mp[grundy(n / x)] = 1;
            }
        }
    }
    if(mp.size() == 0) {
        return 0;
    }
    long long ans = 0;
    while(true) {
        if(mp.find(ans) == mp.end()) {
            return ans;
        }
        ++ans;
    }
}

int main()
{
    long long n, m;
    cin >> n >> m;
    long long tmp;
    REP(i, m) {
        cin >> tmp;
        S.push_back(tmp);
    }
    if(grundy(n) == 0) {
        cout << "Second" << endl;
    }else {
        cout << "First" << endl;
    }
}
