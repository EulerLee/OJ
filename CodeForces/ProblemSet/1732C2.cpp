#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <array>
#include <numeric>
#include <unordered_map>
using namespace std;

typedef long long ll;

const int MAXN = 2e5+10;
int A[MAXN], B[MAXN], Rev1[MAXN], Rev2[MAXN];
int B_XOR[MAXN+1];

void run()
{
    int n, q;
    cin >> n >> q;
    B_XOR[0] = 0;
    int cnt = 0;
    for(int i = 0; i < n; ++i) {
        cin >> A[i];
        Rev1[i] = min(cnt, n-1);
        if (A[i] != 0) {
            B[cnt++] = i;
        }
    }
    int tmp = cnt-1;
    for(int i = n-1; i >= 0; --i) {
        Rev2[i] = max(tmp, 0);
        if (A[i] != 0) {
            tmp--;
        }
    }
    for(int i = 0; i < cnt; ++i) {
        B_XOR[i+1] = B_XOR[i] ^ A[B[i]];
    }

    // cout << "A:\t\t";
    // for (int i = 0; i < n; ++i) {
    //     cout << A[i] << " ";
    // }
    // cout << endl << "A index:\t";
    // for (int i = 0; i < n; ++i) {
    //     cout << i << " ";
    // }
    // cout << endl << "B:\t\t";
    // for(int i = 0; i < cnt; ++i) {
    //     cout << B[i] << " ";
    // }
    // cout << endl << "B index:\t";
    // for(int i = 0; i < cnt; ++i) {
    //     cout << i << " ";
    // }
    // cout << endl << "Rev1:\t\t";
    // for(int i = 0; i < n; ++i) {
    //     cout << Rev1[i] << " ";
    // }
    // cout << endl << "Rev2:\t\t";
    // for(int i = 0; i < n; ++i) {
    //     cout << Rev2[i] << " ";
    // }
    // cout << endl;

    for(int i = 0; i < q; ++i) {
        int revl, revr;
        cin >> revl >> revr;
        --revl, --revr;
        int l = Rev1[revl], r = Rev2[revr];
        
        if (B[l] > B[r] || revr < B[l] || revl > B[r]) {
            cout << revl+1 << " " << revl+1 << endl;
            continue;
        }

        int xo = B_XOR[r+1] ^ B_XOR[l];
        
        vector<int> xor_l, xor_r;
        xor_l.push_back(0);
        xor_r.push_back(0);

        int tmp_l = l;
        int xo_tmp = xo;
        while(r > tmp_l) {
            if (xo_tmp == (1ll*(xo_tmp^A[B[tmp_l]]) + A[B[tmp_l]])) {
                xo_tmp ^= A[B[tmp_l]];
                xor_l.push_back(xor_l.back() ^ A[B[tmp_l]]);
                ++tmp_l;
            } else {
                break;
            }
        }
        int tmp_r = r;
        xo_tmp = xo;
        while(tmp_r > l) {
            if (xo_tmp == (1ll*(xo_tmp^A[B[tmp_r]]) + A[B[tmp_r]])) {
                xo_tmp ^= A[B[tmp_r]];
                xor_r.push_back(xor_r.back() ^ A[B[tmp_r]]);
                --tmp_r;
            } else {
                break;
            }
        }

        // cout << "len:\t" << xor_l.size() << " " << xor_r.size() << endl;
        
        int minlen = MAXN+1, left = 0, right = 0;
        for(int il = 0; il < xor_l.size(); ++il) {
            int jleft, jright, jmid;
            jleft = 0, jright = xor_r.size();
            // jright = min(jright, r-l+1-il);
            jmid = (jleft + jright) / 2;
            while (jright - jleft > 1) {
                if ((xor_l[il] ^ xor_r[jmid]) == xor_l[il] + xor_r[jmid]) {
                    jleft = jmid;
                } else {
                    jright = jmid;
                }
                jmid = (jleft + jright) / 2;
            }
            int tmplen = B[r-jmid] - B[l+il] + 1;
            if (tmplen < minlen) {
                minlen = tmplen;
                left = il;
                right = jmid;
            }
        }

        // cout << minlen << endl;
        int resl = B[l+left]+1, resr = B[r-right]+1;
        if (resl > resr) {
            resr = resl;
        }

        cout << resl << " " << resr << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int T;
    cin >> T;
    while(T--) {
        run();
    }
}