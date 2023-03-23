/*
Title   : BOJ_2665 [미로만들기]
Author  : Hoseok Lee
Date    : 2023/03/23
https://www.acmicpc.net/problem/2665
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
#include <queue>
#include <algorithm>
#define INF 1e9
using namespace std;

int n;
int board[50][50];
int result[50][50];
int dr[4] = {-1, 0, 1, 0};
int dc[4] = {0, 1, 0, -1};

void bfs() {
    queue<pair<int, int>> q;
    result[0][0] = 0;
    q.push({0, 0});
    
    while (!q.empty()) {
        int r = q.front().first;
        int c = q.front().second;
        int count = result[r][c];
        q.pop();
        
        for (int i = 0; i < 4; i++) {
            int tempR = r + dr[i];
            int tempC = c + dc[i];
            int tempCount = count;
            
            if (tempR < 0 || tempR >= n || tempC < 0 || tempC >= n)
                continue;
            if (board[tempR][tempC] == 0)
                tempCount++;
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
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        string str;
        
        cin >> str;
        for (int j = 0; j < str.length(); j++)
            board[i][j] = str[j] - '0';
    }
    for (int i = 0; i < n; i++)
        fill_n(result[i], n, INF);
    bfs();
    cout << result[n - 1][n - 1] << '\n';
    return 0;
}
