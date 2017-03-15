#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define RANGE(i, x, n) for(int i = x; i < n; ++i)
using namespace std;

struct Block {
    int tag;
    int sta;
    int size;
    bool operator <(const Block &r) const {
        return sta < r.sta;
    }
};

void alloc(vector<Block> &mems, int &tag, int size, int m)
{
    Block bt;
    bt.size = size;
    int sta = 1;
    int pos = 0;
    bool flag = false;
    REP(i, mems.size()) {
        if(sta + size - 1 < mems[i].sta) { // able to alloc
            bt.sta = sta;
            bt.tag = tag++;
            pos = i;
            flag = true;
            break;
        }else { // unable to alloc
            sta = mems[i].sta + mems[i].size;
        }
    }
    if(flag) {
        mems.insert(mems.begin() + pos, bt);
        cout << tag - 1 << endl;
        return;
    }
    if(sta + size - 1 <= m) {
        cout << tag << endl;
        bt.sta = sta;
        bt.tag = tag++;
        mems.insert(mems.end(), bt);
    }else {
        cout << "NULL" << endl;
    }
}

void erase(vector<Block> &mems, int tag)
{
    int pos = -1;
    REP(i, mems.size()) {
        //cout << mems[i].tag << ' ' << tag << endl;
        if(mems[i].tag == tag) {
            pos = i;
            break;
        }
    }
    if(pos != -1) {
        mems.erase(mems.begin() + pos);
    }else {
        cout << "ILLEGAL_ERASE_ARGUMENT" << endl;
    }
}

void defragment(vector<Block> &mems)
{
    int sta = 1;
    REP(i, mems.size()) {
        mems[i].sta = sta;
        sta += mems[i].size;
    }
}

int main()
{
    int t, m;
    cin >> t >> m;
    vector<Block> mems;
    string ins;
    int tag = 1;
    while(t--) {
        cin >> ins;
        if(ins == "alloc") {
            int size;
            cin >> size;
            alloc(mems, tag, size, m);
        }else if(ins == "erase") {
            int pos;
            cin >> pos;
            erase(mems, pos);
        }else {
            defragment(mems);
        }
    }
}
