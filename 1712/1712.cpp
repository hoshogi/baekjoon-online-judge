/*
Title   : BOJ_1712 [손익분기점]
Author  : Hoseok Lee
Date    : 2022/10/24
https://www.acmicpc.net/problem/1712
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int a, b, c;
    
    cin >> a >> b >> c;
    if (b >= c) {
        cout << -1 << '\n';
        exit(0);
    }
    
    cout << a / (c - b) + 1 << '\n';
    return 0;
}
