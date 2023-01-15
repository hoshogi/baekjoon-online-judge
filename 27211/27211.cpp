/*
Title   : BOJ_27211 [도넛 행성]
Author  : Hoseok Lee
Date    : 2023/01/15
https://www.acmicpc.net/problem/27211
https://github.com/hoshogi
*/

#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int n, m;
int dr[4] = {-1, 0, 1, 0};
int dc[4] = {0, 1, 0, -1};
bool graph[1001][1001];

void bfs(int r, int c) {
    queue<pair<int, int>> q;
    graph[r][c] = true;
    q.push({r, c});
    
    while (!q.empty()) {
        int row = q.front().first;
        int col = q.front().second;
        q.pop();
        
        for (int i = 0; i < 4; i++) {
            int tempR = row + dr[i];
            int tempC = col + dc[i];
            
            if (tempR == n)
                tempR = 0;
            if (tempR == -1)
                tempR = n - 1;
            if (tempC == m)
                tempC = 0;
            if (tempC == -1)
                tempC = m - 1;
            
            if (!graph[tempR][tempC]) {
                graph[tempR][tempC] = true;
                q.push({tempR, tempC});
            }
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
            if (!graph[i][j]) {
                answer++;
                bfs(i, j);
            }
        }
    }
    cout << answer << '\n';
    return 0;
}
