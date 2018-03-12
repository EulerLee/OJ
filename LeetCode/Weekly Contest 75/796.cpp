#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#define REP(i, n) for(int i = 0;i < n; ++i)
#define RANGE(i, x, n) for(int i = x; i < n; ++i)

bool solve(string A, string B)
{
  string C;
  if(A.size() != B.size()) {
    return false;
  }
  REP(i, A.size()) {
    C = A.substr(i+1, A.size()-1) + A.substr(0, i+1);
    if(C == B) {
      return true;
    }
  }
  return false;
}

int main()
{
  string A, B;
  cin >> A >> B;
  cout << A.substr(0, 1) << endl;
  bool ans = solve(A, B);
  cout << ans << endl;
}
