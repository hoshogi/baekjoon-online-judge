/*
Title   : BOJ_2954 [창영이의 일기장]
Author  : Hoseok Lee
Date    : 2021/06/21

https://www.acmicpc.net/problem/2954
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
    
    getline(cin, str);
    for (int i = 0;i < str.length();i++)
    {
        switch(str[i])
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                cout << str[i];
                i += 2;
                break;
            default:
                cout << str[i];
                break;
        }
    }
    
    return 0;
}
