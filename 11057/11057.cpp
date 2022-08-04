/*
Title   : BOJ_11057 [오르막 수]
Author  : Hoseok Lee
Date    : 2022/08/05
https://www.acmicpc.net/problem/11057
https://github.com/hoshogi
*/

#include <iostream>
#define MOD 10007
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n, result = 0;
    int d[1001][10] = {0, };
    
    cin >> n;
    for (int i = 0; i < 10; i++)
        d[1][i] = 1;
    
    for (int i = 2; i <= n; i++)
        for (int j = 0; j < 10; j++)
            for (int k = 0; k <= j; k++) {
                d[i][j] += d[i - 1][k];
                d[i][j] %= MOD;
            }
    
    for (int i = 0; i < 10; i++)
        result += d[n][i];
    result %= MOD;
    
    cout << result << '\n';
    return 0;
}
