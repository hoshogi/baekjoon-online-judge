/*
Title   : BOJ_2581 [소수]
Author  : Hoseok Lee
Date    :2021/04/10

https://www.acmicpc.net/problem/2581
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

// 에라토스테네스의 체 사용
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int m, n, sum = 0, min = 10000;
    bool checked[10001] = {true, true, false, };
    
    cin >> m >> n;
    for (int i = 2;i <= n;i++)
    {
        if (checked[i] == false)
        {
            for (int j = i * 2;j <= n;j += i)
                checked[j] = true;
        }
    }
    
    for (int i = m;i <= n;i++)
    {
        if (checked[i] == false)
        {
            sum += i;
            
            if (i < min)
                min = i;
        }
    }
    
    if (sum == 0)
        cout << -1 << '\n';
    else
    {
        cout << sum << '\n';
        cout << min << '\n';
    }
    
    return 0;
}
