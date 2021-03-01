/*
Title   : BOJ_1065 [한수]
Author  : Hoseok Lee
Date    : 2021/03/01

https://www.acmicpc.net/problem/1065
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int countNum(int n)
{
    if (n < 100)
        return n;
    else
    {
        int count = 0, num[3];
        
        for (int i = 100;i <= n;i++)
        {
            num[0] = i / 100;
            num[1] = (i % 100) / 10;
            num[2] = i % 10;
            
            if (num[0] - num[1] == num[1] - num[2])
                count++;
        }
        
        return 99 + count;
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    
    cin >> n;
    cout << countNum(n) << '\n';
    
    return 0;
}
