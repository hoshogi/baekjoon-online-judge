/*
Title   : BOJ_9655 [돌 게임]
Author  : Hoseok Lee
Date    : 2021/05/08

https://www.acmicpc.net/problem/9655
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    
    cin >> n;
    if (n % 2 == 1)
        cout << "SK" << '\n';
    else
        cout << "CY" << '\n';
    
    return 0;
}
