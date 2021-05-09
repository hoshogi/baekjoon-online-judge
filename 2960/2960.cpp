/*
Title   : BOJ_2960 [에라토스테네스의 체]
Author  : Hoseok Lee
Date    : 2021/05/09

https://www.acmicpc.net/problem/2960
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int EraseNum(bool checked[], int n, int k)
{
    for (int i = 2;i <= n;i++)
    {
        if (checked[i] == false)
            for (int j = i;j <= n;j += i)
                if (checked[j] == false)
                {
                    checked[j] = true;
                    
                    if (--k == 0)
                        return j;
                }
    }
    
    return -1;
}

int main(void)
{
    bool checked[1001] = {true, true, false, };
    int n, k;
    
    cin >> n >> k;
    cout << EraseNum(checked, n, k) << '\n';
    
    return 0;
}
