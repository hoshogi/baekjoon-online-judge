/*
Title   : BOJ_3190 [벰]
Author  : Hoseok Lee
Date    : 2022/04/24
https://www.acmicpc.net/problem/3190
https://github.com/hoshogi
*/

#include <iostream>
#include <queue>
using namespace std;

int ChangeDirection(int direction, char way) {
    if (way == 'L')
        direction--;
    if (way == 'D')
        direction++;
    if (direction == -1)
        direction = 3;
    if (direction == 4)
        direction = 0;
    return direction;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n, k, l, row = 1, col = 1, direction = 1, result = 0;
    int board[102][102] = {0, };
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {-1, 0, 1, 0};
    queue<pair<int, char> > change;
    deque<pair<int, int> > snake;
    
    cin >> n >> k;
    for (int i = 0; i <= n + 1; i++) {
        board[0][i] = -1;
        board[n + 1][i] = -1;
        board[i][0] = -1;
        board[i][n + 1] = -1;
    }
    
    for (int i = 0; i < k; i++) {
        int x, y;
        
        cin >> y >> x;
        board[y][x] = 1;
    }
    
    cin >> l;
    for (int i = 0; i < l; i++) {
        int x;
        char c;
        
        cin >> x >> c;
        change.push({x, c});
    }
    
    board[1][1] = 2;
    snake.push_front({1, 1});
    while (true) {
        result++;
        row += dy[direction];
        col += dx[direction];
        snake.push_front({row, col});
        
        if (board[row][col] == -1 || board[row][col] == 2)
            break;
        
        if (board[row][col] == 1)
            board[row][col] = 2;
        else if (board[row][col] == 0) {
            int tempRow = snake.back().first;
            int tempCol = snake.back().second;
            
            snake.pop_back();
            board[tempRow][tempCol] = 0;
            board[row][col] = 2;
        }
        
        if (change.front().first == result) {
            char way = change.front().second;
            direction = ChangeDirection(direction, way);
            change.pop();
        }
    }
    cout << result << '\n';
    return 0;
}
