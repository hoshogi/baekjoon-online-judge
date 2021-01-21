/*
Title   : BOJ_10818 [최소, 최대]
Author  : Hoseok Lee
Date    : 2021/01/21

https://www.acmicpc.net/problem/10818
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
    int n, smallest_num, largest_num, * num;

    cin >> n;
    num = new int[n];

    cin >> num[0];
    smallest_num = num[0];
    largest_num = num[0];

    for (int i = 1;i < n;i++)
    {
        cin >> num[i];
        if (num[i] < smallest_num)
            smallest_num = num[i];
        if (num[i] > largest_num)
            largest_num = num[i];
    }

    cout << smallest_num << " " << largest_num << endl;
    return 0;
}