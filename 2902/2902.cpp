/*
Title   : BOJ_2902 [KMP는 왜 KMP일까?]
Author  : Hoseok Lee
Date    : 2021/04/14
 
https://www.acmicpc.net/problem/2902
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string str;
    
    cin >> str;
    cout << str[0];
    for (int i = 1;i < str.length();i++)
    {
        if (str[i] == '-')
            cout << str[i + 1];
    }
    
    return 0;
}
