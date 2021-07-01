/*
Title   : BOJ_11052 [카드 구매하기]
Author  : Hoseok Lee
Date    : 2021/07/01

https://www.acmicpc.net/problem/11052
https://github.com/hoshogi
*/

#include <iostream>
#include <algorithm>
using namespace std;

/*
Dynamic Programming

d[i]: 카드 i개 구매하는 최대 비용
j번째 카드팩은 j개의 카드를 담고 있고, 가격은 p[j]

1 <= j <= n
d[i] = max(d[i - j] + p[j]
*/

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int p[10001] = {0, };
    int d[10001] = {0, };
    int n;
    
    cin >> n;
    for (int i = 1;i <= n;i++)
        cin >> p[i];
    
    for (int i = 1;i <= n;i++)
    {
        for (int j = 1;j <= i;j++)
            d[i] = max(d[i], d[i - j] + p[j]);
    }
    
    cout << d[n] << '\n';
    return 0;
}
