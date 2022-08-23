/*
Title   : BOJ_1051 [숫자 정사각형]
Author  : Hoseok Lee
Date    : 2022/08/19
https://www.acmicpc.net/problem/1051
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n, m, result = 0;
    char board[50][50];
    
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string str;
        
        cin >> str;
        for (int j = 0; j < m; j++)
            board[i][j] = str[j];
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int len = 1;
            
            for (int k = i + 1; k < n; k++) {
                if (board[i][j] == board[k][j]) {
                    int index = j + k - i;
                    if (index < m)
                       if (board[i][j] == board[i][index] && board[i][j] == board[k][index])
                           len = max(len, k - i + 1);
                }
            }
    
            result = max(result, len * len);
         }
    }
    cout << result << '\n';
    return 0;
}
