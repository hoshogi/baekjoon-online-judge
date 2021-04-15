/*
Title   : BOJ_2693 [N번째 큰 수]
Author  : Hoseok Lee
Date    : 2021/04/15
 
https://www.acmicpc.net/problem/2693
https://github.com/hoshogi
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    int a[10];
    
    cin >> t;
    while(t--)
    {
        for(int i = 0;i < 10 ;i++)
            cin >> a[i];
        
        sort(a, a + 10);
        cout << a[7] << '\n';
    }
    
    return 0;
}
