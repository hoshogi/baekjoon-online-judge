/*
Title   : BOJ_2163 [초콜릿 자르기]
Author  : Hoseok Lee
Date    : 2021/04/22

https://www.acmicpc.net/problem/2163
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    
    cin >> n >> m;
    cout << n * m - 1 << '\n';
    
    return 0;
}
