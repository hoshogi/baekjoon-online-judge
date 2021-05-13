/*
Title   : BOJ_10179 [쿠폰]
Author  : Hoseok Lee
Date    : 2021/05/13

https://www.acmicpc.net/problem/10170
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
    int t;
    
    cin >> t;
    while (t--)
    {
        double price;
        
        cin >> price;
        printf("$%.2lf\n", 0.8 * price);
    }
    
    return 0;
}
