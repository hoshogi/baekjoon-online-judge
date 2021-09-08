/*
Title   : BOJ_1236 [성 지키기]
Author  : Hoseok Lee
Date    : 2021/09/08
https://github.com/hoshogi
https://www.acmicpc.net/problem/1236
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    int numX = 0, numY = 0;
    bool checkedX[50] = {false, };
    bool checkedY[50] = {false, };
    
    cin >> n >> m;
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < m;j++)
        {
            char c;
            
            cin >> c;
            if (c == 'X')
            {
                if (checkedX[i] == false)
                {
                    checkedX[i] = true;
                    numX++;
                }
                
                if (checkedY[j] == false)
                {
                    checkedY[j] = true;
                    numY++;
                }
            }
        }
    }
    
    cout << max((n - numX), (m - numY)) << '\n';
    return 0;
}
