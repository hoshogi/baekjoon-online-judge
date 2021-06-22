/*
Title   : BOJ_1463 [1로 만들기]
Author  : Hoseok Lee
Date    : 2021/06/22

https://www.acmicpc.net/problem/1463
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

const int SIZE = 1000001;

/*
Dynamic Programming

D[i] = min(D[i - 1], D[i / 2], D[i / 3]) + 1;
*/

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int d[SIZE] = {0, 0};
    int n;
    
    for (int i = 2;i < SIZE;i++)
    {
        d[i] = d[i - 1] + 1;
        
        if (i % 2 == 0 && (d[i / 2] + 1) < d[i])
            d[i]  = d[i / 2] + 1;
        if (i % 3 == 0 && (d[i / 3] + 1) < d[i])
            d[i]  = d[i / 3] + 1;
    }
    
    cin >> n;
    cout << d[n] << '\n';
    
    return 0;
}
