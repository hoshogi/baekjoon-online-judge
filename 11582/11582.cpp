/*
Title   : BOJ_11582 [치킨 TOP N]
Author  : Hoseok Lee
Date    : 2022/01/24
https://www.acmicpc.net/problem/11582
https://github.com/hoshogi
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k;
    vector<int> v;
    
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        
        cin >> num;
        v.push_back(num);
    }
    cin >> k;
    
    int numGroup = n / k;
    
    for (int i = 0; i < n; i += numGroup) {
        sort(v.begin() + i, v.begin() + i + numGroup);
    }
    
    for (auto it : v) {
        cout << it << ' ';
    }
    return 0;
}
