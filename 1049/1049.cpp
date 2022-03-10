/*
Title   : BOJ_1049 [기타줄]
Author  : Hoseok Lee
Date    : 2022/03/10
https://www.acmicpc.net/problem/1049
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int , int> prev, pair<int, int> next) {
    return prev.second < next.second;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m, result;
    vector<pair<int, int> > v;
    
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int set, one;
        
        cin >> set >> one;
        v.push_back({set, one});
    }
    sort(v.begin(), v.end());
    int minGroup = v[0].first;
    sort(v.begin(), v.end(), compare);
    int minOne = v[0].second;

    result = minOne * n;
    if (n % 6 == 0) {
        result = min(result, (n / 6) * minGroup);
    }
    else {
        result = min(result, (n / 6) * minGroup + (n % 6) * minOne);
        result = min(result, (n / 6 + 1) * minGroup);
    }
    
    cout << result << '\n';
    return 0;
}
