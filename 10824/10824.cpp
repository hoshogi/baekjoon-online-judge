/*
Title   : BOJ_10824 [네 수]
Author  : Hoseok Lee
Date    : 2021/09/20
https://github.com/hoshogi
https://www.acmicpc.net/problem/10824
*/

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string str[4];
    long long result = 0;
    
    for (int i = 0;i < 4;i++)
        cin >> str[i];
    
    str[0] += str[1];
    str[2] += str[3];
    result += stoll(str[0]) + stoll(str[2]);
    
    cout << result << '\n';
}
