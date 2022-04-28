/*
Title   : BOJ_4963 [섬의 개수]
Author  : Hoseok Lee
Date    : 2022/04/28
https://www.acmicpc.net/problem/4963
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int w, h;
int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1,};
int dy[8] = {-1, -1, 0, 1, 1, 1, 0, -1};

void dfs(int board[50][50], int row, int col) {
    board[row][col] = 0;
    for (int i = 0; i < 8; i++) {
        int tempRow = row + dy[i];
        int tempCol = col + dx[i];
        
        if (tempRow >= 0 && tempRow < h && tempCol >= 0 && tempCol < w && board[tempRow][tempCol] == 1)
            dfs(board, tempRow, tempCol);
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int board[50][50] = {0, };
    
    while (true) {
        int result = 0;
        
        cin >> w >> h;
        if (w == 0 && h == 0)
            break;
        
        for (int i = 0; i < h; i++)
            for (int j = 0; j < w; j++)
                cin >> board[i][j];
        
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if (board[i][j] == 1) {
                    result++;
                    dfs(board, i, j);
                }
            }
        }
        cout << result << '\n';
    }
    return 0;
}
