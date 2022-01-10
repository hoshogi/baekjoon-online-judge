/*
Title   : BOJ_1946 [신입 사원]
Author  : Hoseok Lee
Date    : 2022/01/10
https://www.acmicpc.net/problem/1946
https://github.com/hoshogi
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    
    cin >> t;
    while (t--) {
        int n, max_first, max_second;
        int count = 0;
        vector< pair<int, int>> v;
        
        cin >> n;
        for (int i = 0; i < n; i++) {
            int first, second;
            
            cin >> first >> second;
            v.push_back({first, second});
        }
        
        sort(v.begin(), v.end());
        max_second = v[0].second;
        
        for (auto it : v) {
            if (it.second <= max_second) {
                max_second = it.second;
                count++;
            }
        }
        
        cout << count << '\n';
    }
    
    return 0;
}
