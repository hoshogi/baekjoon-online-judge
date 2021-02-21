/*
Title   : BOJ_2920 [음계]
Author  : Hoseok Lee
Date    : 2021/02/21
 
https://www.acmicpc.net/problem/2920
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
using namespace std;

string Scale(int num[])
{
    int ascending = 0, descending = 0;

    for (int i = 0;i < 8;i++)
    {
        if (num[i] == i + 1)
            ascending++;
        else if (num[i] == 8 - i)
            descending++;
        else
            return "mixed";
    }
    
    if (ascending == 8)
        return "ascending";
    else if (descending == 8)
        return "descending";
    else
        return "mixed";
}

int main(void)
{
    int num[8];
    
    for (int i = 0;i < 8;i++)
        cin >> num[i];
    
    cout << Scale(num) << '\n';
    return 0;
}
