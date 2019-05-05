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
        int N;
        cin >> N;
        string ban;
        cin >> ban;
        cout << "Case #" << t << ": ";
        for(auto x: ban) {
            if(x == 'E') cout << 'S';
            else cout << 'E';
        }
        cout << endl;
    }
}
