/*
Title   : BOJ_1309 [동물원]
Author  : Hoseok Lee
Date    : 2022/08/05
https://www.acmicpc.net/problem/1309
https://github.com/hoshogi
*/

#include <iostream>
#define MOD 9901
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n;
    int d[100001][3] = { {0, 0, 0},
                         {1, 1, 1}, };

    
    cin >> n;
    for (int i = 2; i <= n; i++) {
        d[i][0] = (d[i - 1][0] + d[i - 1][1] + d[i - 1][2]) % MOD;
        d[i][1] = (d[i - 1][0] + d[i - 1][2]) % MOD;
        d[i][2] = (d[i - 1][0] + d[i - 1][1]) % MOD;
    }
    
    cout << (d[n][0] + d[n][1] + d[n][2]) % MOD << '\n';
    return 0;
}
