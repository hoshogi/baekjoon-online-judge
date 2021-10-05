/*
Title   : BOJ_18870 [좌표 압축]
Author  : Hoseok Lee
Date    : 2021/10/04
https://github.com/hoshogi
https://www.acmicpc.net/problem/18870
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, count = 0;
    set<int> s;
    vector<int> v;
    map<int, int> m;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        
        cin >> num;
        v.push_back(num);
        s.insert(num);
    }
    
    for (auto it = s.begin(); it != s.end(); it++) {
        m.insert({*it, count});
        count++;
    }
    
    for (auto it : v)
        cout << m[it] << ' ';
    return 0;
}
