/*
Title   : BOJ_3273 [두 수의 합]
Author  : Hoseok Lee
Date    : 2022/02/21
https://www.acmicpc.net/problem/3273
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, x, count = 0;
    vector<int> v;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        
        cin >> num;
        v.push_back(num);
    }
    cin >> x;
    
    sort(v.begin(), v.end());
    for (auto it : v) {
        if (it >= x)
            continue;
        int num = x - it;
        if (binary_search(v.begin(), v.end(), num))
            count++;
    }
    
    cout << count / 2 << '\n';
    return 0;
}
