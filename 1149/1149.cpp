/*
Title   : BOJ_1149 [RGB거리]
Author  : Hoseok Lee
Date    : 2022/08/05
https://www.acmicpc.net/problem/1149
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n;
    int price[1001][3];
    long long d[1001][3] = {0, 0, 0, };
    
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 0; j < 3; j++)
            cin >> price[i][j];
    
    for (int i = 1; i <= n; i++) {
        d[i][0] = min(d[i - 1][1], d[i - 1][2]) + price[i][0];
        d[i][1] = min(d[i - 1][0], d[i - 1][2]) + price[i][1];
        d[i][2] = min(d[i - 1][0], d[i - 1][1]) + price[i][2];
    }
    
    long long result = min(d[n][0], d[n][1]);
    result = min(result, d[n][2]);
    
    cout << result << '\n';
    return 0;
}
