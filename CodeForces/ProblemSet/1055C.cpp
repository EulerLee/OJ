#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll la, ra, ta, lb, rb, tb;

ll gcd(ll a, ll b)
{
    if(b == 0) return a;
    else return gcd(b, a%b);
}

bool mz(ll seg)
{
    ll abgcd = gcd(ta, tb);
    ll len1 = abs(la-lb), len2 = abs(la - (rb-seg+1)), len3 = abs(ra-seg+1 - lb), len4 = abs(ra-seg - (rb-seg));
    ll maxlen = max(len1, max(len2, max(len3, len4)));
    ll minlen = min(len1, min(len2, min(len3, len4)));
    //cout << seg << " " << maxlen << " " << minlen << endl;
    ll l = 0, h = 1e10/abgcd + 1;
    ll m = (l+h)/2;
    while(h - l > 1) {
        if(m*abgcd <= maxlen) {
            l = m;
        }else {
            h = m;
        }
        m = (l+h)/2;
    }
    if(l*abgcd >= minlen && l*abgcd <= maxlen) {
        return true;
    }else {
        return false;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> la >> ra >> ta >> lb >> rb >> tb;
    ll h = min(ra - la + 1, rb - lb +1) + 1;
    ll l = 0;
    ll m = (h+l)/2;
    while(h - l > 1) {
        if(mz(m)) {
            l = m;
        }else {
            h = m;
        }
        m = (l+h)/2;
    }
    cout << l << endl;
}
