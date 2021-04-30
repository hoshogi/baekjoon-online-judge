/*
Title   : BOJ_2592 [대표값]
Author  : Hoseok Lee
Date    : 2021/04/30
 
https://www.acmicpc.net/problem/2592
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int sum = 0, maxCount = 0;
    int num[10];
    int numCount[100] = {0, };
    
    for (int i = 0;i < 10;i++)
    {
        cin >> num[i];
        
        sum += num[i];
        numCount[num[i] / 10]++;
    }
    
    cout << sum / 10 << '\n';
    
    for (int i = 1;i < 100;i++)
    {
        if (numCount[i] > maxCount)
            maxCount = numCount[i];
    }
    
    for (int i = 0;i < 100;i++)
    {
        if (numCount[i] == maxCount)
        {
            cout << i * 10 << '\n';
            break;
        }
    }
    
    return 0;
}
