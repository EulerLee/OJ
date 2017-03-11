#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <set>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define RANGE(i, x, n) for(int i = x; i < n; ++i)
using namespace std;

struct SegTree {
    int high;
    int low;
    int L;
    int R;
    SegTree *lc, *rc;
};

struct Tint {
    int h;
    int l;
};

void init(SegTree* &T, int L, int R)
{
    T = new SegTree;
    T->L = L;
    T->R = R;
    if(L == R) {
        cin >> T->high;
        T->low = T->high;
    }else {
        int mid = (L + R) / 2;
        init(T->lc, L, mid);
        init(T->rc, mid + 1, R);
    }
}

void preprint(SegTree *T)
{
    if(T) {
        if(T->L == T->R) {
            cout << T->high << endl;
        }
        preprint(T->lc);
        preprint(T->rc);
    }
}

void getvalue(SegTree* &T, int &low, int &high)
{
    if(T->L == T->R) {
        low = T->low;
        high = T->high;
        return;
    }else {
        int ll, lh, rl, rh;
        getvalue(T->lc, ll, lh);
        getvalue(T->rc, rl, rh);
        low = min(ll, rl);
        high = max(lh, rh);
        T->low = low;
        T->high = high;
    }
}

void gethl(SegTree *T, int L, int R, int &high, int &low)
{
    if(L == T->L && R == T->R) {
        high = T->high;
        low = T->low;
        return;
    }else{
        int mid = (T->L + T->R) / 2;
        if(R <= mid) {
            gethl(T->lc, L, R, high, low);
            return;
        }else if(L >= mid + 1) {
            gethl(T->rc, L, R, high, low);
        }else {
            int lh, ll, rh, rl;
            gethl(T->lc, L, mid, lh, ll);
            gethl(T->rc, mid + 1, R, rh, rl);
            high = max(lh, rh);
            low = min(ll, rl);
            return;
        }
    }
}

int find(SegTree *T, int K, int L, int n)
{
    int h = n + 1, l = L;
    int mid = (h + l) / 2;
    int high, low;
    gethl(T, L, mid, high, low);
    while(l != mid) {
        if(high - low <= K) {
            l = mid;
        }else {
            h = mid;
        }
        mid = (l + h) / 2;
        gethl(T, L, mid, high, low);
    }
    return mid;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> h(n + 1, 0);
    SegTree *T;
    init(T, 1, n);
    //preprint(T);
    int low, high;
    int L = 1, R = n;
    getvalue(T, low, high);

    int maxn = -1;
    RANGE(x, 1, n + 1) {
        h[x] = find(T, k, x, n);
        if(h[x] - x + 1> maxn) {
            maxn = h[x] - x + 1;
        }
    }
    cout << maxn << ' ';
    vector<int> ans;
    RANGE(x, 1, n + 1) {
        if(h[x] - x + 1 == maxn) {
            ans.push_back(x);
        }
    }
    cout << ans.size() << endl;
    for(auto x: ans) {
        cout << x << ' ' << h[x] << endl;
    }
}
