/*
Title   : BOJ_3187 [양치기 꿍]
Author  : Hoseok Lee
Date    : 2022/10/28
https://www.acmicpc.net/problem/3187
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;

int sheep, wolf, n, m;
int dr[4] = {-1, 0, 1, 0};
int dc[4] = {0, 1, 0, -1};
char graph[250][250];
bool visited[250][250];

void bfs(int r, int c) {
    int s = 0, w = 0;
    queue<pair<int, int>> q;
    
    visited[r][c] = true;
    q.push({r, c});
    while (!q.empty()) {
        int row = q.front().first;
        int col = q.front().second;
        q.pop();
        
        if (graph[row][col] == 'v')
            w++;
        if (graph[row][col] == 'k')
            s++;
        
        for (int i = 0; i < 4; i++) {
            int tempR = row + dr[i];
            int tempC = col + dc[i];
            
            if (tempR < 0 || tempR >= n || tempC < 0 || tempC >= m)
                continue;
            if (visited[tempR][tempC] || graph[tempR][tempC] == '#')
                continue;
            visited[tempR][tempC] = true;
            q.push({tempR, tempC});
        }
    }
    if (s > w)
        sheep += s;
    else
        wolf += w;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string str;
        
        cin >> str;
        for (int j = 0; j < m; j++)
            graph[i][j] = str[j];
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!visited[i][j] && graph[i][j] != '#' && graph[i][j] != '.') {
                bfs(i, j);
            }
        }
    }
    cout << sheep << ' ' << wolf << '\n';
    return 0;
}
