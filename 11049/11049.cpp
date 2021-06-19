/*
Title   : BOJ_11049 [행렬 곱셈 순서]
Author  : Hoseok Lee
Date    : 2021/06/19

https://www.acmicpc.net/problem/11049
https://github.com/hoshogi
*/

#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

/*
Dynamic Programming
모든 행렬을 곱하는데 필요한 곱셈 연산 횟수의 최소값 구하기

i <= k <= j - 1
M[i][j] = min(M[i][k] + M[k + 1][j] + d[i - 1] * d[k] * d[j]);

M[i][i] = 0;
*/

int MinMult(int n, int d[])
{
    int m[501][501] = {0, };
    for (int i = 0;i < 501;i++)
        for (int j = 0;j < 501;j++)
            if (i != j)
                m[i][j] = INT_MAX;
    
    for (int diagonal = 1;diagonal <= n - 1;diagonal++)
    {
        for (int i = 1;i <= n - diagonal;i++)
        {
            int j = i + diagonal;
            
            for (int k = i;k <= j - 1;k++)
                m[i][j] = min(m[i][j], m[i][k] + m[k + 1][j] + d[i - 1]*d[k]*d[j]);
        }
    }
    
    return m[1][n];
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int d[501] = {0, };
   
    int n;
    
    cin >> n;
    for (int i = 0;i < n;i++)
    {
        int r, c;
        
        cin >> r >> c;
        d[i] = r;
        d[i + 1] = c;
    }
    
    cout << MinMult(n, d) << '\n';
    return 0;
}
