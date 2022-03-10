/*
Title   : BOJ_1449 [수리공 항승]
Author  : Hoseok Lee
Date    : 2022/03/10
https://www.acmicpc.net/problem/1449
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, l, result = 0;
    
    cin >> n >> l;
    vector<int> v(n);
    
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    
    int next = 0;
    for (int i = 0; i < n; i++) {
        if (next < v[i]) {
            result++;
            next = v[i] + l - 1;
        }
    }
    
    cout << result << '\n';
    return 0;
}
