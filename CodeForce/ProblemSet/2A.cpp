#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <set>
using namespace std;

int main()
{
    map<string, int> finals;
    vector<string> names;
    vector<int> scores;
    string name;
    int score;
    int n;
    cin >> n;
    while(n--){
        cin >> name >> score;
        names.push_back(name);
        scores.push_back(score);
        finals[name] += score;
    }
    int max = -1;
    bool flag = false;
    string winner;
    set<string> winners;
    for(auto x: finals) {
        if(x.second > max) {
            winner = x.first;
            max = x.second;
            flag = false;
            winners.clear();
            winners.insert(x.first);
        }else if(x.second == max) {
            winners.insert(x.first);
            flag = true;
        }
    }
    if(!flag) {
        cout << winner << endl;
    }else {
        finals.clear();
        for(int i = 0; ; ++i) {
            finals[names[i]] += scores[i];
            if(finals[names[i]] >= max && winners.find(names[i]) != winners.end()) {
                cout << names[i] << endl;
                break;
            }
        }
    }
}
