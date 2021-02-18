/*
Title   : BOJ_9012 [괄호]
Author  : Hoseok Lee
Date    : 2021/02/18

https://www.acmicpc.net/problem/9012
https://www.github.com/hoshogi
*/

#include <iostream>
#include <string>
using namespace std;

string Valid(string s)
{
    int size = 0; // 스택의 크기
    
    for (int i = 0;i < s.length();i++)
    {
        if (s[i] == '(')
        {
            size++;
        }
        else
        {
            if (size == 0)
                return "NO";
            else
                size--;
        }
    }
    if (size == 0)
        return "YES";
    else
        return "NO";
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    string s;
    
    cin >> t;
    cin.ignore();
    
    while (t--) {
        getline(cin, s);
        cout << Valid(s) << '\n';
    }
    
    return 0;
}
