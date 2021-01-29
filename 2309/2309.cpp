/*
Title	: BOJ_2309 [일곱 난쟁이]
Author	: Hoseok Lee
Date	: 2021/01/29

https://www.acmicpc.net/problem/2309
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
    int height[9], tmp, num1 = 0, num2 = 0, sum = 0;

    for (int i = 0;i < 9;i++)
        cin >> height[i];

    // Selection Sort
    for (int i = 0;i < 9;i++)
        for (int j = i + 1;j < 9;j++)
            if (height[j] < height[i])
            {
                tmp = height[i];
                height[i] = height[j];
                height[j] = tmp;
            }

    for (int i = 0;i < 9;i++)
    {
        for (int j = 0;j < 9;j++)
        {
            if (i == j)
                continue;

            for (int k = 0;k < 9;k++)
            {
                if (k == i || k == j)
                    continue;

                sum += height[k];
            }

            if (sum == 100)
            {
                num1 = i;
                num2 = j;

                break;
            }
            sum = 0;
        }

        if (sum == 100)
            break;
    }

    for (int i = 0;i < 9;i++)
    {
        if (i == num1 || i == num2)
            continue;

        cout << height[i] << '\n';
    }

    return 0;
}