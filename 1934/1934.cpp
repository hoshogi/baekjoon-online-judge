/*
Title   : BOJ_1934 [최소공배수]
Author  : Hoseok Lee
Date    : 2021/04/13
 
https://www.acmicpc.net/problem/1934
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int Gcd(int a, int b)
{
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    
    return a;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    
    cin >> t;
    while(t--)
    {
        int a, b;
        
        cin >> a >> b;
        cout << a * b / Gcd(a, b) << '\n';
    }
    
    return 0;
}
