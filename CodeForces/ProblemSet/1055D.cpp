#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

// [sta, las)
pair<int, int> findcore(string &ori, string &tar)
{
    int sta, las;
    sta = las = -1;
    int n = ori.size();
    REP(i, n) {
        if(ori[i] != tar[i]) {
            if(sta == -1) sta = i;
            las = i;
        }
    }
    return make_pair(sta ,las+1);
}

int K;
vector<int> ran;
vector<int> tmp;

bool compare_sa(int i, int j)
{
    if(ran[i] != ran[j]) {
        return ran[i] < ran[j];
    }else {
        int ri = i+K<=n?ran[i+K] : -1;
        int rj = j+K<=n?ran[j+k] : -1;
        return ri < rj;
    }
}

void compute_suffix(string ori, string tar, vector<int> &sa)
{
    int n = ori.size();
    ran.resize(n+1);
    tmp.resize(n+1);
    sa.resize(n+1);
    ran[n] = 0;
    REP(i, n) {
        ran[i] = ori[i]*26+tar[i];
        sa[i] = i;
    }

    for(K = 1; K <= n; K*=2) {
        sort(sa.begin(), sa.end(), compare_sa);

        tmp[0] = 0;
        RANGE(i, 1, n+1) {
            
        }
    }
}

pair<int, int> findLCStr(string &ans_ori, string &ans_tar, string &cur_ori, string &cur_tar)
{
    string ori = cur_ori + "$" + ans_ori;
    string tar = cur_tar + "$" + ans_tar;

}

int main()
{
    accelerate();
    int n;
    cin >> n;
    vector<string> ori(n);
    vector<string> tar(n);
    REP(i, n) cin >> ori[n];
    REP(i, n) cin >> tar[n];
    string ans_ori = ori[0], ans_tar = tar[0];
    RANGE(i, 1, n) {
        auto core = findcore(ori[i], tar[i]);
        auto nextpos = findLCStr(ans_ori, ans_tar, ori[i], tar[i]);
        if(nextpos.first <= core.first && nextpos.second >= core.second) {
            ans_ori.assign(ori[i].begin()+nextpos.first, ori[i].begin()+nextpos.second);
            ans_tar.assign(tar[i].begin()+nextpos.first, tar[i].begin()+nextpos.second);
        }else {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    cout << ans_ori << endl << ans_tar << endl;
}
