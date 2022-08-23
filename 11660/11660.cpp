/*
Title   : BOJ_11660 [구간 합 구하기 5]
Author  : Hoseok Lee
Date    : 2022/08/19
https://www.acmicpc.net/problem/11660
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int board[1025][1025];
long long sum[1025][1025];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n, m;
    
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> board[i][j];
    
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            sum[i][j] += sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + board[i][j];
    
    while (m--) {
        int x1, y1, x2, y2;
        
        cin >> x1 >> y1 >> x2 >> y2;
        cout << sum[x2][y2] - sum[x2][y1 - 1] - sum[x1 - 1][y2] + sum[x1 - 1][y1 - 1] << '\n';
    }
    return 0;
}
