/*
Title   : BOJ_7576 [토마토]
Author  : Hoseok Lee
Date    : 2022/09/20
https://www.acmicpc.net/problem/7576
https://github.com/hoshogi
*/

#include <iostream>
#include <queue>
#include <algorithm>
#define INF 1e9
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int m, n, count = 0, total = 0, result = 0;
    int graph[1002][1002] = {0, };
    int time[1002][1002] = {0, };
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {-1, 0, 1, 0};
    queue<tuple<int, int, int> > q;
    
    cin >> m >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> graph[i][j];
            time[i][j] = INF;
            if (graph[i][j] != -1)
                total++;
            if (graph[i][j] == 1) {
                q.push({i, j, 0});
                time[i][j] = 0;
                count++;
            }
        }
    }
    
    while (!q.empty()) {
        int y = get<0>(q.front());
        int x = get<1>(q.front());
        int len = get<2>(q.front());
        q.pop();
        
        for (int i = 0; i < 4; i++) {
            int tempY = y + dy[i];
            int tempX = x + dx[i];
            
            if (!(tempX >= 1 && tempX <= m && tempY >= 1 && tempY <= n))
                continue;
            
            if (graph[tempY][tempX] == 0) {
                graph[tempY][tempX] = 1;
                time[tempY][tempX] = min(time[tempY][tempX], len + 1);
                result = max(result, time[tempY][tempX]);
                q.push({tempY, tempX, time[tempY][tempX]});
                count++;
            }
        }
    }
    
    if (count == total)
        cout << result << '\n';
    else
        cout << -1 << '\n';
    return 0;
}
