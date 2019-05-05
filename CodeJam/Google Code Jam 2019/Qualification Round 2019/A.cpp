#include <bits/stdc++.h>
using namespace std;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    accelerate();
    int T;
    cin >> T;
    for(int t = 1; t <= T; ++t) {
        string ns;
        cin >> ns;
        string a, b;
        for(auto x: ns) {
            if(x == '4') {
                a += '2';
                b += '2';
            }else {
                a += x;
                if(b != "")
                    b += '0';
            }
        }
        cout << "Case #" << t << ": " << a << " " << (b==""?"0":b) << endl;
    }
}
