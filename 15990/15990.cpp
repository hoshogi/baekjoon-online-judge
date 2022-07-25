/*
Title   : BOJ_15990 [1, 2, 3 더하기 5]
Author  : Hoseok Lee
Date    : 2022/07/25
https://www.acmicpc.net/problem/15990
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    int d[100001][4] = { {0, 0, 0, 0},
                         {0, 1, 0, 0},
                         {0, 0, 1, 0},
                         {0, 1, 1, 1},
                         {0, 2, 0, 1} };
    
    for (int i = 5; i <= 100000; i++) {
        d[i][1] = (d[i - 1][2] + d[i - 1][3]) % 1000000009;
        d[i][2] = (d[i - 2][1] + d[i - 2][3]) % 1000000009;
        d[i][3] = (d[i - 3][1] + d[i - 3][2]) % 1000000009;
    }
    
    cin >> t;
    while (t--) {
        int n;
        int result = 0;
        
        cin >> n;
        for (int i = 1; i <= 3; i++) {
            result += d[n][i];
            result %= 1000000009;
        }
        
        cout << result << '\n';
    }
    
    return 0;
}
