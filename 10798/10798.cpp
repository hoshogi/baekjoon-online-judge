/*
Title   : BOJ_10798 [세로읽기]
Author  : Hoseok Lee
Date    :2021/04/10

https://www.acmicpc.net/problem/10798
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    char word[5][16] = {0, }; // 최대 15개의 글자를 입력 받으므로 열의 개수를 '\0'값 포함해서 16으로 설정
    
    for (int i = 0;i < 5;i++)
        cin.getline(word[i], 16);
    
    for (int j = 0;j < 16;j++)
    {
        for (int i = 0;i < 5;i++)
        {
            if (word[i][j] == '\n' || word[i][j] == 0)
                continue;
            else
                cout << word[i][j];
        }
    }
    
    return 0;
}
