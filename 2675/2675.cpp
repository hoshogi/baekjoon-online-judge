/*
Title   : BOJ_2675 [문자열 반복]
Author  : Hoseok Lee
Date    : 2021/02/19

https://www.acmicpc.net/problem/2675
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int t, r;
    string str;
    
    cin >> t;
    
    while (t--)
    {
        cin >> r >> str;
        
        for (int i = 0;i < str.length();i++)
        {
            for(int j = 0;j < r;j++)
            {
                cout << str[i];
            }
        }
        cout << '\n';
    }
    
    return 0;
}
