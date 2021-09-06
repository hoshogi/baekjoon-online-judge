/*
Title   : BOJ_1855 [암호]
Author  : Hoseok Lee
Date    : 2021/09/06
https://github.com/hoshogi
https://www.acmicpc.net/problem/1855
*/

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int k;
    char board[200][20];
    string password;
    
    cin >> k >> password;
    for (int i = 0;i < password.length() / k;i++)
    {
        for (int j = 0;j < k;j++)
        {
            if (i % 2 == 0)
                board[i][j] = password[i * k + j];
            else
                board[i][k - j - 1] = password[i * k + j];
        }
    }
    
    for (int i = 0;i < k;i++)
    {
        for (int j = 0;j < password.length() / k;j++)
            cout << board[j][i];
    }
    
    return 0;
}
