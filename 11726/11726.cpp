/*
Title   : BOJ_11726 [2xn 타일링]
Author  : Hoseok Lee
Date    : 2021/06/22

https://www.acmicpc.net/problem/11726
https://github.com/hoshogi
*/

#include <iostream>
#define SIZE 1001
using namespace std;

/*
Dynamic Programming
 
D[i] = D[i - 1] + D[i - 2]
D[0] = 1, D[1] = 1, D[2] = 2
*/

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long d[SIZE] = {1, 1};
    int n;
    
    for (int i = 2;i < SIZE;i++)
    {
        d[i] = (d[i - 1] + d[i - 2]) % 10007;
    }
        
    cin >> n;
    cout << d[n] << '\n';
    
    return 0;
}
