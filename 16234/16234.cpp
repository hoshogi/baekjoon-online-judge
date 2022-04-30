/*
Title   : BOJ_16234 [인구 이동]
Author  : Hoseok Lee
Date    : 2022/04/30
https://www.acmicpc.net/problem/16234
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;

int n, l, r;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

int bfs(int board[50][50], int row, int col, bool visited[50][50]) {
    int sum = 0;
    queue<pair<int, int> > q;
    vector<pair<int, int> > v;
    
    visited[row][col] = true;
    q.push({row, col});
    v.push_back({row, col});
    sum += board[row][col];
    while (!q.empty()) {
        int nowRow = q.front().first;
        int nowCol = q.front().second;
        
        q.pop();
        for (int i = 0; i < 4; i++) {
            int tempRow = nowRow + dy[i];
            int tempCol = nowCol + dx[i];
            
            if (tempRow >= 0 && tempRow < n && tempCol >= 0 && tempCol < n && !visited[tempRow][tempCol]) {
                int num = abs(board[nowRow][nowCol] - board[tempRow][tempCol]);
                if (num >= l && num <= r) {
                    sum += board[tempRow][tempCol];
                    q.push({tempRow, tempCol});
                    v.push_back({tempRow, tempCol});
                    visited[tempRow][tempCol] = true;
                }
            }
        }
    }
    int average = sum / v.size();
    for (int i = 0; i < v.size(); i++)
        board[v[i].first][v[i].second] = average;
    return v.size();
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int result = 0;
    int board[50][50] = {0, };
    bool visited[50][50] = {false, };
    
    cin >> n >> l >> r;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> board[i][j];
    
    while (true) {
        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (!visited[i][j]) {
                    int num = bfs(board, i, j, visited);
                    if (num == 1)
                        count++;
                }
            }
        }
        if (count == n * n)
            break;
        for (int i = 0; i < n; i++)
            fill(visited[i], visited[i] + n, false);
        result++;
    }
    cout << result << '\n';
    return 0;
}
