#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

const long long MAX = 1e8 + 1;

int main()
{
    //std::ios_base::sync_with_stdio(false);
    string sbr, s;
    cin >> sbr;
    s = sbr;
    vector<long long> posq;
    vector<long long> cl;
    vector<long long> cr;
    for(int i = 0; i < sbr.size(); ++i) {
        if(sbr[i] == '?') {
            posq.push_back(i);
            s[i] = ')';
        }
    }
    long long l, r;
    long long ans = 0;
    for(int i = 0; i < posq.size(); ++i) {
        cin >> l >> r;
        cl.push_back(l);
        cr.push_back(r);
        ans += r;
    }
    long long nob = 0;
    for(int i = 0; i < sbr.size(); ++i) {
        if(sbr[i] == '(') {
            ++nob;
        }else {
            --nob;
        }
        if(nob < 0) {
            long long minc = MAX;
            int pos = -1;
            for(int k = 0; posq[k] <= i; ++k) {
                if(cl[k] - cr[k] < minc) {
                    minc = cl[k] - cr[k];
                    pos = k;
                }
            }
            if(pos == -1) {
                cout << -1 << endl;
                return 0;
            }else {
                ans += minc;
                s[posq[pos]] = '(';
                posq.erase(posq.begin() + pos, posq.begin() + pos + 1);
                cl.erase(cl.begin() + pos, cl.begin() + pos + 1);
                cr.erase(cr.begin() + pos, cr.begin() + pos + 1);
                nob += 2;
            }
        }
    }
    if(nob > 0) {
        cout << -1 << endl;
        return 0;
    }
    cout << ans << endl;
    cout << s << endl;
}
