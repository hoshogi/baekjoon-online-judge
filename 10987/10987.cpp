/*
Title   : BOJ_10987 [모음의 개수]
Author  : Hoseok Lee
Date    : 2021/04/25

https://www.acmicpc.net/problem/10987
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int count = 0;
    string word;
    
    cin >> word;
    for (int i = 0;i < word.length();i++)
    {
        switch (word[i])
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                count++;
                break;
        }
    }
    
    cout << count << '\n';
    return 0;
}
