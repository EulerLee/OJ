#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define FOR(i, x, n) for(int i = x; i < n; ++i)
using namespace std;

const int MAX = 1e6;
std::vector<bool> vis(MAX + 1, false);
map<int, int> primes;

bool C(int x)
{
  string s = to_string(x);
  FOR(i, 0, s.size()){
    s = s.substr(1, s.size()) + s[0];
    //method 1:
    //char *end;
    //if(primes[static_cast<int>(strtol(s.c_str(), &end, 10))] != 1){

    //method 2:
    //if(primes[static_cast<int>(atoi(s.c_str()))] != 1){

    //method 3:
    if(primes[static_cast<int>(stoi(s))] != 1){
      return false;
    }
  }
  return true;
}

int main()
{
  int N;
  cin >> N;
  FOR(i, 2, MAX + 1){
    if(!vis[i]){
      primes[i] = 1;
      for(int k = 1; k * i <= MAX; ++k){
        vis[k * i] = true;
      }
    }
  }
  long long ans = 0;
  FOR(x, 2, N + 1){
    if(primes[x] == 1){
      if(C(x)){
        ans += x;
      }
    }
  }
  cout << ans << endl;
}
