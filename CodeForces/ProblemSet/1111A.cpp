#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;

inline bool vowel(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main()
{
    string s, t;
    cin >> s >> t;
    bool ans = false;
    if(s.size() != t.size()) {
        cout << "No" << endl;
        return 0;
    }
    for(int i = 0; i < s.size(); ++i) {
        if(vowel(s[i]) && vowel(t[i])) {
            continue;
        }else if(!(vowel(s[i]) || vowel(t[i]))) {
            continue;
        }else {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
