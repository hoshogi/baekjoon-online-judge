/*
Title   : BOJ_15688 [수 정렬하기 5]
Author  : Hoseok Lee
Date    : 2022/03/15
https://www.acmicpc.net/problem/15688
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    for (auto it : v)
        cout << it << '\n';
    return 0;
}
