/*
Title   : BOJ_16194 [카드 구매하기 2]
Author  : Hoseok Lee
Date    : 2021/07/04

https://www.acmicpc.net/problem/16194
https://github.com/hoshogi
*/

#include <iostream>
#include <algorithm>
using namespace std;

/*
Dynamic Programming

d[i]: 카드 i개 구매하는 최소 비용
j번째 카드팩은 j개의 카드를 담고 있고, 가격은 p[j]
 
초기값
d[0] = 0
d[i] = -1 -> 아직 정답을 구하지 않았다는 의미

1 <= j <= n
d[i] = min(d[i - j] + p[j]
*/

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int p[10001] = {0, };
    int d[10001];
    int n;
    
    cin >> n;
    for (int i = 1;i <= n;i++)
        cin >> p[i];
    
    fill_n(d, n + 1, -1);
    d[0] = 0;
    
    for (int i = 1;i <= n;i++)
    {
        for (int j = 1;j <= i;j++)
            if (d[i] == -1 || d[i - j] + p[j] < d[i])
                d[i] = d[i - j] + p[j];
    }
    
    cout << d[n] << '\n';
    return 0;
}
