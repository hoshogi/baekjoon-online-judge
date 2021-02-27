/*
Title   : BOJ_11721 [열 개씩 끊어 출력하기]
Author  : Hoseok Lee
Date    : 2021/02/27
 
https://www.acmicpc.net/problem/11721
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
    for(int i = 0;i < str.length();i++)
    {
        cout << str[i];
        
        if(i % 10 == 9)
            cout << '\n';
    }
    
    return 0;
}
