/*
Title   : BOJ_1977 [완전제곱수]
Author  : Hoseok Lee
Date    : 2021/02/28

https://www.acmicpc.net/problem/1977
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int m, n, min = 10001, sum = 0;
    
    cin >> m >> n;
    for (int i = 1;i <= 100;i++)
    {
        int squareNum = i * i;
        
        if (squareNum < m)
            continue;
        else if (squareNum > n)
            break;
        else
        {
            if (squareNum < min)
                min = squareNum;
            sum += squareNum;
        }
    }
    
    if (min == 10001)
        cout << "-1" << '\n';
    else
    {
        cout << sum << '\n';
        cout << min << '\n';
    }
    
    return 0;
}
