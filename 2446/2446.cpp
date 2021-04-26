/*
Title   : BOJ_2446 [별 찍기 - 9]
Author  : Hoseok Lee
Date    : 2021/04/26

https://www.acmicpc.net/problem/2446
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
    for (int i = 0;i < n - 1;i++)
    {
        for (int j = 0;j < i;j++)
            cout << ' ';
        for (int j = 0;j < (2 * n) - (2 * i) - 1;j++)
            cout << '*';
        
        cout << '\n';
    }
    
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < n - i - 1;j++)
            cout << ' ';
        for (int j = 0;j < 2 * i + 1;j++)
            cout << '*';
        
        cout << '\n';
    }
    
    return 0;
}
