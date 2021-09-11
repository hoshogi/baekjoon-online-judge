/*
Title   : BOJ_11719 [그대로 출력하기 2]
Author  : Hoseok Lee
Date    : 2021/09/12
https://github.com/hoshogi
https://www.acmicpc.net/problem/11719
*/

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string str;
    
    // EOF 입력시 while stop
    while (getline(cin, str))
    {
        cout << str << '\n';
    }
    
    return 0;
}
