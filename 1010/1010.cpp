/*
Title   : BOJ_1010 [다리 놓기]
Author  : Hoseok Lee
Date    : 2021/05/12

https://www.acmicpc.net/problem/1010
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

/*
Binomial Coefficient Using Dynamic Programming
 
nCk = (n-1)Ck + (n-1)C(k-1) 성질 이용
 
B[i][j]
1) 0 < j < i
-> B[i - 1][j] + B[i - 1][j - 1]
 
2) j = 0 or j = i
-> 1
*/

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    int b[31][31] = {0, };
    
    for (int i = 0;i < 31;i++)
        for (int j = 0;j <= i;j++)
            if (j == 0 || j == i)
                b[i][j] = 1;
            else
                b[i][j] = b[i - 1][j] + b[i - 1][j - 1];
    
    cin >> t;
    while (t--)
    {
        int n, m;
        
        cin >> n >> m;
        cout << b[m][n] << '\n';
    }
    
    return 0;
}
