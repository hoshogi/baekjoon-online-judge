/*
Title   : BOJ_10988 [팰린드롬인지 확인하기]
Author  : Hoseok Lee
Date    : 2021/05/09

https://www.acmicpc.net/problem/4673
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
using namespace std;

bool CheckPalindrome(string str)
{
    for (int i = 0;i < str.length() / 2;i++)
        if (str[i] != str[str.length() - i - 1])
            return false;
    
    return true;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string str;
    
    cin >> str;
    if (CheckPalindrome(str) == true)
        cout << 1 << '\n';
    else
        cout << 0 << '\n';
    
    return 0;
}
