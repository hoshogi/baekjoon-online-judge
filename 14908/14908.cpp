/*
Title   : BOJ_14908 [구두 수선공]
Author  : Hoseok Lee
Date    : 2022/03/15
https://www.acmicpc.net/problem/14908
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(tuple<int, int ,int> prev, tuple<int, int, int> next) {
    if (get<1>(prev) * get<0>(next) == get<1>(next) * get<0>(prev))
        return get<2>(prev) < get<2>(next);
    return get<1>(prev) * get<0>(next) > get<1>(next) * get<0>(prev);
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    vector<tuple<int, int, int> > v;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        int t, s;
        
        cin >> t >> s;
        v.push_back({t, s, i + 1});
    }
    sort(v.begin(), v.end(), compare);
    for (auto it : v)
        cout << get<2>(it) << ' ';
    return 0;
}
