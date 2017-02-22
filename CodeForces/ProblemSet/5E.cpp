#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <cstring>
#include <iterator>
#define REP(i, n) for(long long i = 0; i < n; ++i)
#define RANGE(i, x, n) for(long long i = x; i < n; ++i)
using namespace std;

int go_right(int x, int &n, int &maxh, int &summ, vector<int> &right, vector<int> &same, vector<int> &height)
{
    if(right[x] != -1) {
        return right[x];
    }
    if(height[x] == maxh) {
        right[x] = x;
        same[x] = summ - 1;
        return x;
    }
    int y = (x + 1) % n;
    if(height[x] < height[y]) {
        right[x] = y;
        return y;
    }else if(height[x] == height[y]) {
        right[x] = go_right(y, n, maxh, summ, right, same, height);
        same[x] += same[y] + 1;
        return right[x];
    }else {
        y = go_right(y, n, maxh, summ, right, same, height);
        while(height[x] > height[y]) {
            y = go_right(y, n, maxh, summ, right, same, height);
        }
        if(height[x] == height[y]) {
            right[x] = go_right(y, n, maxh, summ, right, same, height);
            same[x] += same[y] + 1;
            return right[x];
        }else {
            right[x] = y;
            return y;
        }
    }
}

int go_left(int x, int &n, int &maxh, int &summ, vector<int> &left, vector<int> &height)
{
    if(left[x] != -1) {
        return left[x];
    }
    if(height[x] == maxh) {
        left[x] = x;
        return x;
    }
    int y = (x - 1 + n) % n;
    if(height[x] < height[y]) {
        left[x] = y;
        return y;
    }else if(height[x] == height[y]) {
        left[x] = go_left(y, n, maxh, summ, left, height);
        return left[x];
    }else {
        y = go_left(y, n, maxh, summ, left, height);
        while(height[x] > height[y]) {
            y = go_left(y, n, maxh, summ, left, height);
        }
        if(height[x] == height[y]) {
            left[x] = go_left(y, n, maxh, summ, left, height);
            return left[x];
        }else {
            left[x] = y;
            return y;
        }
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    int n;
    int maxh = -1, summ = 0;
    cin >> n;
    vector<int> height(n, 0);
    REP(i, n) {
        cin >> height[i];
        if(height[i] > maxh) {
            maxh = height[i];
            summ = 1;
        }else if(height[i] == maxh) {
            ++summ;
        }
    }
    vector<int> left(n, -1);
    vector<int> right(n, -1);
    vector<int> same(n, 0);
    REP(i, n){
        go_right(i, n, maxh, summ, right, same, height);
        go_left(i, n, maxh, summ, left, height);
    }

    long long ans = 0, samenum = 0;
    REP(i, n) {
        if(left[i] == i) {
            samenum += same[i];
            continue;
        }
        if(left[i] == right[i]) {
            ++ans;
            ans += same[i];
        }else {
            ans += 2;
            ans += same[i];
        }
    }
    ans += samenum / 2;
    cout << ans << endl;
}
