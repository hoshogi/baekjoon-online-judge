/*
Title   : BOJ_1427 [소트인사이드]
Author  : Hoseok Lee
Date    : 2021/02/24

https://www.acmicpc.net/problem/1427
https://github.com/hoshogi
*/

#include<iostream>
#include<string>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    char tmp;
    string num;
    
    cin >> num;
    
    // Selection Sort (선택 정렬)
    for (int i = 0;i < num.length();i++)
    {
        for (int j = i + 1;j < num.length();j++)
        {
            if (num[i] < num[j])
            {
                tmp = num[i];
                num[i] = num[j];
                num[j] = tmp;
            }
        }
    }
    
    cout << num << '\n';
    return 0;
}
