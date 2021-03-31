/*
Title   : BOJ_9086 [문자열]
Author  : Hoseok Lee
Date    : 2021/03/31
 
https://www.acmicpc.net/problem/9086
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
     
    cin >> t;
    while(t--)
    {
        string str;
        
        cin >> str;
        cout << str[0] << str[str.length() - 1] << '\n';
    }
    
    return 0;
}
