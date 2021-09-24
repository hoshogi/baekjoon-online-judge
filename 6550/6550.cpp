/*
Title   : BOJ_6550 [부분 문자열]
Author  : Hoseok Lee
Date    : 2021/09/24
https://github.com/hoshogi
https://www.acmicpc.net/problem/6550
*/

#include <iostream>
#include <string>
using namespace std;

bool Check(string s, string t)
{
    int j = 0;
    
    for (int i = 0;i < t.length();i++)
    {
        if (s[j] == t[i])
        {
            if (j == s.length() - 1)
                return true;
            j++;
        }
    }
    return false;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s, t;
    
    while (cin >> s >> t)
    {
        if (Check(s, t))
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }
    
    return 0;
}
