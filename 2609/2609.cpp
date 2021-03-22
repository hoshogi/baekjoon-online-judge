/*
Title   : BOJ_2609 [최대공약수와 최소공배수]
Author  : Hoseok Lee
Date    : 2021/03/22

https://www.acmicpc.net/problem/2609
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

/*
유클리드 호제법
최대공약수를 구하는 빠른 방법 -> O(log N)
a를 b로 나눈 나머지를 r 이라고 했을 때
GCD(a, b) = GCD (b, r)
r = 0 이면 그 때 b가 최대 굥약수
ex) GCD(24, 16) = GCD(16, 8) = GCD(8, 0)
*/
int Gcd(int a, int b)
{
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    
    return a;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b;
    
    cin >> a >> b;
    cout << Gcd(a, b) << '\n';
    cout << a * b / Gcd(a, b) << '\n'; // 최소공배수 * 최대공약수 = 두 수의 곱
    
    return 0;
}

/*
최대공약수를 구하는 다른 방법
N = max(a, b) -> O(N)

int g = 1;
for (int i = 2;i < min(a, b);i++)
{
    if (a % i == 0 || b % i == 0)
        g = i;
}
*/
