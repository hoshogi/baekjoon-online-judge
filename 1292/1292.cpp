/*
Title   : BOJ_1292 [쉽게 푸는 문제]
Author  : Hoseok Lee
Date    : 2021/04/22

https://www.acmicpc.net/problem/1292
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int seq[1001] = {0, };
    int a, b, sum = 0, num = 1, numCount = 0; // num: 저장할 수, numCount: num을 저장한 횟수
    
    for (int i = 1;i <= 1000;i++)
    {
        seq[i] = num;
        numCount++;
        
        if (num == numCount)
        {
            num++;
            numCount = 0;
        }
    }
    
    cin >> a >> b;
    for (int i = a;i <= b;i++)
        sum += seq[i];
    
    cout << sum << '\n';
    return 0;
}
