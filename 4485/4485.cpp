/*
Title   : BOJ_4485 [녹색 옷 입은 애가 젤다지?]
Author  : Hoseok Lee
Date    : 2023/03/21
https://www.acmicpc.net/problem/4485
https://github.com/hoshogi
*/

#include <iostream>
#include <queue>
#define INF 1e9
using namespace std;

int n;
int dr[4] = {-1, 0, 1, 0};
int dc[4] = {0, 1, 0, -1};
int board[125][125];
int result[125][125];

void bfs() {
    queue<pair<int, int>> q;
    result[0][0] = board[0][0];
    q.push({0, 0});
    
    while (!q.empty()) {
        int r = q.front().first;
        int c = q.front().second;
        int count = result[r][c];
        q.pop();
        
        for (int i = 0; i < 4; i++) {
            int tempR = r + dr[i];
            int tempC = c + dc[i];
            
            if (tempR < 0 || tempR >= n || tempC < 0 || tempC >= n)
                continue;
                
            int tempCount = count + board[tempR][tempC];
            if (tempCount < result[tempR][tempC]) {
                result[tempR][tempC] = tempCount;
                q.push({tempR, tempC});
            }
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int count = 1;

    while (true) {
        cin >> n;
        
        if (n == 0)
            break;
        
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> board[i][j];
        for (int i = 0; i < n; i++)
            fill_n(result[i], n, INF);
        bfs();
        cout << "Problem " << count++ << ": " << result[n - 1][n - 1] << '\n';
    }
    return 0;
}
