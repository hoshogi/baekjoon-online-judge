/*
Title   : BOJ_2667 [단지번호붙이기]
Author  : Hoseok Lee
Date    : 2022/05/03
https://www.acmicpc.net/problem/2667
https://github.com/hoshogi
*/

#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int n;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

int bfs(int board[25][25], int row, int col, bool visited[25][25]) {
    int count = 1;
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
                if (board[tempRow][tempCol] == 1 && !visited[tempRow][tempCol]) {
                    visited[tempRow][tempCol] = true;
                    q.push({tempRow, tempCol});
                    count++;
                }
            }
        }
    }
    return count;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int board[25][25] = {0, };
    bool visited[25][25] = {false, };
    vector<int> result;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        string str;
        
        cin >> str;
        for (int j = 0; j < str.length(); j++)
            board[i][j] = str[j] - '0';
    }
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (board[i][j] == 1 && !visited[i][j])
                result.push_back(bfs(board, i, j, visited));
    
    sort(result.begin(), result.end());
    cout << result.size() << '\n';
    for (auto it : result)
        cout << it << '\n';
    return 0;
}
