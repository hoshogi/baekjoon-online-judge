/*
Title   : BOJ_1978 [소수 찾기]
Author  : Hoseok Lee
Date    : 2021/03/22

https://www.acmicpc.net/problem/1978
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

/*
N이 소수가 되려면, 2보다 크거나 같고, √N 보다 작거나 같은 자연수로 나누어 떨어지면 안된다
i <= √N 과 같은 표현보다 i * i <= N 과 같이 표현하는 것이 직관적이고 좋다
-> O(√N)
*/

bool CheckPrimeNumber(int num)
{
    if (num < 2)
        return false;
    
    for (int i = 2;i * i <= num;i++)
    {
        if (num % i == 0)
            return false;
    }
    
    return true;
}
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, count = 0;
    
    cin >> n;
    while (n--)
    {
        int num;
        
        cin >> num;
        if (CheckPrimeNumber(num))
            count++;
    }
    
    cout << count << '\n';
    return 0;
}
