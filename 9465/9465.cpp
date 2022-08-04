/*
Title   : BOJ_9465 [스티커]
Author  : Hoseok Lee
Date    : 2022/08/05
https://www.acmicpc.net/problem/9465
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    
    cin >> t;
    while (t--) {
        int n, result;
        int score[2][100001];
        int d[3][100001] = {0, };
        
        cin >> n;
        for (int i = 0; i < 2; i++)
            for (int j = 1; j <= n; j++)
                cin >> score[i][j];
        
        for (int i = 1; i <= n; i++) {
            d[0][i] = max(d[1][i - 1], d[2][i - 1]) + score[0][i];
            d[1][i] = max(d[0][i - 1], d[2][i - 1]) + score[1][i];
            d[2][i] = max(d[0][i - 1], d[1][i - 1]);
            d[2][i] = max(d[2][i], d[2][i - 1]);
        }
        
        result = max(d[0][n], d[1][n]);
        result = max(result, d[2][n]);
        
        cout << result << '\n';
    }
    return 0;
}
