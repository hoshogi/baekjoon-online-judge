/*
Title   : BOJ_1357 [뒤집힌 덧셈]
Author  : Hoseok Lee
Date    : 2021/09/13
https://github.com/hoshogi
https://www.acmicpc.net/problem/1357
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string num[2], result;
    int sum;
    
    for (int i = 0;i < 2;i++)
    {
        cin >> num[i];
        reverse(num[i].begin(), num[i].end());
    }
    
    sum = stoi(num[0]) + stoi(num[1]);
    result = to_string(sum);
    reverse(result.begin(), result.end());
    sum = stoi(result);
    cout << sum << '\n';
    return 0;
}
