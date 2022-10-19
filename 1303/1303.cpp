/*
Title   : BOJ_1303 [전쟁 - 전투]
Author  : Hoseok Lee
Date    : 2022/10/19
https://www.acmicpc.net/problem/1303
https://github.com/hoshogi
*/

#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

int n, m;
int dr[4] = {-1, 0, 1, 0};
int dc[4] = {0, 1, 0, -1};
char graph[100][100];
bool visited[100][100];

int bfs(int r, int c) {
    int count = 1;
    char now = graph[r][c];
    queue<pair<int, int>> q;
    
    q.push({r, c});
    visited[r][c] = true;
    
    while (!q.empty()) {
        int row = q.front().first;
        int col = q.front().second;
        q.pop();
        
        for (int i = 0; i < 4; i++) {
            int tempR = row + dr[i];
            int tempC = col + dc[i];
            
            if (tempR < 0 || tempR >= n || tempC < 0 || tempC >= m)
                continue;
            if (visited[tempR][tempC] || graph[tempR][tempC] != now)
                continue;
            count++;
            q.push({tempR, tempC});
            visited[tempR][tempC] = true;
        }
    }
    return count;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int w = 0, b = 0;
    
    cin >> m >> n;
    for (int i = 0; i < n; i++) {
        string str;
        
        cin >> str;
        for (int j = 0; j < m; j++)
            graph[i][j] = str[j];
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!visited[i][j]) {
                int num = bfs(i, j);
                if (graph[i][j] == 'W')
                    w += num * num;
                else
                    b += num * num;
            }
        }
    }

    cout << w << ' ' << b << '\n';
    return 0;
}
