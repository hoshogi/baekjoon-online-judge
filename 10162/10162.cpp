/*
Title   : BOJ_10162 [전자레인지]
Author  : Hoseok Lee
Date    : 2021/04/19

https://www.acmicpc.net/problem/10162
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t, countA = 0, countB = 0, countC = 0;
    
    cin >> t;
    
    if (t % 10 == 0)
    {
        if (t / 300 != 0)
        {
            countA = t / 300;
            t %= 300;
        }
        if (t / 60 != 0)
        {
            countB = t / 60;
            t %= 60;
        }
        countC = t / 10;
        
        cout << countA << ' ' << countB << ' ' << countC << '\n';
    }
    else
    {
        cout << -1 << '\n';
    }
    
    return 0;
}
