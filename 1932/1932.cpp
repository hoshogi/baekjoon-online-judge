/*
Title   : BOJ_1932 [정수 삼각형]
Author  : Hoseok Lee
Date    : 2022/02/24
https://www.acmicpc.net/problem/1932
https://github.com/hoshogi
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    int triangle[500][500] = {0, };
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            int num;
            
            cin >> num;
            triangle[i][j] = num;
        }
    }
    
    for (int i = 1; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0)
                triangle[i][j] += triangle[i - 1][j];
            else if (j == i)
                triangle[i][j] += triangle[i - 1][j - 1];
            else
                triangle[i][j] += max(triangle[i - 1][j - 1], triangle[i - 1][j]);
        }
    }
    
    sort(triangle[n - 1], triangle[n - 1] + n, greater<>());
    cout << triangle[n - 1][0] << '\n';
    return 0;
}
