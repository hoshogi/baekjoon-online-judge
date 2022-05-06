/*
Title   : BOJ_2468 [안전 영역]
Author  : Hoseok Lee
Date    : 2022/05/06
https://www.acmicpc.net/problem/2468
https://github.com/hoshogi
*/

#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int n;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

void bfs(int board[100][100], int row, int col, bool visited[100][100], int height) {
    queue<pair<int, int> > q;
    visited[row][col] = true;
    q.push({row, col});
    
    while (!q.empty()) {
        int nowRow = q.front().first;
        int nowCol = q.front().second;
        q.pop();
        
        for (int i = 0; i < 4; i++) {
            int tempRow = nowRow + dy[i];
            int tempCol = nowCol + dx[i];
            
            if (tempRow >= 0 && tempRow < n && tempCol >= 0 && tempCol < n) {
                if (board[tempRow][tempCol] > height && !visited[tempRow][tempCol]) {
                    visited[tempRow][tempCol] = true;
                    q.push({tempRow, tempCol});
                }
            }
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int min_height = 101, max_height = 0, result = 0;
    int board[100][100] = {0, };
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int height;
            
            cin >> height;
            board[i][j] = height;
            min_height = min(min_height, height);
            max_height = max(max_height, height);
        }
    }
    
    for (int i = min_height - 1; i < max_height; i++) {
        int count = 0;
        bool visited[100][100] = {false, };
        
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if (board[j][k] > i && !visited[j][k]) {
                    count++;
                    bfs(board, j, k, visited, i);
                }
            }
        }
        result = max(result, count);
    }
    
    cout << result << '\n';
    return 0;
}
