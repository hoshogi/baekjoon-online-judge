/*
Title   : BOJ_17413 [단어 뒤집기 2]
Author  : Hoseok Lee
Date    : 2021/09/19
https://github.com/hoshogi
https://www.acmicpc.net/problem/17413
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string str, word;
    bool tag = false;
    
    getline(cin, str);
    for (int i = 0;i < str.length();i++)
    {
        if (tag == false)
        {
            if (str[i] == '<')
            {
                reverse(word.begin(), word.end());
                cout << word << '<';
                word = "";
                tag = true;
            }
            else if (str[i] == ' ')
            {
                reverse(word.begin(), word.end());
                cout << word << ' ';
                word = "";
            }
            else if (i == str.length() - 1)
            {
                word += str[i];
                reverse(word.begin(), word.end());
                cout << word;
            }
            else
                word += str[i];
        }
        else
        {
            if (str[i] == '>')
            {
                cout << str[i];
                tag = false;
            }
            else
                cout << str[i];
        }
    }
    return 0;
}
