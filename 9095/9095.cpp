/*
Title   : BOJ_9095 [1, 2, 3 더하기]
Author  : Hoseok Lee
Date    : 2021/06/22

https://www.acmicpc.net/problem/9095
https://github.com/hoshogi
*/

#include <iostream>
#define SIZE 11
using namespace std;

/*
Dynamic Programming
 
D[i] = D[i - 1] + D[i - 2] + D[i - 3]
D[0] = 1, D[1] = 1, D[2] = 2
-> 0을 만드는 방법도 한가지이다
-> 수를 아무것도 사용하지 않을때
*/

#include <iostream>
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    int d[SIZE] = {1, 1, 2, };
    
    for (int i = 3;i < SIZE;i++)
        d[i] = d[i - 1] + d[i - 2] + d[i - 3];
    
    cin >> t;
    while(t--)
    {
        int n;
        
        cin >> n;
        cout << d[n] << '\n';
    }
    
    return 0;
}
