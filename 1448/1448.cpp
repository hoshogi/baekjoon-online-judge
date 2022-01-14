/*
Title   : BOJ_1448 [삼각형 만들기]
Author  : Hoseok Lee
Date    : 2022/01/14
https://www.acmicpc.net/problem/1448
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int CheckTriangle(vector<int> v) {
    for (int i = 0; i < v.size() - 2; i++) {
        if (v[i] < v[i + 1] + v[i + 2])
            return v[i] + v[i + 1] + v[i + 2];
    }
    
    return -1;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    vector<int> v;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        int len;
        
        cin >> len;
        v.push_back(len);
    }
    
    sort(v.begin(), v.end(), greater<>());
    cout << CheckTriangle(v) << '\n';
    return 0;
}
