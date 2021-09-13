/*
Title   : BOJ_6996 [애너그램]
Author  : Hoseok Lee
Date    : 2021/09/14
https://github.com/hoshogi
https://www.acmicpc.net/problem/6996
*/

#include <iostream>
#include <string>
using namespace std;

bool CheckAnagrams(string word[2])
{
    int count[2][26] = {0, };
    
    for (int i = 0;i < 2;i++)
    {
        for (char c : word[i])
            count[i][c - 'a']++;
    }
        
    for (int i = 0;i < 26;i++)
    {
        if (count[0][i] != count[1][i])
            return false;
    }
    
    return true;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 0;
    
    cin >> t;
    while (t--)
    {
        string word[2];
        
        cin >> word[0] >> word[1];
        if (CheckAnagrams(word))
            cout << word[0] << " & " << word[1] << " are anagrams." << '\n';
        else
            cout << word[0] << " & " << word[1] << " are NOT anagrams." << '\n';

    }
    
    return 0;
}
