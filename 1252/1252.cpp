/*
Title   : BOJ_1252 [이진수 덧셈]
Author  : Hoseok Lee
Date    : 2021/09/11
https://github.com/hoshogi
https://www.acmicpc.net/problem/1252
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string x, y;
    string result = "";
    int carry = 0;
    
    cin >> x >> y;
    reverse(x.begin(), x.end());
    reverse(y.begin(), y.end());
    
    // 겹치는 자리수 까지의 연산
    for (int i = 0;i < min(x.length(), y.length());i++)
    {
        if (x[i] == '0' && y[i] == '0')
        {
            result = to_string(carry) + result;
            carry = 0;
        }
        else if (x[i] == '1' && y[i] == '1')
        {
            result = to_string(carry) + result;
            carry = 1;
        }
        else
        {
            if (carry == 0)
                result = "1" + result;
            else if (carry == 1)
                result = "0" + result;
        }
    }

    // 자리수 더 긴 것, 짧은 것 구분
    string longer = x, shorter = y;
    if (x.length() < y.length())
    {
        longer = y;
        shorter = x;
    }
    
    // 나머지 자리수 연산
    for (int i = shorter.length();i < longer.length();i++)
    {
        if (longer[i] == '0')
        {
            result = to_string(carry) + result;
            carry = 0;
        }
        else if (longer[i] == '1')
        {
            if (carry == 0)
                result = "1" + result;
            else if (carry == 1)
                result = "0" + result;
        }
    }
    
    // 마지막 carry 값 처리
    if (carry == 1)
        result = "1" + result;
    
    int index = 0;
    
    // 결과 값 앞에 0 제거
    for (int i = 0;i < result.length();i++)
    {
        if (result[i] == '1')
        {
            index = i;
            break;
        }
        
        // 결과 값이 0으로만 이루어져 있을때
        if (i == result.length() - 1)
            result = "0";
    }
    
    for (int i = index;i < result.length();i++)
        cout << result[i];
    return 0;
}
