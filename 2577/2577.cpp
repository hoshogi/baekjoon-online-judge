/*
Title   : BOJ_2577 [숫자의 개수]
Author  : Hoseok Lee
Date    : 2021/02/21
 
https://www.acmicpc.net/problem/2577
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
using namespace std;

int main (void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int num[3], mul = 1;
    int count[10] = {0};
    string str;
    
    for (int i = 0;i < 3;i++)
    {
        cin >> num[i];
        mul *= num[i];
    }
    
    str = to_string(mul);
    
    for (int i = 0;i < str.length();i++)
        count[str[i] - 48]++;
    
    for (int i = 0;i < 10;i++)
        cout << count[i] << '\n';
    
    return 0;
}
