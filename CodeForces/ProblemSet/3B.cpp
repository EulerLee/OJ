#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
#define getmax(A) (A.empty() ? Veh() : A[0])
#define getsec(A) (A.size() < 2 ? Veh() : A[1])
using namespace std;

const int MAX = 0x3f3f3f3f;

struct Veh {
    string n;
    int w;
    Veh(string _n = "", int _w = 0) : n(_n), w(_w) {}
    bool operator > (const Veh &x) const{
        return w > x.w;
    }
};

int main()
{
    std::ios_base::sync_with_stdio(false);
    int n, v;
    cin >> n >> v;
    vector<Veh> kayak;
    vector<Veh> catamaran;
    Veh tmp;
    int t;
    for(int i = 0; i < n; ++i) {
        cin >> t >> tmp.w;
        tmp.n = to_string(i + 1);
        if(t == 1) {
            kayak.push_back(tmp);
        }else {
            catamaran.push_back(tmp);
        }
    }
    sort(kayak.begin(), kayak.end(), greater<Veh>());
    sort(catamaran.begin(), catamaran.end(), greater<Veh>());
    vector<Veh> ans;

    int pc = -1;
    while(v > 1) {
        if(catamaran.size() > 0) {
            ans.push_back(catamaran[0]);
            ++pc;
            catamaran.erase(catamaran.begin(), catamaran.begin() + 1);
            v -= 2;
        }else {
            break;
        }
    }
    while(v > 0) {
        if(kayak.size() > 0) {
            ans.push_back(kayak[0]);
            kayak.erase(kayak.begin(), kayak.begin() + 1);
            --v;
        }else {
            break;
        }
    }

    while(pc >= 0 && ans[pc].w < getmax(kayak).w + getsec(kayak).w) {
        ans.push_back(kayak[0]);
        kayak.erase(kayak.begin(), kayak.begin() + 1);
        if(getmax(kayak).w != 0) {
            ans.push_back(kayak[0]);
            kayak.erase(kayak.begin(), kayak.begin() + 1);
        }
        ans.erase(ans.begin() + pc, ans.begin() + pc + 1);
        --pc;
    }

    int sum = 0;
    for(auto x: ans) {
        sum += x.w;
    }
    cout << sum << endl;
    cout << ans[0].n;
    for(int i = 1; i < ans.size(); ++i) {
        cout << " " << ans[i].n;
    }
    cout << endl;
}
