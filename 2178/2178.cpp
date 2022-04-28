/*
Title   : BOJ_2178 [미로 탐색]
Author  : Hoseok Lee
Date    : 2022/04/28
https://www.acmicpc.net/problem/2178
https://github.com/hoshogi
*/

#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int n, m;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

int bfs(int board[100][100], int row, int col) {
    queue<tuple<int, int, int> > q;
    board[0][0] = 0;
    q.push({0, 0, 1});
    int distance = 1;
    
    while (!q.empty()) {
        int nowRow = get<0>(q.front());
        int nowCol = get<1>(q.front());
        distance = get<2>(q.front());
        q.pop();
        
        for (int i = 0; i < 4; i++) {
            int tempRow = nowRow + dy[i];
            int tempCol = nowCol + dx[i];
            
            if (tempRow >= 0 && tempRow < n && tempCol >= 0 && tempCol < m && board[tempRow][tempCol] == 1) {
                board[tempRow][tempCol] = 0;
                q.push({tempRow, tempCol, distance + 1});
            }
            
            if (tempRow == n - 1 && tempCol == m - 1)
                return distance + 1;
        }
    }
    return distance;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int result = 0;
    int board[100][100] = {0, };
    
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string str;
        
        cin >> str;
        for (int j = 0; j < m; j++) {
            board[i][j] = str[j] - '0';
        }
    }
    
    result = bfs(board, 0, 0);
    cout << result << '\n';
    return 0;
}
