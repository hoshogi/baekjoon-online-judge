/*
Title   : BOJ_1145 [적어도 대부분의 배수]
Author  : Hoseok Lee
Date    : 2021/04/22

https://www.acmicpc.net/problem/1145
https://github.com/hoshogi
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int num[5];
    
    for(int i = 0;i < 5;i++)
        cin >> num[i];
    
    sort(num, num + 5);
    // 세번째로 큰 수 부터 시작해서 적어도 세 개로 나누어 지는 수가 나올때까지 반복
    for (int i = num[2]; ;i++)
    {
        int count = 0;
        
        for (int j = 0;j < 5;j++)
        {
            if (i % num[j] == 0)
                count ++;
        }
        
        if (count >= 3)
        {
            cout << i << '\n';
            break;
        }
    }
    
    return 0;
}
