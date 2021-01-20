/*
Title   : BOJ_2742 [기찍 N]
Author  : Hoseok Lee
Date    : 2021/01/20

https://www.acmicpc.net/problem/2742
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;
    for (int i = n;i >= 1;i--)
    {
        cout << i << "\n";
    }

    return 0;
}