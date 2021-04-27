/*
Title   : BOJ_2751 [수 정렬하기 2]
Author  : Hoseok Lee
Date    : 2021/04/27
 
https://www.acmicpc.net/problem/2751
https://github.com/hoshogi
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    cin >> n;
    int* num = new int[n];

    for (int i = 0;i < n;i++)
        cin >> num[i];

    /*
    sort(start, end)
    [start, end) 범위의 인자를 오름차순(default)으로 정렬
     */
    sort(num, num + n);
    for (int i = 0;i < n;i++)
        cout << num[i] << '\n';

    return 0;
}
