/*
Title   : BOJ_9020 [골드바흐의 추측]
Author  : Hoseok Lee
Date    : 2022/08/04
https://www.acmicpc.net/problem/9020
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> prev, pair<int, int> next) {
    if (abs(prev.first - prev.second) == abs(next.first - next.second))
        return prev.first < next.first;
    return abs(prev.first - prev.second) < abs(next.first - next.second);
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    bool check[10001] = {true, true, false, };
    vector<int> v;
    
    for (int i = 2; i <= 10000; i++) {
        if (!check[i]) {
            v.push_back(i);
            for (int j = 2 * i; j <= 10000; j += i)
                check[j] = true;
        }
    }
    
    cin >> t;
    while (t--) {
        int n;
        vector<pair<int, int> > nums;
        
        cin >> n;
        for (auto it : v) {
            if (it > n)
                break;
            if (binary_search(v.begin(), v.end(), n - it))
                nums.push_back({it, n - it});
        }
        
        sort(nums.begin(), nums.end(), compare);
        cout << nums[0].first << ' ' <<  nums[0].second << '\n';
    }
    return 0;
}
