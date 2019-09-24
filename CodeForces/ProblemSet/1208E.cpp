#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <unordered_map>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <queue>
#include <set>
using namespace std;
typedef long long ll;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    accelerate();
    ll n, m;
    cin >> n >> m;
    vector<ll> ans(m);
    multiset<ll> m_able[n];
    vector<pair<ll, ll>> add[m], rem[m];
    for(int i = 0; i < n; ++i) {
        ll l;
        cin >> l;
        for(int j = 0; j < l; ++j) {
            ll x;
            cin >> x;
            add[j].push_back(make_pair(i, x));
            rem[j+m-l].push_back(make_pair(i, x));
        }
        if(l < m) {
            add[0].push_back(make_pair(i, 0));
            add[l].push_back(make_pair(i, 0));
            rem[m-l-1].push_back(make_pair(i, 0));
            //rem[m-1].push_back(make_pair(i, 0));
        }
    }
    for(int i = 0; i < m; ++i) {
        for(auto e: add[i]) {
            ll ind = e.first;
            ll val = e.second;
            ans[i] -= (m_able[ind].empty()? 0 : *m_able[ind].rbegin()); // delete origin max
            m_able[ind].insert(val);
            ans[i] += *m_able[ind].rbegin();         // add curent max
        }
        if(i < m-1) {
            ans[i+1] = ans[i];
            for(auto e: rem[i]) {
                ll ind = e.first;
                ll val = e.second;
                ans[i+1] -= *m_able[ind].rbegin();
                m_able[ind].erase(m_able[ind].find(val));
                ans[i+1] += (m_able[ind].empty()? 0 : *m_able[ind].rbegin());
            }
        }
        cout << ans[i] << " ";
    }
    cout << endl;
}
