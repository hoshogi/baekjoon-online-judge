/*
Title   : BOJ_14716 [현수막]
Author  : Hoseok Lee
Date    : 2022/10/18
https://www.acmicpc.net/problem/14716
https://github.com/hoshogi
*/

#include <iostream>
#include <queue>
using namespace std;

int n, m;
int graph[250][250];
int dr[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dc[8] = {0, 1, 1, 1, 0, -1, -1, -1};
bool visited[250][250];

void bfs(int r, int c) {
    queue<pair<int, int>> q;
    
    visited[r][c] = true;
    q.push({r, c});
    
    while (!q.empty()) {
        int row = q.front().first;
        int col = q.front().second;
        q.pop();
        
        for (int i = 0; i < 8; i++) {
            int tempR = row + dr[i];
            int tempC = col + dc[i];
            
            if (tempR < 0 || tempR >= n || tempC < 0 || tempC >= m)
                continue;
            if (visited[tempR][tempC] || !graph[tempR][tempC])
                continue;
            visited[tempR][tempC] = true;
            q.push({tempR, tempC});
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int answer = 0;
    
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> graph[i][j];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!visited[i][j] && graph[i][j]) {
                bfs(i, j);
                answer++;
            }
        }
    }
    
    cout << answer << '\n';
    return 0;
}
