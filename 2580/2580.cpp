/*
Title   : BOJ_2580 [스도쿠]
Author  : Hoseok Lee
Date    : 2023/03/28
https://www.acmicpc.net/problem/2580
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int board[9][9];
vector<pair<int, int>> v;

bool promising(int r, int c, int num) {
    for (int i = 0; i < 9; i++) {
        if (board[i][c] == num || board[r][i] == num || board[(r / 3) * 3 + i / 3][(c / 3) * 3 + i % 3] == num)
            return false;
    }
    return true;
    
}

void sudoku(int index) {
    if (index == v.size()) {
        for (int i = 0; i < 9; i++){
            for (int j = 0; j < 9; j++)
                cout << board[i][j] << ' ';
            cout << '\n';
        }
        exit(0);
    }
    
    int r = v[index].first;
    int c = v[index].second;
    
    for (int i = 1; i <= 9; i++) {
        if (promising(r, c, i)) {
            board[r][c] = i;
            sudoku(index + 1);
            board[r][c] = 0;
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> board[i][j];
            if (board[i][j] == 0)
                v.push_back({i, j});
        }
    }
    sudoku(0);
    return 0;
}
