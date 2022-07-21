/*
Title   : BOJ_1918 [후위 표기식]
Author  : Hoseok Lee
Date    : 2022/07/21
https://www.acmicpc.net/problem/1918
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    string str;
    stack<char> s;
    
    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'A' && str[i] <='Z')
            cout << str[i];
        else {
            if (s.empty())
                s.push(str[i]);
            else if (str[i] == '(') {
                s.push(str[i]);
            }
            else if (str[i] == ')') {
                while (s.top() != '(') {
                    cout << s.top();
                    s.pop();
                }
                s.pop();
            }
            else if (str[i] == '*' || str[i] == '/') {
                while (!s.empty()) {
                    if (s.top() == '(' || s.top() == '+' || s.top() == '-')
                        break;
                    else {
                        cout << s.top();
                        s.pop();
                    }
                }
                s.push(str[i]);
            }
            else if (str[i] == '+' || str[i] == '-') {
                while (!s.empty()) {
                    if (s.top() != '(') {
                        cout << s.top();
                        s.pop();
                    }
                    else
                        break;
                }
                s.push(str[i]);
            }
        }
    }
    
    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }
    return 0;
}
