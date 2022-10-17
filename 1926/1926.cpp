/*
Title   : BOJ_1926 [그림]
Author  : Hoseok Lee
Date    : 2022/10/17
https://www.acmicpc.net/problem/1926
https://github.com/hoshogi
*/

#include <iostream>
#include <queue>
using namespace std;

int n, m;
int graph[500][500];
bool visited[500][500];
int dr[4] = {-1, 0, 1, 0};
int dc[4] = {0, 1, 0, -1};

int bfs(int r, int c) {
    int count = 1;
    queue<pair<int, int>> q;
    visited[r][c] = true;
    q.push({r, c});
    
    while (!q.empty()) {
        int row = q.front().first;
        int col = q.front().second;
        q.pop();
        
        for (int i = 0; i < 4; i++) {
            int tempR = row + dr[i];
            int tempC = col + dc[i];
            
            if (tempR < 0 || tempR >= n || tempC < 0 || tempC >= m)
                continue;
            
            if (visited[tempR][tempC] || !graph[tempR][tempC])
                continue;
            
            count++;
            visited[tempR][tempC] = true;
            q.push({tempR, tempC});
        }
    }
    return count;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int count = 0, area = 0;
    
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> graph[i][j];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!visited[i][j] && graph[i][j]) {
                count++;
                area = max(area, bfs(i, j));
            }
        }
    }
    cout << count << '\n';
    cout << area << '\n';
    return 0;
}
