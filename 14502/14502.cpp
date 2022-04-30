/*
Title   : BOJ_14502 [연구소]
Author  : Hoseok Lee
Date    : 2022/04/30
https://www.acmicpc.net/problem/14502
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int n, m;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

void bfs (int board[8][8], int row, int col) {
    queue<pair<int, int> > q;
    q.push({row, col});
    
    while (!q.empty()) {
        int nowRow = q.front().first;
        int nowCol = q.front().second;
        q.pop();
        
        for (int i = 0; i < 4; i++) {
            int tempRow = nowRow + dy[i];
            int tempCol = nowCol + dx[i];
            
            if (tempRow >= 0 && tempRow < n && tempCol >= 0 && tempCol < m && board[tempRow][tempCol] == 0) {
                board[tempRow][tempCol] = 2;
                q.push({tempRow, tempCol});
            }
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int result = 0;
    int board[8][8] = {0, };
    vector<pair<int, int> > v;
    
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int num;
            
            cin >> num;
            board[i][j] = num;
            if (num == 0)
                v.push_back({i, j});
        }
    }
    
    vector<bool> check(v.size());
    fill(check.end() - 3, check.end(), true);
    
    do {
        int count = 0;
        int temp[8][8] = {0, };
        copy(&board[0][0], &board[0][0] + 64, &temp[0][0]);
        
        for (int i = 0; i < v.size(); i++)
            if (check[i])
                temp[v[i].first][v[i].second] = 1;
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (temp[i][j] == 2)
                    bfs(temp, i, j);
            }
        }
        
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (temp[i][j] == 0)
                    count++;
        
        result = max(result, count);
    } while (next_permutation(check.begin(), check.end()));
    
    cout << result << '\n';
    return 0;
}
