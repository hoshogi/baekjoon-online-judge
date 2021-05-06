/*
Title   : BOJ_2587 [대표값2]
Author  : Hoseok Lee
Date    : 2021/05/06

https://www.acmicpc.net/problem/2587
https://github.com/hoshogi
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n[5], sum = 0;
    
    for (int i = 0;i < 5;i++)
    {
        cin >> n[i];
        sum += n[i];
    }
    
    cout << sum / 5 << '\n';
    
    sort(n, n + 5);
    
    cout << n[2] << '\n';
    return 0;
}
