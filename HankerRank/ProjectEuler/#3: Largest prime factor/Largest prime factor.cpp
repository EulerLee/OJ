#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() { 
    int T;
    cin >> T;
    for(int i = 0; i < T; ++i){
        long n;
        cin >> n;
        long ans = 2;
        while(n % 2 == 0){
            n /= 2;
        }
        if(ans == 1){
            cout << 2 << endl;
        }
        else{
        ans = n;
        for(long k = 3; k * k <= n; k += 2){
            if(n % k == 0){
                n /= k;
                ans = k;
                k -= 2;
            }
        }
        cout << (ans > n ? ans : n) << endl;
        }
    }
    return 0;
}
