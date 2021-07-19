/*
Title   : BOJ_1475 [방 번호]
Author  : Hoseok Lee
Date    : 2021/07/19
https://github.com/hoshogi
https://www.acmicpc.net/problem/1475
*/

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int num[10] = {0, };
    int count;
    
    string str;
    
    cin >> str;
    for (int i = 0;i < str.length();i++)
        num[str[i] - '0']++;
    
    count = (num[6] + num[9] + 1) / 2;
    
    for (int i = 0;i <= 9;i++)
        if (i != 6 && i != 9)
            count = max(count, num[i]);
    
    cout << count << '\n';
    return 0;
}
