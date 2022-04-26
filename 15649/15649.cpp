/*
Title   : BOJ_15649 [N과 M (1)]
Author  : Hoseok Lee
Date    : 2022/04/26
https://www.acmicpc.net/problem/15649
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
    
    int n, m;
    cin >> n >> m;
    
    vector<int> v;
    for (int i = 1; i <= n; i++)
        v.push_back(i);
    
    do {
        for (int i = 0; i < m; i++)
            cout << v[i] << ' ';
        cout << '\n';
        reverse(v.begin() + m, v.end());
    } while(next_permutation(v.begin(), v.end()));
    return 0;
}
