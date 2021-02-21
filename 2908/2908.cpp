/*
Title   : BOJ_2908 [상수]
Author  : Hoseok Lee
Date    : 2021/02/21
 
https://www.acmicpc.net/problem/2908
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int num1, num2;
    string str1, str2;
    stack <char> s1, s2;
    
    cin >> str1 >> str2;
    for (int i = 0;i < 3;i++)
    {
        s1.push(str1[i]);
        s2.push(str2[i]);
    }
    
    for (int i = 0;i < 3;i++)
    {
        str1[i] = s1.top();
        str2[i] = s2.top();
        
        s1.pop();
        s2.pop();
    }
    
    // char를 int로 변환
    // ASCII Code에서 0은 48부터 시작하므로 48을 빼주면 숫자를 얻을 수 있다
    num1 = (str1[0] - 48) * 100 + (str1[1] - 48) * 10 + str1[2] - 48;
    num2 = (str2[0] - 48) * 100 + (str2[1] - 48) * 10 + str2[2] - 48;
    
    if (num1 > num2)
        cout << num1 << '\n';
    else
        cout << num2 << '\n';
    
    return 0;
}
