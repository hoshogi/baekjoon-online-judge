/*
Title   : BOJ_25305 [커트라인]
Author  : Hoseok Lee
Date    : 2023/01/13
https://www.acmicpc.net/problem/25305
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
    
    int n, k;
    vector<int> v;
    
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int num;
        
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end(), greater<int>());
    cout << v[k - 1] << '\n';
    return 0;
}
