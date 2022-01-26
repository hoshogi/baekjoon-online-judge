/*
Title   : BOJ_2437 [저울]
Author  : Hoseok Lee
Date    : 2022/01/25
https://www.acmicpc.net/problem/2437
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, max_weight;
    
    cin >> n;
    vector<int> v(n);
    
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    
    if (v[0] == 1) {
        max_weight = 1;
    } else {
        cout << 1 << '\n';
        exit(0);
    }
    
    for (int i = 1; i < n; i++) {
        max_weight += v[i];
        if (i != n - 1) {
            if (v[i + 1] > max_weight + 1) {
                break;
            }
        }
    }
    cout << max_weight + 1 << '\n';
    return 0;
}
