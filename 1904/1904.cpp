/*
Title   : BOJ_1904 [01타일]
Author  : Hoseok Lee
Date    : 2022/09/01
https://www.acmicpc.net/problem/1904
https://github.com/hoshogi
*/

#include <iostream>
#define MOD 15746
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n;
    int d[1000001] = {1, 1, 2, };
    
    cin >> n;
    for (int i = 3; i <= n; i++) {
        d[i] = d[i - 1] + d[i - 2];
        d[i] %= MOD;
    }
    
    cout << d[n] << '\n';
    return 0;
}
