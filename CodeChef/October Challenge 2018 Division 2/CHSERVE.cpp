#include <bits/stdc++.h>
using namespace std;

int main()
{
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int T;
        cin >> T;
        while(T--) {
                long long a, b, K;
                cin >> a >> b >> K;
                a = (a+b)/K;
                if(a % 2 == 0) cout << "CHEF" << endl;
                else cout << "COOK" << endl;
        }
}
