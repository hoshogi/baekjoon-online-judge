/*
Title   : BOJ_11966 [2의 제곱인가?]
Author  : Hoseok Lee
Date    : 2021/08/04
https://github.com/hoshogi
https://www.acmicpc.net/problem/11966
*/

#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int num;
    
    cin >> num;
    while(true)
    {
        if (num == 1)
        {
            cout << 1 << '\n';
            break;
        }
        if (num % 2 == 0)
            num /= 2;
        else
        {
            cout << 0 << '\n';
            break;
        }
    }
    
    return 0;
}
