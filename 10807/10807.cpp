/*
Title   : BOJ_10807 [개수 세기]
Author  : Hoseok Lee
Date    : 2021/04/28
 
https://www.acmicpc.net/problem/10807
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, v, count = 0;
    int num[100];
    
    cin >> n;
    for (int i = 0;i < n;i++)
        cin >> num[i];
    
    cin >> v;
    for (int i = 0;i < n;i++)
    {
        if (num[i] == v)
            count++;
    }
    
    cout << count << '\n';
    return 0;
}
