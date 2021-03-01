/*
Title   : BOJ_1874 [스택 수열]
Author  : Hoseok Lee
Date    : 2021/03/01

https://www.acmicpc.net/problem/1874
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
    
    int n, num = 0;
    string result;
    stack<int> s;
    
    cin >> n;
    int* seq = new int [n]; // sequence: 수열
 
    for (int i = 0;i < n;i++)
        cin >> seq[i];

    for (int i = 0;i < n;i++)
    {
        if (!s.empty())
        {
            while (s.top() < seq[i])
            {
                s.push(++num);
                result += "+";
            }
       
            if (s.top() == seq[i])
            {
                s.pop();
                result += "-";
            }
            else if (s.top() > seq[i])
            {
                cout << "NO" << '\n';
                break;
            }
        }
        else
        {
            while (num < seq[i])
            {
                s.push(++num);
                result += "+";
            }
            
            if (num == seq[i])
            {
                if (s.empty())
                {
                    cout << "NO" << '\n';
                    break;
                }
                else
                {
                    s.pop();
                    result += "-";
                }
            }
        
            if (num > seq[i])
            {
                cout << "NO" << '\n';
                break;
            }
        }
            
        if (i == n - 1)
        {
            for (int j = 0;j < result.length();j++)
                cout << result[j] << '\n';
        }
    }
    
    return 0;
}
