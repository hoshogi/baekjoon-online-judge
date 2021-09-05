/*
Title   : BOJ_9625 [BABBA]
Author  : Hoseok Lee
Date    : 2021/09/05
https://github.com/hoshogi
https://www.acmicpc.net/problem/9625
*/

#include <iostream>
using namespace std;

int main(void)
{
    int a = 1, b = 0;
    int tmpA, tmpB, k;
    
    cin >> k;
    for (int i = 0;i < k;i++)
    {
        tmpA = a;
        tmpB = b;
        a = tmpB;
        b = tmpA + tmpB;
    }
    
    cout << a << ' ' << b << '\n';
    return 0;
}
