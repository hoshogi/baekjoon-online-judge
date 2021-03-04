/*
Title   : BOJ_2480 [주사위 세개]
Author  : Hoseok Lee
Date    : 2021/03/04

https://www.acmicpc.net/problem/2480
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a[3], count = 0, maxNum = 0, sameNum = 0;

    for (int i = 0;i < 3;i++)
    {
        cin >> a[i];
        maxNum = max(maxNum, a[i]);
    }
    
    if (a[0] == a[1])
    {
        sameNum = a[0];
        count++;
    }
    if (a[1] == a[2])
    {
        sameNum = a[1];
        count++;
    }
    if (a[2] == a[0])
    {
        sameNum = a[2];
        count++;
    }
    
    if (count == 3)
        cout << 10000 + sameNum * 1000 << '\n';
    else if (count == 1)
        cout << 1000 + sameNum * 100 << '\n';
    else if (count == 0)
        cout << maxNum * 100 << '\n';
    
    return 0;
}
