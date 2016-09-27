#include <bits/stdc++.h>

using namespace std;

using Long = unsigned long long;

const Long MAX = 100000;

bool global_visited[MAX + 1];

inline Long beg(Long &n, Long &i)
{
    if (2 * i > n) return 2;
    else
        return (n % i) ? n / i : n / i + 1; 
}

Long check(Long &n, Long &low)
{
    Long temp = low, max = 0;
    for (; temp <= n; ++max)
        temp *= low;
    Long res = 0;
    if (!global_visited[low] && max > 1)
    {
        res += (n - 1);
        vector<bool> visited(max * n + 1, false);
        Long temp = low * low;
        for (Long i = 2; i <= max; ++i)
        {
            global_visited[temp] = true;
            //v[temp] = n / low + 1;
            for (Long j = n / i + 1 ; j <= n; ++j)
            {
                if(!visited[i * j])
                {
                    ++res;
                    visited[i * j] = true;
                }
            }
            temp *= low;
        }
    }
    else if (!global_visited[low])
    {
        res += (n - 1);
    }
    //cout << "low: " << low << " " << "res: " << res << endl;
    return res;
}

int main()
{
    Long n;
    cin >> n;
    Long res = 0;
    for (Long i = 2; i <= n; ++i)
    {
        res += check(n, i);
    }
    cout << res << endl;
}
