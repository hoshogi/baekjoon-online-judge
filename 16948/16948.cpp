/*
Title   : BOJ_16948 [데스 나이트]
Author  : Hoseok Lee
Date    : 2022/10/18
https://www.acmicpc.net/problem/16948
https://github.com/hoshogi
*/

#include <iostream>
#include <queue>
#define INF 1e9
using namespace std;

int n;
int dr[6] = {-2, -2, 0, 0, 2, 2};
int dc[6] = {-1, 1, -2, 2, -1, 1};

int bfs(int r1, int c1, int r2, int c2) {
    int distance[200][200];
    queue<pair<pair<int, int>, int>> q;
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            distance[i][j] = INF;
    
    distance[r1][c1] = 0;
    q.push({{r1, c1}, 0});
    
    while (!q.empty()) {
        int r = q.front().first.first;
        int c = q.front().first.second;
        int len = q.front().second + 1;
        q.pop();
        
        for (int i = 0; i < 6; i++) {
            int tempR = r + dr[i];
            int tempC = c + dc[i];
            
            if (tempR < 0 || tempR >= n || tempC < 0 || tempC >= n)
                continue;
            if (len < distance[tempR][tempC]) {
                distance[tempR][tempC] = len;
                q.push({{tempR, tempC}, len});
            }
        }
    }
    return distance[r2][c2];
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int r1, r2, c1, c2, result;
    
    cin >> n >> r1 >> c1 >> r2 >> c2;
    result = bfs(r1, c1, r2, c2);

    if (result == INF)
        cout << -1 << '\n';
    else
        cout << result << '\n';
    return 0;
}
