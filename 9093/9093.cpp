/*
Title   : BOJ_9093 [단어 뒤집기]
Author  : Hoseok Lee
Date    : 2021/02/16
 
https://www.acmicpc.net/problem/9093
https://www.github.com/hoshogi
*/

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    stack <char> s;
    string sentence;
    
    /*
    cin은 '\n'를 변수에 담지 않는다 (입력 버퍼에 남겨둔다)
    getline은 '\n'를 변수에 담는다
     
    cin.ignore();는 버퍼 전체를 비우는 것이 아니라 맨 앞의 문자 하나를 지운다
    getline(읽어올 입력 스트림, 저장할 문자열 변수);
    */
    
    cin >> t;
    cin.ignore();
 
    while(t--)
    {
        getline(cin, sentence);
        sentence += '\n'; // 마지막 단어도 구별을 하기 위해서 마지막에 '\n' 추가
        
        for(int i = 0;i < sentence.length();i++)
        {
            if(sentence[i] == ' ' || sentence[i] == '\n')
            {
                while(!s.empty())
                {
                    cout << s.top();
                    s.pop();
                }
                cout << ' ';
            }
            else
            {
                s.push(sentence[i]);
            }
        }
        cout << '\n';
    }
    
    return 0;
}
