/*
Title   : BOJ_1213 [팰린드롬 만들기]
Author  : Hoseok Lee
Date    : 2022/03/14
https://www.acmicpc.net/problem/1213
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int alphabet[26] = {0, };
    int count = 0;
    char c = 0;
    string str, word;
    
    cin >> str;
    for (int i = 0; i < str.length();i++)
        alphabet[str[i] - 'A']++;
    
    for (int i = 0;i < 26; i++)
    {
        if (alphabet[i] % 2 == 1)
        {
            count++;
            c = 'A' + i;
        }
    }
    
    if (count > 1)
        cout << "I'm Sorry Hansoo" << '\n';
    else
    {
        for (int i = 0; i < 26; i++)
        {
            for (int j = 0; j < alphabet[i] / 2; j++)
                word += (char)('A' + i);
        }
        
        for (int i = 0; i < word.length(); i++)
            cout << word[i];
        if (c != 0)
            cout << c;
        reverse(word.begin(), word.end());
        for (int i = 0; i < word.length(); i++)
            cout << word[i];
    }
    return 0;
}
