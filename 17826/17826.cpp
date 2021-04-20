/*
Title   : BOJ_17826 [나의 학점은?]
Author  : Hoseok Lee
Date    : 2021/04/20

https://www.acmicpc.net/problem/17826
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int score[50], myScore, rank;
    
    for (int i = 0;i < 50;i++)
        cin >> score[i];
    
    cin >> myScore;
    for (int i = 0;i < 50;i++)
    {
        if (score[i] == myScore)
            rank = i + 1;
    }
        
    if (rank >= 1 && rank <= 5)
        cout << "A+" << '\n';
    else if (rank >= 6 && rank <= 15)
        cout << "A0" << '\n';
    else if (rank >= 16 && rank <= 30)
        cout << "B+" << '\n';
    else if (rank >= 31 && rank <= 35)
        cout << "B0" << '\n';
    else if (rank >= 36 && rank <= 45)
        cout << "C+" << '\n';
    else if (rank >= 46 && rank <= 48)
        cout << "C0" << '\n';
    else if (rank >= 49 && rank <= 50)
        cout << "F" << '\n';
    
    return 0;
}
