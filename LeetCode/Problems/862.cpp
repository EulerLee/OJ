#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int shortestSubarray(vector<int>& A, int K) {
        if(K <= 0) {
            for(auto x: A) {
                if(x >= 0) return 1;
            }
            return -1;
        }
        // K > 0
        const int INF = 0x3f3f3f3f;
        int ans = INF;
        int len = 0;
        int n = A.size();
        int presum = 0;
        deque<pair<int, int>> Q;
        for(int i = 0; i < n; ++i) {
            presum += A[i];
            ++len;
            if(presum <= 0) {
                presum = 0;
                len = 0;
                Q.clear();
                continue;
            }
            if(A[i] > 0) {
                Q.emplace_back(A[i], 1);
            }else {
                int tmp = A[i];
                int l = 1;
                while(tmp <= 0) {
                    tmp += (*Q.rbegin()).first;
                    l += (*Q.rbegin()).second;
                    Q.pop_back();
                }
                Q.emplace_back(tmp, l);
            }
            if(presum >= K) {
                while(presum >= K) {
                    ans = min(ans, len);
                    auto e = *Q.begin();
                    presum -= e.first;
                    len -= e.second;
                    Q.pop_front();
                }
            }
        }
        return ans == INF? -1 : ans;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, K;
    cin >> n >> K;
    vector<int> A(n, 0);
    for(int i = 0; i < n; ++i) {
        cin >> A[i];
    }
    Solution S;
    cout << S.shortestSubarray(A, K) << endl;
}
