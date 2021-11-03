/*
Title   : BOJ_23322 [초콜릿 뺏어 먹기]
Author  : Hoseok Lee
Date    : 2021/11/3
https://github.com/hoshogi
https://www.acmicpc.net/problem/23322
*/

#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k, max_choco = 0, min_day = 0;
    vector<int> v;
    
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int num;
        
        cin >> num;
        v.push_back(num);
    }
    
    for (auto it : v) {
        if (v[0] < it) {
            max_choco += it - v[0];
            min_day++;
        }
    }
    
    cout << max_choco << ' ' << min_day << '\n';
    return 0;
}
