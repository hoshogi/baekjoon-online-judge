/*
Title   : BOJ_2579 [계단 오르기]
Author  : Hoseok Lee
Date    : 2022/08/09
https://www.acmicpc.net/problem/2579
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n;
    int score[301] = {0, };
    int d[301][2] = {0, };
    
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> score[i];
    
    d[1][0] = score[1];
    
    for (int i = 2; i <= n; i++) {
        d[i][0] = max(d[i - 2][0], d[i - 2][1]) + score[i];
        d[i][1] = d[i - 1][0] + score[i];
    }
    
    cout << max(d[n][0], d[n][1]) << '\n';
    return 0;
}
