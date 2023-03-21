/*
Title   : BOJ_1261 [알고스팟]
Author  : Hoseok Lee
Date    : 2023/03/21
https://www.acmicpc.net/problem/1261
https://github.com/hoshogi
*/

#include <iostream>
#include <queue>
#include <string>
#define INF 1e9
using namespace std;

int row, col;
int board[100][100];
int result[100][100];
int dr[4] = {-1, 0, 1, 0};
int dc[4] = {0, 1, 0, -1};

void bfs() {
    queue<pair<pair<int, int>, int>> q;
    result[0][0] = 0;
    q.push({{0, 0}, 0});
    
    while (!q.empty()) {
        int r = q.front().first.first;
        int c = q.front().first.second;
        int count = min(q.front().second, result[r][c]);
        q.pop();
        
        for (int i = 0; i < 4; i++) {
            int tempR = r + dr[i];
            int tempC = c + dc[i];
            int tempCount = count;
            
            if (tempR < 0 || tempR >= row || tempC < 0 || tempC >= col)
                continue;
            if (board[tempR][tempC] == 1)
                tempCount++;
            if (tempCount < result[tempR][tempC]) {
                result[tempR][tempC] = tempCount;
                q.push({{tempR, tempC}, tempCount});
            }
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> col >> row;
    for (int i = 0; i < row; i++) {
        string str;
        
        cin >> str;
        for (int j = 0; j < str.length(); j++)
            board[i][j] = str[j] - '0';
    }
    for (int i = 0; i < row; i++)
        fill_n(result[i], col, INF);
    
    bfs();
    
    cout << result[row - 1][col - 1] << '\n';
    return 0;
}
