/*
Title   : BOJ_15650 [N과 M (2)]
Author  : Hoseok Lee
Date    : 2022/04/26
https://www.acmicpc.net/problem/15650
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
    vector<bool> v(n);
    fill(v.end() - (n - m), v.end(), true);
    
    do {
        for (int i = 0; i < n; i++)
            if (!v[i])
                cout << i + 1 << ' ';
        cout << '\n';
    } while (next_permutation(v.begin(), v.end()));
    return 0;
}
