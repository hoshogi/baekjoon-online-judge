/*
Title	: BOJ_2750 [수 정렬하기]
Author	: Hoseok Lee
Date	: 2021/01/26

https://www.acmicpc.net/problem/2750
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
    int n, tmp;
    int* num;

    cin >> n;
    num = new int[n];

    for (int i = 0;i < n;i++)
        cin >> num[i];

    for (int i = 0;i < n;i++)
    {
        for (int j = i + 1;j < n; j++)
        {
            if (num[j] < num[i])
            {
                tmp = num[i];
                num[i] = num[j];
                num[j] = tmp;
            }
        }
    }

    for (int i = 0;i < n;i++)
        cout << num[i] << '\n';

    return 0;
}