/*
Title   : BOJ_1159 [농구 경기]
Author  : Hoseok Lee
Date    : 2021/04/28
 
https://www.acmicpc.net/problem/1159
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, count = 0;
    int alphabet[26] = {0, };
    
    cin >> n;
    string* name = new string[n];
    
    for (int i = 0 ;i < n;i++)
    {
        cin >> name[i];
        alphabet[name[i][0] - 'a']++;
    }
    
    for (int i = 0;i < 26;i++)
    {
        if (alphabet[i] >= 5)
        {
            cout << (char)('a' + i);
            count++;
        }
    }
    
    if (count == 0)
        cout << "PREDAJA" << '\n';
    
    delete []name;
    return 0;
}
