/*
Title   : BOJ_23559 [밥]
Author  : Hoseok Lee
Date    : 2022/03/15
https://www.acmicpc.net/problem/23559
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> prev, pair<int, int> next) {
    return (prev.first - prev.second) > (next.first - next.second);
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, x, result = 0;
    vector<pair<int, int> > v;
    
    cin >> n >> x;
    v.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
        result += v[i].second;
        x -= 1000;
    }
    
    sort(v.begin(), v.end(), compare);
    
    for (int i = 0; i < n; i++) {
        if (v[i].first - v[i].second > 0 && x >= 4000) {
            result += v[i].first - v[i].second;
            x -= 4000;
        }
    }
    cout << result << '\n';
    return 0;
}
