/*
Title   : BOJ_2156 [포도주 시식]
Author  : Hoseok Lee
Date    : 2022/08/05
https://www.acmicpc.net/problem/2156
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n, result = 0;
    int wine[10001] = {0, };
    int d[10001][3] = {0, };
    
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> wine[i];
    
    d[1][1] = wine[1];
    for (int i = 2; i <= n; i++) {
        d[i][0] = max(d[i - 1][0], d[i - 1][1]);
        d[i][0] = max(d[i][0], d[i - 1][2]);
        d[i][1] = d[i - 1][0] + wine[i];
        d[i][2] = d[i - 1][1] + wine[i];
    }
    
    result = max(d[n][0], d[n][1]);
    result = max(result, d[n][2]);
    cout << result << '\n';    
    return 0;
}
