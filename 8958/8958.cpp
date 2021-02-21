/*
Title   : BOJ_8958 [OX퀴즈]
Author  : Hoseok Lee
Date    : 2021/02/21
 
https://www.acmicpc.net/problem/8958
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, score = 1, result = 0;
    string quiz;
    
    cin >> n;
    cin.ignore();
    
    while (n--)
    {
        getline(cin, quiz);
        
        for (int i = 0;i < quiz.length();i++)
        {
            if (quiz[i] == 'O')
            {
                result += score;
                score++;
            }
            else
                score = 1;
        }
        
        cout << result << '\n';
        result = 0;
        score = 1;
    }
    return 0;
}
