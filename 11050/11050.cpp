/*
Title   : BOJ_11050 [이항 계수 1]
Author  : Hoseok Lee
Date    : 2021/03/09

https://www.acmicpc.net/problem/11050
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int Factorial (int num)
{
    int mul = 1;
    
    for (int i = 1;i <= num;i++)
        mul *= i;
    
    return mul;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k;
    
    cin >> n >> k;
    
    cout << Factorial(n) / (Factorial(n-k) * Factorial(k)) << '\n';
    return 0;
}

