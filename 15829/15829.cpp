/*
Title   : BOJ_15829 [Hashing]
Author  : Hoseok Lee
Date    : 2021/09/01
https://github.com/hoshogi
https://www.acmicpc.net/problem/15829
*/

#include <iostream>
#include <string>
#define M 1234567891
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long hash = 0;
    string str;
    
    cin >> n;
    cin >> str;
    for (int i = 0;i < n;i++)
    {
        long long a = str[i] - 'a' + 1;
        
        for (int j = 0;j < i;j++)
        {
            a *= 31;
            a %= M;
        }
        
        hash += a;
        hash %= M;
    }
    
    cout << hash << '\n';
    return 0;
}
