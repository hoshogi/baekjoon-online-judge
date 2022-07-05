/*
Title   : BOJ_1935 [후위 표기식2]
Author  : Hoseok Lee
Date    : 2022/07/05
https://www.acmicpc.net/problem/1935
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
#include <stack>
using namespace std;

double calculate(double a, double b, char c) {
    switch (c) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return a / b;
    }
    return 0;
}

int main(void) {
    int n;
    double num[26] = {0, };
    string str;
    stack<double> s;
    
    cin >> n;
    cin >> str;
    
    for (int i = 0; i < n; i++)
        cin >> num[i];
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            s.push(num[str[i] - 'A']);
        else {
            double a = s.top();
            s.pop();
            double b = s.top();
            s.pop();
            double result = calculate(b, a, str[i]);
            s.push(result);
        }
    }
    
    printf("%.2lf\n", s.top());
    return 0;
}
