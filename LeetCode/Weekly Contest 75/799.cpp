#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

long long quick_pow(long long x, long long n)
{
  long long ans = 1;
  while(n) {
    if((n&1)) {
      ans *= x;
    }
    x *= x;
    n >>= 1;
  }
  return ans;
}

double dp[100][100];

double dpsolve(int x, int y)
{
  
}

double solve(int n, int x, int y)
{

}

int main()
{
  int n, x, y;
  cin >> n >> x >> y;
  //cout << quick_pow(2, n) << endl;
  cout << solve(n, x, y) << endl;
}
