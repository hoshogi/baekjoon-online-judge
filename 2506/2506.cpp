/*
Title   : BOJ_2506 [점수계산]
Author  : Hoseok Lee
Date    : 2021/08/02
https://github.com/hoshogi
https://www.acmicpc.net/problem/2506
*/

#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int num[101];
    int n;
    int score = 0;
    int sum = 0;
    
    cin >> n;
    for (int i = 0;i < n;i++)
    {
        cin >> num[i];
        if (i >= 1)
        {
            if(num[i] == 1)
            {
                score += 1;
                sum += score;
            }
            else
                score = 0;
        }
        else
        {
            sum += num[i];
            score = num[i];
        }
    }
    
    cout << sum << '\n';
    return 0;
}
