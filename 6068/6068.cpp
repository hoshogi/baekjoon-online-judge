/*
Title   : BOJ_6068 [시간 관리하기]
Author  : Hoseok Lee
Date    : 2022/03/12
https://www.acmicpc.net/problem/6068
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> prev, pair<int, int> next) {
    if (prev.second == next.second)
        return prev.first > next.first;
    return prev.second > next.second;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    vector<pair<int, int> > v;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        int hour, deadline;
        
        cin >> hour >> deadline;
        v.push_back({hour, deadline});
    }
    sort(v.begin(), v.end(), compare);
    
    int time = v[0].second;
    for (int i = 0; i < n; i++) {
        if (v[i].second >= time) {
            time -= v[i].first;
        }
        else {
            time = v[i].second - v[i].first;
        }
        
        if (i == n - 1) {
            if (time < 0)
                cout << -1 << '\n';
            else
                cout << time << '\n';
        }
    }
    return 0;
}
