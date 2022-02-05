/*
Title   : BOJ_11659 [구간 합 구하기 4]
Author  : Hoseok Lee
Date    : 2022/02/05
https://www.acmicpc.net/problem/11659
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m, sum = 0;
    vector<int> v;
    
    cin >> n >> m;
    v.push_back(0);
    for (int i = 0; i < n; i++) {
        int num;
        
        cin >> num;
        sum += num;
        v.push_back(sum);
    }
    
    while (m--) {
        int i, j;
        
        cin >> i >> j;
        cout << v[j] - v[i - 1] << '\n';
    }
    return 0;
}
