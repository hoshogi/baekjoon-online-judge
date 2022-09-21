/*
Title   : BOJ_7562 [나이트의 이동]
Author  : Hoseok Lee
Date    : 2022/09/21
https://www.acmicpc.net/problem/7562
https://github.com/hoshogi
*/

#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int dx[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int dy[8] = {-2, -1, 1, 2, 2, 1, -1, -2};

bool check(int x1, int y1, int x2, int y2) {
    if (x1 == x2 && y1 == y2)
        return true;
    return false;
}

int bfs(int x1, int y1, int x2, int y2, int l) {
    bool visited[300][300] = {false, };
    queue<tuple<int, int, int> > q;
    
    if (check(x1, y1, x2, y2))
        return 0;
    
    visited[x1][y1] = true;
    q.push({x1, y1, 0});
    
    while (!q.empty()) {
        int x = get<0>(q.front());
        int y = get<1>(q.front());
        int count = get<2>(q.front()) + 1;
        
        for (int i = 0; i < 8; i++) {
            int tempX = x + dx[i];
            int tempY = y + dy[i];
            
            if (!(tempX >= 0 && tempX < l && tempY >= 0 && tempY < l))
                continue;
            
            if (check(tempX, tempY, x2, y2))
                return count;
            
            if (!visited[tempX][tempY]) {
                q.push({tempX, tempY, count});
                visited[tempX][tempY] = true;
            }
        }
        q.pop();
    }
    return 0;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    
    cin >> t;
    while (t--) {
        int l, x1, y1, x2, y2;
    
        cin >> l >> x1 >> y1 >> x2 >> y2;
        cout << bfs(x1, y1, x2, y2, l) << '\n';
    }
    return 0;
}
