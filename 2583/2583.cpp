/*
Title   : BOJ_2583 [영역 구하기]
Author  : Hoseok Lee
Date    : 2022/02/07
https://www.acmicpc.net/problem/2583
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int bfs(bool square[100][100], int x, int y, int m, int n) {
    queue<pair<int, int> > q;
    int area = 0;
    
    int dx[] = {0, 1, 0, -1};
    int dy[] = {-1, 0, 1, 0};
    
    q.push({x, y});
    while(!q.empty()) {
        int a = q.front().first;
        int b = q.front().second;
        square[a][b] = true;
        q.pop();
        area++;
        
        for (int i = 0; i < 4; i++) {
            int tempX = dx[i] + a;
            int tempY = dy[i] + b;
            
            if (tempX >= 0 && tempY >= 0 && tempX < n && tempY < m) {
                if (square[tempX][tempY] == false) {
                    q.push({tempX, tempY});
                    square[tempX][tempY] = true;
                }
                
            }
        }
    }
    return area;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int m, n, k, count = 0;
    bool square[100][100] = {false, };
    vector<int> v;
    
    cin >> m >> n >> k;
    for (int i = 0; i < k; i++) {
        int x1, x2, y1, y2;
        
        cin >> x1 >> y1 >> x2 >> y2;
        for (int j = x1; j < x2; j++)
            for (int l = y1; l < y2; l++)
                square[j][l] = true;
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (square[i][j] == false) {
                count++;
                v.push_back(bfs(square, i, j, m, n));
            }
        }
    }
    sort(v.begin(), v.end());
    cout << count << '\n';
    for (auto it : v)
        cout << it << ' ';
    return 0;
}
