/*
Title   : BOJ_4673 [셀프 넘버]
Author  : Hoseok Lee
Date    : 2021/07/11
 
https://www.acmicpc.net/problem/4673
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    bool checked[10001] = {true, false, };
    
    for (int i = 1;i <= 10000;i++)
    {
        if (checked[i] == false)
            cout << i << '\n';
        
        int d = i;
        string num = to_string(i);
        for (int j = 0;j < num.length();j++)
            d += num[j] - '0';
        
        checked[d] = true;
    }
    
    return 0;
}
