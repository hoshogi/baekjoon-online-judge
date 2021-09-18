/*
Title   : BOJ_11656 [접미사 배열]
Author  : Hoseok Lee
Date    : 2021/09/19
https://github.com/hoshogi
https://www.acmicpc.net/problem/11656
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string word;
    
    cin >> word;
    string suffix[word.length()];
    
    for (int i = 0;i < word.length();i++)
        suffix[i] = word.substr(i, word.length());
    
    sort(suffix, suffix + word.length());
    for (int i = 0;i < word.length() ;i++)
        cout << suffix[i] << '\n';
    return 0;
}
