/*
Title   : BOJ_2145 [숫자 놀이]
Author  : Hoseok Lee
Date    : 2021/05/07

https://www.acmicpc.net/problem/2145
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    
    while (true)
    {
        string num;
        
        cin >> num;
        if (num[0] == '0')
            break;
        
        while (num.length() != 1)
        {
            int sum = 0;
            
            for (int i = 0;i < num.length();i++)
                sum += num[i] -'0';
            
            num = to_string(sum);
        }
            
        cout << num << '\n';
    }
    
    return 0;
}
