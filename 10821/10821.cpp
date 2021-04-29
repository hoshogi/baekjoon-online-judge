/*
Title   : BOJ_10821 [정수의 개수]
Author  : Hoseok Lee
Date    : 2021/04/29
 
https://www.acmicpc.net/problem/10821
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int count = 1;
    string str;
    
    cin >> str;
    for (int i = 0;i < str.length();i++)
    {
        if (str[i] == ',')
            count++;
    }
    
    cout << count << '\n';
    return 0;
}
