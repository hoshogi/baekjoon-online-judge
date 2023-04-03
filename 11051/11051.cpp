/*
Title   : BOJ_11051 [이항 계수 2]
Author  : Hoseok Lee
Date    : 2023/04/03
https://www.acmicpc.net/problem/11051
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n, k;
    int d[1001][1001];
    
    cin >> n >> k;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= min(i, k); j++) {
            if (j == 0 || j == i)
                d[i][j] = 1;
            else
                d[i][j] = (d[i - 1][j - 1] + d[i - 1][j]) % 10007;
        }
    }
    cout << d[n][k] << '\n';
    return 0;
}
