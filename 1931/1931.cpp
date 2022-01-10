/*
Title   : BOJ_1931 [회의실 배정]
Author  : Hoseok Lee
Date    : 2022/01/10
https://www.acmicpc.net/problem/1931
https://github.com/hoshogi
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2) {
    if ((p1.second - p1.first) == (p2.second - p1.first))
        return p1.first < p2.first;
    return (p1.second - p1.first) < (p2.second - p1.first);
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, start, end;
    int count = 0;
    vector< pair<int, int>> v;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> start >> end;
        v.push_back({start, end});
    }
    
    sort(v.begin(), v.end(), compare);
    
    end = 0;
    for (auto it : v) {
        if (it.first >= end) {
            end = it.second;
            count++;
        }
    }
    
    cout << count << '\n';
    return 0;
}
