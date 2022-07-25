/*
Title   : BOJ_2193 [이친수]
Author  : Hoseok Lee
Date    : 2022/07/25
https://www.acmicpc.net/problem/2193
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n;
    long long d[91][2] = { {0, 0},
                     {0, 1} };
    
    cin >> n;
    for (int i = 2; i <= n; i++) {
        d[i][0] = d[i - 1][0] + d[i - 1][1];
        d[i][1] = d[i - 1][0];
    }
    
    cout << d[n][0] + d[n][1] << '\n';
    return 0;
}
