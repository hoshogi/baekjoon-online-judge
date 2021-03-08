/*
Title   : BOJ_2740 [행렬 곱셈]
Author  : Hoseok Lee
Date    : 2021/03/08

https://www.acmicpc.net/problem/2740
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m, k;
    
    cin >> n >> m;
    
    /*
    2차원 배열 동적 할당
    int** array = new int* [row];
    for (int i = 0;i < row;i++)
        array[i] = new int [column];
    */
    
    int** matrix1 = new int* [n];
    for (int i = 0;i < n;i++)
        matrix1[i] = new int [m];
    
    for (int i = 0;i < n;i++)
        for (int j = 0;j < m;j++)
            cin >> matrix1[i][j];
    
    cin >> m >> k;
    int** matrix2 = new int* [m];
    for (int i = 0;i < m;i++)
        matrix2[i] = new int [k];
    
    for (int i = 0;i < m;i++)
        for (int j = 0;j < k;j++)
            cin >> matrix2[i][j];
    
    int** matrix3 = new int* [n];
    for (int i = 0;i < n;i++)
        matrix3[i] = new int [k];
    
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < k;j++)
        {
            matrix3[i][j] = 0;
            
            for (int l = 0;l < m;l++)
            {
                matrix3[i][j] = matrix3[i][j] + matrix1[i][l] * matrix2[l][j];
            }
        }
    }
    
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < k;j++)
        {
            cout << matrix3[i][j] << ' ';
        }
        cout << '\n';
    }
    
    return 0;
}
