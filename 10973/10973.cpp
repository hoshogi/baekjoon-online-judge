/*
Title   : BOJ_10973 [이전 순열]
Author  : Hoseok Lee
Date    : 2022/09/24
https://www.acmicpc.net/problem/10973
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
    
    int n;
    vector<int> v;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        
        cin >> num;
        v.push_back(num);
    }
    
    if (prev_permutation(v.begin(), v.end())) {
        for (auto it : v)
            cout << it << ' ';
    }
    else
        cout << -1 << '\n';
    return 0;
}
