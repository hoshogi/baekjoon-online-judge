/*
Title   : BOJ_1080 [행렬]
Author  : Hoseok Lee
Date    : 2022/03/24
https://www.acmicpc.net/problem/1080
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
using namespace std;

void transfer(string matrix[50], int x, int y) {
    for (int i = x; i < x + 3; i++) {
        for (int j = y; j < y + 3; j++) {
            if (matrix[i][j] == '0')
                matrix[i][j] = '1';
            else if (matrix[i][j] == '1')
                matrix[i][j] = '0';
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m, count = 0;
    string matrix[50];
    string result[50];
    
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> matrix[i];
    
    for (int i = 0; i < n; i++)
        cin >> result[i];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] != result[i][j]) {
                if (i < n - 2 && j < m - 2) {
                    transfer(matrix, i, j);
                    count++;
                }
                else {
                    cout << -1 << '\n';
                    exit(0);
                }
            }
        }
    }
    cout << count << '\n';
    return 0;
}
