/*
Title   : BOJ_1568 [새]
Author  : Hoseok Lee
Date    : 2021/08/11
https://github.com/hoshogi
https://www.acmicpc.net/problem/1568
*/

#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    int num = 1, count = 0;
    
    cin >> n;
    while (true)
    {
        if (n == 0)
        {
            cout << count << '\n';
            break;
        }
        
        if (num <= n)
        {
            n -= num;
            count++;
            num++;
        }
        else
            num = 1;
    }
    
    return 0;
}
