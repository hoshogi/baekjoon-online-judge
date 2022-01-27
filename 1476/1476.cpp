/*
Title   : BOJ_1476 [날짜 계산]
Author  : Hoseok Lee
Date    : 2022/01/25
https://www.acmicpc.net/problem/1476
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int E, S, M;
    int e = 1, s = 1, m = 1;
    
    cin >> E >> S >> M;
    
    for (int i = 1; ; i++) {
        if (e == E && s == S && m == M) {
            cout << i << '\n';
            break;
        }
        
        e += 1;
        s += 1;
        m += 1;
        
        if (e == 16)
            e = 1;
        if (s == 29)
            s = 1;
        if (m == 20)
            m = 1;
    }
    return 0;
}
