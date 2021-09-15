/*
Title   : BOJ_2703 [Cryptoquote]
Author  : Hoseok Lee
Date    : 2021/09/15
https://github.com/hoshogi
https://www.acmicpc.net/problem/2703
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
    cin.ignore();
    
    while (t--)
    {
        int alphabet[26] = {0, };
        string str, encoding;
        
        getline(cin, str);
        cin >> encoding;
        cin.ignore();
        
        for (int i = 0;i < 26;i++)
            alphabet[i] = encoding[i] - 'A';
        
        for (int i = 0;i < str.length();i++)
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
                str[i] = 'A' + alphabet[str[i] - 'A'];
        }
        
        cout << str << '\n';
    }
    
    return 0;
}
