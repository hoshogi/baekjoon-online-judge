/*
Title   : BOJ_1026 [보물]
Author  : Hoseok Lee
Date    :2021/04/08

https://www.acmicpc.net/problem/1026
https://github.com/hoshogi
*/

#include <iostream>
#include <algorithm>
using namespace std;

// 내림차순으로 sort하기위한 함수
bool compare(int a, int b)
{
    return a > b;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, sum = 0;
    int a[50], b[50];
    
    cin >> n;
    for (int i = 0;i < n;i++)
        cin >> a[i];
    
    for (int i = 0;i < n;i++)
        cin >> b[i];
    
    sort(a, a + n); // 배열 a 오름차순 정렬
    sort(b, b + n, compare); // 배열 b 내림차순 정렬
    
    for (int i = 0;i < n;i++)
        sum += a[i] * b[i];
    
    cout << sum << '\n';
    return 0;
}
