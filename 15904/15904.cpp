/*
Title   : BOJ_15904 [UCPC는 무엇의 약자일까?]
Author  : Hoseok Lee
Date    : 2021/09/21
https://github.com/hoshogi
https://www.acmicpc.net/problem/15904
*/

#include <iostream>
#include <queue>
#include <string>
using namespace std;

bool Check(string str)
{
    queue<char> q;
    
    q.push('U');
    q.push('C');
    q.push('P');
    q.push('C');
    
    for (int i = 0;i < str.length();i++)
    {
        if (str[i] == q.front())
            q.pop();
        if (q.empty())
            return true;
    }
    
    return  false;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string str;
    
    getline(cin, str);
    if (Check(str))
        cout << "I love UCPC" << '\n';
    else
        cout << "I hate UCPC" << '\n';
    
    return 0;
}
