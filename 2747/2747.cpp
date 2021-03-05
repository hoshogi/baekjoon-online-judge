/*
Title   : BOJ_2747 [피보나치 수]
Author  : Hoseok Lee
Date    : 2021/03/05

https://www.acmicpc.net/problem/2747
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
    int* fib = new int[n];
    
    fib[0] = 0;
    fib[1] = 1;
    
    if (n > 1)
    {
        for (int i = 2;i <= n;i++)
            fib[i] = fib[i - 1] + fib[i - 2];
    }
    
    // fibonnaci 값을 구하기 까지 시간복잡도: n + 1
    
    cout << fib[n] << '\n';
    return 0;
}
