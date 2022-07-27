/*
Title   : BOJ_2225 [합분해]
Author  : Hoseok Lee
Date    : 2022/07/27
https://www.acmicpc.net/problem/2225
https://github.com/hoshogi
*/

#include <iostream>
#define MOD 1000000000
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int d[201][201] = {0, };
    
    int n, k;
    
    cin >> n >> k;
    for (int i = 1; i <= k; i++)
        d[0][i] = 1;
    
    for (int i = 1; i <= n; i++)
        d[i][1] = 1;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 2; j <= k; j++) {
            for (int l = 1; l <= j; l++) {
                d[i][j] += d[i - 1][l];
                d[i][j] %= MOD;
            }
        }
    }
    
    cout << d[n][k] << '\n';
    return 0;
}
