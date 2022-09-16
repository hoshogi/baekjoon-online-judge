/*
Title   : BOJ_9656 [돌 게임 2]
Author  : Hoseok Lee
Date    : 2022/09/16
https://www.acmicpc.net/problem/9656
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n, result = 0;
    
    cin >> n;
    while (n != 0) {
        result++;
        
        if (n % 3 == 0) {
            n /= 3;
            n--;
        }
        else
            n--;
    }
    
    if (result % 2 == 0)
        cout << "SK" << '\n';
    else
        cout << "CY" << '\n';
    return 0;
}
