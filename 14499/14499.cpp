/*
Title   : BOJ_14499 [주사위 굴리기]
Author  : Hoseok Lee
Date    : 2023/03/18
https://www.acmicpc.net/problem/14499
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
using namespace std;

int n, m, r, c;
int board[20][20] = {0, };
int square[6] = {0, 0, 0, 0, 0, 0};
vector<int> direction[4] = {{3, 2, 0, 1, 4, 5},
                            {2, 3, 1, 0, 4, 5},
                            {4, 5, 2, 3, 1, 0},
                            {5, 4, 2, 3, 0, 1}};

bool checkRange(int row, int col) {
    if (row < 0 || row >= n || col < 0 || col >= m)
        return false;
    return true;
}

int calculate(int menu) {
    int tempSquare[6];
    
    for (int i = 0; i < 6; i++)
        tempSquare[direction[menu - 1][i]] = square[i];
    copy(tempSquare, tempSquare + 6, square);
    
    if (board[r][c] == 0)
        board[r][c] = square[0];
    else {
        square[0] = board[r][c];
        board[r][c] = 0;
    }
    
    return square[1];
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int k;
    
    cin >> n >> m >> r >> c >> k;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> board[i][j];
    
    while (k--) {
        int menu;
        int tempR = r, tempC = c;
        
        cin >> menu;
        switch (menu) {
            case 1:
                tempC++;
                break;
            case 2:
                tempC--;
                break;
            case 3:
                tempR--;
                break;
            case 4:
                tempR++;
                break;
        }
        
        if (checkRange(tempR, tempC)) {
            r = tempR;
            c = tempC;
        }
        else
            continue;
        
        cout << calculate(menu) << '\n';
    }
    return 0;
}
