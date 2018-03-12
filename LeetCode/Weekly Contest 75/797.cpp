#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

bool reach(vector<vector<int>> &graph, vector<int> &path, int node, vector<vector<int>> &ans)
{
  int n = graph.size();
  bool flag = false;
  if(node == n-1) {
    ans.push_back(path);
    return true;
  }else {
    for(int i = 0; i < graph[node].size(); ++i) {
      vector<int> tmp = path;
      path.push_back(graph[node][i]);
      if(reach(graph, path, graph[node][i], ans)) {
        flag = true;
      }
      path = tmp;
    }
  }
  return flag;
}

vector<vector<int>> solve(vector<vector<int>> &graph)
{
  vector<vector<int>> ans;
  int cur_node = 0;
  int n = graph.size();
  vector<int> path = {0};
  reach(graph, path, 0, ans);
  return ans;
}

int main()
{
  vector<vector<int>> graph = {{1, 2}, {3}, {3}, {}};
  vector<vector<int>> ans = solve(graph);
  for(auto x: ans) {
    for(auto y: x) {
      cout << y << " ";
    }
    cout << endl;
  }
}
