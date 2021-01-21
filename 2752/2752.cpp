/*
Title   : BOJ_2752 [세수정렬]
Author  : Hoseok Lee
Date    : 2021/01/21

https://www.acmicpc.net/problem/2752
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
    int a[3], tmp;

    for (int i = 0;i < 3;i++)
        cin >> a[i];

    for (int i = 0;i < 3;i++)
    {
        for (int j = i + 1;j < 3;j++)
        {
            if (a[j] < a[i])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    for (int i = 0;i < 3;i++)
        cout << a[i] << " ";

    return 0;
}