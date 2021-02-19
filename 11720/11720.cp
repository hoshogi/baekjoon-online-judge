/*
Title   : BOJ_11720 [숫자의 합]
Author  : Hoseok Lee
Date    : 2021/02/19
 
https://www.acmicpc.net/problem/11720
https://www.github.com/hoshogi
*/

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, sum = 0;
    string str;
    
    cin >> n;
    cin.ignore();
    
    getline(cin, str);
    for(int i = 0;i < str.length();i++)
    {
        sum += str[i] - 48;
    }
    
    cout << sum << '\n';
    return 0;
}
