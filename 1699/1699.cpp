/*
Title   : BOJ_1699 [제곱수의 합]
Author  : Hoseok Lee
Date    : 2022/07/26
https://www.acmicpc.net/problem/1699
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n;
    int d[100001] = {0, 1, };
    
    cin >> n;
    for (int i = 2; i <= n ; i++) {
        d[i] = i;
        
        for (int j = 1; j * j <= i; j++)
            d[i] = min(d[i], d[i - j * j] + 1);
    }
    
    cout << d[n] << '\n';
    return 0;
}
