#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <cstdlib>
#include <set>
#include <queue>
#include <bitset>
#include <unordered_map>
#include <cstring>
//#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
#define LOWBIT(x) ((x)&(-x))

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin >> n;
    vector<ll> A(n, 0);
    unordered_map<ll, vector<ll>> Pos;
    REP(i, n) {
        cin >> A[i];
        Pos[A[i]].push_back(i);
    }

    ll sta = 0;

    bool found = true;
    while(found) {
        found = false;
        RANGE(cur, sta, n) {
            //find s[t~pre(i)] == s[pre{i}~i]
            if(Pos[A[cur]].size() == 1) continue;
            ll ppos = -1;
            REP(i, Pos[A[cur]].size()) {
                if(Pos[A[cur]][i] == cur) {
                    ppos = i;
                    break;
                }
            }
            if(ppos == 0) {
                continue;
            }
            ll pre = Pos[A[cur]][ppos-1];
            if(cur-pre-1 > pre-sta) continue;
            ll len = cur-pre;
            RANGE(i, 2*pre-cur+1, pre+1) {
                if(A[i] != A[i+len]) {
                    len = -1;
                    break;
                }
            }
            if(len == -1) continue;
            found = true;
            sta = pre+1;
            break;
        }
    }
    cout << n-sta << endl;
    RANGE(i, sta, n) {
        cout << A[i] << " ";
    }
    cout << endl;
}
