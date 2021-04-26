/*
Title   : BOJ_1264 [모음의 개수]
Author  : Hoseok Lee
Date    : 2021/04/26
 
https://www.acmicpc.net/problem/1264
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
    string str;
    
    while (true)
    {
        getline(cin, str);
        if (str[0] == '#' && str[1] == '\0')
            break;
        
        for (int i = 0;i < str.length();i++)
        {
            switch (str[i])
            {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                    count++;
            }
        }
        cout << count << '\n';
        count = 0;
    }
    
    return 0;
}
