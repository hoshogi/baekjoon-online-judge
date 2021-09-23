/*
Title   : BOJ_9324 [진짜 메시지]
Author  : Hoseok Lee
Date    : 2021/09/24
https://github.com/hoshogi
https://www.acmicpc.net/problem/9324
*/

#include <iostream>
#include <string>
using namespace std;

bool Check(string str)
{
    int alphabet[26] = {0, };
    
    for (int i = 0;i < str.length();i++)
    {
        alphabet[str[i] - 'A']++;
        if (alphabet[str[i] - 'A'] % 3 == 0)
        {
            if (i == str.length() - 1)
                return false;
            if (str[i] != str[i + 1])
                return false;
            
            i += 1;
        }
    }
    return true;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    
    cin >> n;
    while (n--)
    {
        string str;
        
        cin >> str;
        if (Check(str))
            cout << "OK" << '\n';
        else
            cout << "FAKE" << '\n';
    }
    return 0;
}
