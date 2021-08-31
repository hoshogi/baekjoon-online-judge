/*
Title   : BOJ_11655 [ROT13]
Author  : Hoseok Lee
Date    : 2021/08/31
https://github.com/hoshogi
https://www.acmicpc.net/problem/11655
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
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 13;
            if (str[i] > 'Z')
                str[i] += 'A' - 'Z' - 1;
        }
        else if ( str[i] >= 'a' && str[i] <= 'z' )
        {
            if (str[i] >= 'n')
            {
                str[i] += 'a' - 'z' + 12;
            }
            else
                str[i] += 13;
        }
    }
    
    cout << str << '\n';
    return 0;
}
