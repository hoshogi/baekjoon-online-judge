/*
Title   : BOJ_5800 [성적 통계]
Author  : Hoseok Lee
Date    : 2021/10/03
https://github.com/hoshogi
https://www.acmicpc.net/problem/5800
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int k;
    vector<int> v;
    
    cin >> k;
    for (int i = 0; i < k; i++) {
        int n;
        
        cin >> n;
        while (n--) {
            int score;
            
            cin >> score;
            v.push_back(score);
        }
        sort(v.begin(), v.end());
        
        int temp = v[0];
        int max_gap = 0;
        
        for (int j = 1; j < v.size(); j++) {
            max_gap = max(max_gap, v[j] - temp);
            temp = v[j];
        }
        cout << "Class " << i + 1 << '\n';
        cout << "Max " << v.back() << ", Min " << v.front() << ", Largest gap " << max_gap << '\n';
        v.clear();
    }
    return 0;
}
