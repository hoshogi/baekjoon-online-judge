/*
Title   : BOJ_3184 [양]
Author  : Hoseok Lee
Date    : 2022/10/17
https://www.acmicpc.net/problem/3184
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
#include <queue>
using namespace std;

int n, m;
int dr[4] = {-1, 0, 1, 0};
int dc[4] = {0, 1, 0, -1};
char graph[250][250];
bool visited[250][250];
int tempS, tempF;

void bfs(int r, int c) {
    queue<pair<int, int>> q;
    
    tempS = 0;
    tempF = 0;
    if (graph[r][c] == 'o')
        tempS++;
    if (graph[r][c] == 'v')
        tempF++;
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
            if (visited[tempR][tempC] || graph[tempR][tempC] == '#')
                continue;
            if (graph[tempR][tempC] == 'o')
                tempS++;
            if (graph[tempR][tempC] == 'v')
                tempF++;
            visited[tempR][tempC] = true;
            q.push({tempR, tempC});
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int resultS = 0, resultF = 0;
    
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string str;
        
        cin >> str;
        for (int j = 0; j < m; j++) {
            graph[i][j] = str[j];
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!visited[i][j] && graph[i][j] != '#') {
                bfs(i, j);
                if (tempS > tempF)
                    resultS += tempS;
                else
                    resultF += tempF;
            }
        }
    }
    
    cout << resultS << ' ' << resultF << '\n';
    return 0;
}
