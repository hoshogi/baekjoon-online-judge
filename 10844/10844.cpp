/*
Title   : BOJ_10844 [쉬운 계단 수]
Author  : Hoseok Lee
Date    : 2022/07/25
https://www.acmicpc.net/problem/10844
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n;
    int d[101][10] = { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                       {0, 1, 1, 1, 1, 1, 1, 1, 1, 1} };
    
    cin >> n;
    
    for (int i = 2; i <= n; i++) {
        for (int j = 0; j < 10; j++) {
            if (j == 0)
                d[i][j] = d[i - 1][1];
            else if (j == 9) {
                d[i][j] = d[i - 1][8];
            }
            else {
                d[i][j] += d[i - 1][j - 1] + d[i - 1][j + 1];
                d[i][j] %= 1000000000;
            }
        }
    }
    
    int result = 0;
    for (int i = 0; i < 10; i++) {
        result += d[n][i];
        result %= 1000000000;
    }
    
    cout << result << '\n';
    return 0;
}
