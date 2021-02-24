/*
Title   : BOJ_2941 [크로아티아 알파벳]
Author  : Hoseok Lee
Date    : 2021/02/24

https://www.acmicpc.net/problem/2941
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int count = 0;
    string word;
    
    cin >> word;
    for (int i = 0;i < word.length(); )
    {
        if (word[i] == 'c')
        {
            if (word[i + 1] == '=' || word[i + 1] == '-')
            {
                count++;
                i += 2;
            }
            else
            {
                count++;
                i++;
            }
        }
        else if (word[i] == 'd')
        {
            if (word[i + 1] == 'z' && word[i + 2] == '=')
            {
                count++;
                i += 3;
            }
            else if (word[i + 1] == '-')
            {
                count++;
                i += 2;
            }
            else
            {
                count++;
                i++;
            }
        }
        else if (word[i] == 'l' && word[i + 1] == 'j')
        {
            count++;
            i += 2;
        }
        else if (word[i] == 'n' && word[i + 1] == 'j')
        {
            count++;
            i += 2;
        }
        else if (word[i] == 's' && word[i + 1] == '=')
        {
            count++;
            i += 2;
        }
        else if (word[i] == 'z' && word[i + 1] == '=')
        {
            count++;
            i += 2;
        }
        else
        {
            count++;
            i++;
        }
    }
    
    cout << count << '\n';
    return 0;
}
