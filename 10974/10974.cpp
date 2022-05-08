/*
Title   : BOJ_10974 [모든 순열]
Author  : Hoseok Lee
Date    : 2022/05/06
https://www.acmicpc.net/problem/10974
https://github.com/hoshogi
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    vector<int> v;
    
    cin >> n;
    for (int i = 1; i <= n; i++)
        v.push_back(i);
    
    do {
        for (auto it : v)
            cout << it << ' ';
        cout << '\n';
    } while(next_permutation(v.begin(), v.end()));
    return 0;
}
