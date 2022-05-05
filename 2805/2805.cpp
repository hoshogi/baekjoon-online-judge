/*
Title   : BOJ_2805 [나무 자르기]
Author  : Hoseok Lee
Date    : 2022/05/05
https://www.acmicpc.net/problem/2805
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n, m, result = 0;
    vector<int> v;
    
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int height;
        
        cin >> height;
        v.push_back(height);
    }
    sort(v.begin(), v.end());
    
    int start = 0;
    int end = v.back();
    
    while (start <= end) {
        int mid = (start + end) / 2;
        long long sum = 0;
        
        for (auto it : v) {
            if (it > mid)
                sum += it - mid;
        }
        
        if (sum < m)
            end = mid - 1;
        else {
            start = mid + 1;
            result = mid;
        }
    }
    cout << result << '\n';
    return 0;
}
