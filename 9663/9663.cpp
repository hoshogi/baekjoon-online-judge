/*
Title   : BOJ_9663 [N-Queen]
Author  : Hoseok Lee
Date    : 2023/03/28
https://www.acmicpc.net/problem/9663
https://github.com/hoshogi
*/

#include <iostream>
#include <cmath>
using namespace std;

int n, answer;
int col[15];

bool promising(int row) {
    for (int i = 0; i < row; i++) {
        if (col[i] == col[row] || abs(col[row] - col[i]) == row - i)
            return false;
    }
    return true;
}

void queen(int row) {
    for (int i = 0; i < n; i++) {
        col[row] = i;
        if (promising(row)) {
            if (row == n - 1) {
                answer++;
                continue;
            }
            queen(row + 1);
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> n;
    queen(0);
    cout << answer << '\n';
    return 0;
}
