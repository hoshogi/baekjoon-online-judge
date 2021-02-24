/*
Title   : BOJ_5622 [다이얼]
Author  : Hoseok Lee
Date    : 2021/02/24

https://www.acmicpc.net/problem/5622
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int count = 0;
    string word;
    
    cin >> word;
    for (int i = 0;i < word.length();i++)
    {
        switch (word[i]) {
            case 'A':
            case 'B':
            case 'C':
                count += 3;
                break;
            case 'D':
            case 'E':
            case 'F':
                count += 4;
                break;
            case 'G':
            case 'H':
            case 'I':
                count += 5;
                break;
            case 'J':
            case 'K':
            case 'L':
                count += 6;
                break;
            case 'M':
            case 'N':
            case 'O':
                count += 7;
                break;
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
                count += 8;
                break;
            case 'T':
            case 'U':
            case 'V':
                count += 9;
                break;
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
                count += 10;
                break;
        }
    }
    
    cout << count << '\n';
    return 0;
}
