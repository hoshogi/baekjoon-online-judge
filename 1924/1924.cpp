/*
Title   : BOJ_1924 [2007년]
Author  : Hoseok Lee
Date    : 2021/08/15
https://github.com/hoshogi
https://www.acmicpc.net/problem/1924
*/

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int x, y;
    int sum = 0;
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string day[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    
    cin >> x >> y;
    for (int i = 0;i < x - 1;i++)
        sum += month[i];
    
    sum += y;
    cout << day[sum % 7] << '\n';
    return 0;
}
