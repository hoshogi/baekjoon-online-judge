/*
Title   : BOJ_1225 [이상한 곱셈]
Author  : Hoseok Lee
Date    : 2021/05/01
 
https://www.acmicpc.net/problem/1225
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long result = 0; // 결과값이 int의 범위를 넘는 경우도 있어 long long으로 선언
    string str[2];
    
    for (int i = 0;i < 2;i++)
        cin >> str[i];
    
    for (int i = 0;i < str[0].length();i++)
        for (int j = 0;j < str[1].length();j++)
            result += (str[0][i] - '0') * (str[1][j] - '0');
    
    cout << result << '\n';
    return 0;
}
