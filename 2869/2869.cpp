/*
Title   : BOJ_2869 [달팽이는 올라가고 싶다]
Author  : Hoseok Lee
Date    : 2021/07/12
 
https://www.acmicpc.net/problem/2869
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b, v;
    
    cin >> a >> b >> v;
    if ((v - a) % (a - b) == 0)
        cout << (v - a) / (a - b) + 1 << '\n';
    else
        cout << (v - a) / (a - b) + 2 << '\n';
    
    return 0;
}
