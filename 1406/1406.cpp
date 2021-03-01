/*
Title   : BOJ_1406 [에디터]
Author  : Hoseok Lee
Date    : 2021/03/01

https://www.acmicpc.net/problem/1406
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
    
    string str;
    // 커서를 기준으로 스택을 2개 만든다
    stack<char> left, right;
    int m;
    
    getline(cin, str);
    for (int i = 0;i < str.length();i++)
        left.push(str[i]);
    
    cin >> m;
    while (m--)
    {
        char cmd;
        
        cin >> cmd;
        if (cmd == 'L')
        {
            if (!left.empty())
            {
                right.push(left.top());
                left.pop();
            }
        }
        else if (cmd == 'D')
        {
            if (!right.empty())
            {
                left.push(right.top());
                right.pop();
            }
        }
        else if (cmd == 'B')
        {
            if (!left.empty())
                left.pop();
        }
        else if (cmd == 'P')
        {
            char c;
            cin >> c;
            left.push(c);
        }
    }
    
    // 결과물을 출력하기위해 왼쪽 스택에 있던 모든 원소를 오른쪽 스택으로 push한다
    // 그 뒤에 오른쪽 스택에서 pop하면 원래 문자열 순서대로 출력된다
    while (!left.empty())
    {
        right.push(left.top());
        left.pop();
    }
    
    while (!right.empty())
    {
        cout << right.top();
        right.pop();
    }
    
    return 0;
}
