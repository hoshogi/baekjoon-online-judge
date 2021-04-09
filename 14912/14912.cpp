/*
Title   : BOJ_14912 [숫자 빈도수]
Author  : Hoseok Lee
Date    :2021/04/10

https://www.acmicpc.net/problem/14912
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, d, count = 0;
    
    cin >> n >> d;
    for (int i = 1;i <= n;i++)
    {
        string num = to_string(i);
        for (int j = 0;j < num.length();j++)
            if (d == num[j] - '0')
                count++;
    }
    
    cout << count << '\n';
    return 0;
}
