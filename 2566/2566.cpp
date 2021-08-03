/*
Title   : BOJ_2566 [최댓값]
Author  : Hoseok Lee
Date    : 2021/08/03
https://github.com/hoshogi
https://www.acmicpc.net/problem/2566
*/

#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int max = 0;
    int max_row, max_col;
    
    for (int i = 0;i < 9;i++)
    {
        for (int j = 0;j < 9;j++)
        {
            int num;
            
            cin >> num;
            if (num > max)
            {
                max = num;
                max_row = i + 1;
                max_col = j + 1;
            }
        }
    }
    
    cout << max << '\n';
    cout << max_row << ' ' << max_col << '\n';
    return 0;
}
