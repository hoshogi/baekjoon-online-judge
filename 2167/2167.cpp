/*
Title   : BOJ_2167 [2차원 배열의 합]
Author  : Hoseok Lee
Date    : 2021/05/07

https://www.acmicpc.net/problem/2167
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m, k;
    int num[300][300] = {0, };
    
    cin >> n >> m;
    for (int i = 0;i < n;i++)
        for (int j = 0;j < m;j++)
            cin >> num[i][j];
    
    cin >> k;
    while (k--)
    {
        int i, j, x, y, sum = 0;
        
        cin >> i >> j >> x >> y;
        for (int a = i - 1;a <= x - 1;a++)
            for (int b = j - 1;b <= y - 1;b++)
                sum += num[a][b];
        
        cout << sum << '\n';
    }
                        
    return 0;
}
