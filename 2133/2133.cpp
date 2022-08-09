/*
Title   : BOJ_2133 [타일 채우기]
Author  : Hoseok Lee
Date    : 2022/08/09
https://www.acmicpc.net/problem/2133
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n;
    long long d[31] = {1, 0, 3, };
    
    cin >> n;
    for (int i = 4; i <= n; i += 2) {
        d[i] += d[i - 2] * 3;
        for (int j = 4; j <= i; j += 2)
            d[i] += d[i - j] * 2;
    }
    
    cout << d[n] << '\n';
    return 0;
}
