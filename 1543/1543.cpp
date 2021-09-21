/*
Title   : BOJ_1543 [문서 검색]
Author  : Hoseok Lee
Date    : 2021/09/21
https://github.com/hoshogi
https://www.acmicpc.net/problem/1543
*/

#include <iostream>
#include <string>
using namespace std;

int Search(string sen, string word)
{
    int count = 0;
    
    for (int i = 0;i < sen.length();i++)
    {
        if (sen[i] == word[0])
        {
            for (int j = 0;j < word.length();j++)
            {
                if (sen[i + j] != word[j])
                    break;
                if (j == word.length() - 1)
                {
                    count++;
                    i += word.length() - 1;
                }
            }
        }
    }
    
    return count;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string sen, word;
    
    getline(cin, sen);
    getline(cin, word);
        
    cout << Search(sen, word) << '\n';
    return 0;
}
