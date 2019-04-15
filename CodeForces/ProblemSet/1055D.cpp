#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; ++i)
#define RANGE(i, x, n) for(ll i = x; i < n; ++i)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int INF = 0x3f3f3f3f;

void accelerate()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

const ull BASE = 1e8+7;
ull quick_pow(ull x, ull n)
{
    ull ans = 1;
    while(n) {
        if(n&1) {
            ans *= x;
        }
        x *= x;
        n >>= 1;
    }
    return ans;
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
    if(las == -1) {
        return make_pair(0, 0);
    }
    return make_pair(sta ,las+1);
}

bool changeans(string &ans_ori, string &ans_tar, string &ori, string &tar, int sta, int las)
{
    string core_ori = ori.substr(sta, las-sta);
    string core_tar = tar.substr(sta, las-sta);

    int pos = -1;
    int m = core_ori.size();
    int n = ans_ori.size();
    if(n < m) return false;
    ull P = 0;
    REP(i, m) {
        P = P*BASE + (core_ori[i]-'a'+1)*26ll + core_tar[i]-'a'+1;
    }

    ull T = 0;
    REP(i, m) {
        T = T*BASE + (ans_ori[i]-'a'+1)*26ll + ans_tar[i]-'a'+1;
    }

    for(int i = 0; i+m <= n; ++i) {
        if(i == 0) {
            if(T == P) {
                pos = 0;
                break;
            }
        }else {
            T = (T-quick_pow(BASE, m-1)*((ans_ori[i-1]-'a'+1)*26ll + ans_tar[i-1]-'a'+1))*BASE + (ans_ori[i+m-1]-'a'+1)*26ll + ans_tar[i+m-1]-'a'+1;
            if(T == P) {
                pos = i;
                break;
            }
        }
    }
    if(pos == -1) {
        return false;
    }else {
        int ans_sta = pos;
        int ans_las = pos+las-sta;
        while(ans_sta > 0 && sta > 0) {
            if(ori[sta-1] == ans_ori[ans_sta-1] && tar[sta-1] == ans_tar[ans_sta-1]) {
                --ans_sta;
                --sta;
            }else {
                break;
            }
        }
        while(ans_las < ans_ori.size() && las < ori.size()) {
            if(ori[las] == ans_ori[ans_las] && tar[las] == ans_tar[ans_las]) {
                ++ans_las;
                ++las;
            }else {
                break;
            }
        }
        ans_ori = ans_ori.substr(ans_sta, las-sta);
        ans_tar = ans_tar.substr(ans_sta, las-sta);
        return true;
    }
}

int main()
{
    accelerate();
    int n;
    cin >> n;
    vector<string> ori(n);
    vector<string> tar(n);
    vector<pair<int, int>> cores(n);
    REP(i, n) cin >> ori[i];
    REP(i, n) cin >> tar[i];
    string ans_ori, ans_tar;
    REP(i, n) {
        // 事实上，每个非空的core必须是一样的
        cores[i] = findcore(ori[i], tar[i]);
        if(cores[i].second - cores[i].first == 0) continue;
        else if(ans_ori == "") {
            ans_ori = ori[i];
            ans_tar = tar[i];
            continue;
        }
        if(!changeans(ans_ori, ans_tar, ori[i], tar[i], cores[i].first, cores[i].second)) {
            cout << "NO" << endl;
            return 0;
        }
    }
    REP(i, n) {
        int pos_ori = ori[i].find(ans_ori);
        if(cores[i].second-cores[i].first == 0) {
            if(pos_ori != -1) {
                cout << "NO" << endl;
                return 0;
            }
        }else {
            if(pos_ori == -1) {
                cout << "NO" << endl;
                return 0;
            }
            if(pos_ori <= cores[i].first && pos_ori+ans_ori.size() >= cores[i].second) continue;
            else {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;
    cout << ans_ori << endl << ans_tar << endl;
}
