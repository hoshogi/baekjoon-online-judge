/*
Title   : BOJ_11653 [소인수분해]
Author  : Hoseok Lee
Date    : 2021/04/06
 
https://www.acmicpc.net/problem/11653
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

/*
소인수분해 알고리즘
에라토스테네스의 체를 응용
-> 임의의 자연수 N이 제곱근 이하에서 소수로 나누어지면 N은 소수가 아니다
   제곱근을 기점으로 좌우 곱이 대칭된다
따라서, i <= sqrt(n) 까지 검사하면 된다 대신 나머지 숫자가 1개 발생 할 수 있다
나머지 숫자가 1보다 크면 출력한다
-> O(√n)
*/

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    
    cin >> n;
    for(int i = 2;i * i <= n;i++)
    {
        if (n == 1)
            break;
        while (n % i == 0)
        {
            cout << i << '\n';
            n /= i;
        }
    }
    
    if (n > 1)
        cout << n << '\n';
    
    return 0;
}
