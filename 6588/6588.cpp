/*
Title   : BOJ_6588 [골드바흐의 추측]
Author  : Hoseok Lee
Date    : 2021/03/24

https://www.acmicpc.net/problem/6588
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

/*
골드바흐의 추측

2보다 큰 모든 짝수는 두 소수의 합으로 표현 가능
위의 문장에 3을 더하면
5보다 큰 모든 홀수는 세 소수의 합으로 표현 가능

짝수 N = a + b 일 때 a, b가 소수인지 확인 하는 문제
a = N - b
N - b가 소수인지 확인한다
*/

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    bool check[1000001] = { true, true, false };

    for (int i = 2;i <= 1000000;i++)
    {
        if (check[i] == false) // 지워지지 않은 경우
        {
            for (int j = i * 2;j <= 1000000;j += i)
                check[j] = true; // i의 배수를 지운다
        }
    }

    while (true)
    {
        int n;

        cin >> n;
        if (n == 0)
            break;

        for (int i = 2;i < n;i++)
        {
            if (check[i] == false)
            {
                int a = n - i;

                if (check[a] == false) // a가 소수인지 확인
                {
                    cout << n << " = " << i << " + " << a << '\n';
                    break;
                }
            }

            if (i == n - 1)
                cout << "Goldbach's conjecture is wrong." << '\n';
        }
    }

    return 0;
}