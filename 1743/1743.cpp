/*
Title   : BOJ_1743 [음식물 피하기]
Author  : Hoseok Lee
Date    : 2023/07/06
https://www.acmicpc.net/problem/1743
https://github.com/hoshogi
*/

#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int n, m;
bool graph[101][101];
int dr[4] = {-1, 0, 1, 0};
int dc[4] = {0, 1, 0, -1};

int bfs(int row, int col) {
    int result = 0;
    queue<pair<int, int>> q;

    result++;
    graph[row][col] = false;
    q.push({row, col});
    
    while (!q.empty()) {
        int r = q.front().first;
        int c = q.front().second;
        q.pop();
        
        for (int i = 0; i < 4; i++) {
            int tempR = r + dr[i];
            int tempC = c + dc[i];
            
            if (tempR <= 0 && tempR > n && tempC <= 0 && tempC > m)
                continue;
            if (graph[tempR][tempC]) {
                graph[tempR][tempC] = false;
                q.push({tempR, tempC});
                result++;
            }
        }
    }
    return result;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int k, result = 0;
    
    cin >> n >> m >> k;
    for (int i = 0; i < k; i++) {
        int r, c;
        
        cin >> r >> c;
        graph[r][c] = true;
    }
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (graph[i][j])
                result = max(result, bfs(i, j));
        }
    }
    
    cout << result << '\n';
    return 0;
}
