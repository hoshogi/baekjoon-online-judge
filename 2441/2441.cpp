/*
Title   : BOJ_2441 [별 찍기 - 4]
Author  : Hoseok Lee
Date    : 2021/01/21

https://www.acmicpc.net/problem/2441
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
    int n;

    cin >> n;
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < i;j++)
            cout << " ";
        for (int j = n;j > i;j--)
            cout << "*";
        cout << endl;
    }

    return 0;
}