/*
Title   : BOJ_5086 [배수와 약수]
Author  : Hoseok Lee
Date    :2021/04/07

https://www.acmicpc.net/problem/5086
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b;
    
    while(true)
    {
        cin >> a >> b;
        
        if (a == 0 && b == 0)
            break;
        if (a % b == 0)
            cout << "multiple" << '\n';
        else if (b % a == 0)
            cout << "factor" << '\n';
        else
            cout << "neither" << '\n';
    }
    
    return 0;
}
