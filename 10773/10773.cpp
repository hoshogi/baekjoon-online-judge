/*
Title   : BOJ_10773 [제로]
Author  : Hoseok Lee
Date    : 2021/02/24

https://www.acmicpc.net/problem/10773
https://github.com/hoshogi
*/

#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int k, num, sum = 0;
    stack<int> s;
    
    cin >> k;
    while (k--)
    {
        cin >> num;
        if (num != 0)
            s.push(num);
        else
            s.pop();
    }
    
    while (!s.empty())
    {
        sum += s.top();
        s.pop();
    }
    
    cout << sum << '\n';
    return 0;
}
