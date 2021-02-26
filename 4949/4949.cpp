/*
Title   : BOJ_4949 [균형잡힌 세상]
Author  : Hoseok Lee
Date    : 2021/02/26

https://www.acmicpc.net/problem/4949
https://github.com/hoshogi
*/

#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    char str[100];
    stack<char> s;

    while(true)
    {
        int smallBracket = 0, bigBracket = 0;
        
        // getline() vs cin.getline()
        
        // getline()
        // <string>에 저장 되어 있다
        // string형 문자열을 저장시에 사용
        // getline(cin, str, index); // index 까지 저장
        
        // cin.getline()
        // cin의 멤버 함수이며 띄어쓰기까지 포함하여 문자열로 저장 할 수 있다
        
        // cin.getline(char buf[], int size, char delimitChar);
        // delimitChar가 생략되면 디폴트 값 = '\n'
        cin.getline(str, 100, '.'); // '.' 전까지 문자열로 저장
        cin.ignore(); // 개행 문자 무시하기 위하여 사용
        
        if (str[0] == 0)
            break;
        
        for (int i = 0;i < strlen(str);i++)
        {
            if (str[i] == '(')
            {
                s.push(str[i]);
                smallBracket++;
            }
            else if (str[i] == ')')
            {
                if (smallBracket > 0 && s.top() == '(')
                {
                    s.pop();
                    smallBracket--;
                }
                else
                {
                    cout << "no" << '\n';
                    while(!s.empty())
                        s.pop();
                    smallBracket = 0;
                    bigBracket = 0;
                    break;
                }
            }
            else if (str[i] == '[')
            {
                s.push(str[i]);
                bigBracket++;
            }
            else if (str[i] == ']')
            {
                if (bigBracket > 0 && s.top() == '[')
                {
                    s.pop();
                    bigBracket--;
                }
                else
                {
                    cout << "no" << '\n';
                    while(!s.empty())
                        s.pop();
                    smallBracket = 0;
                    bigBracket = 0;
                    break;
                }
            }
            
            if (i == strlen(str) - 1)
            {
                if (smallBracket == 0 && bigBracket == 0)
                    cout << "yes" << '\n';
                else
                    cout << "no" << '\n';
                
                while(!s.empty())
                    s.pop();
                smallBracket = 0;
                bigBracket = 0;
            }
        }
    }
    
    return 0;
}
