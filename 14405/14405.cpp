/*
Title   : BOJ_14405 [피카츄]
Author  : Hoseok Lee
Date    : 2021/02/17
 
https://www.acmicpc.net/problem/14405
https://www.github.com/hoshogi
*/

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string word;
    getline(cin, word);
    
    for (int i = 0;i < word.length(); )
    {
        if (word[i] == 'p' &&  word[i + 1] == 'i')
            i += 2;
        else if (word[i] == 'k' && word[i + 1] == 'a')
            i += 2;
        else if (word[i] == 'c' && word[i+1] == 'h' && word[i+2] == 'u')
            i += 3;
        else
        {
            cout << "NO" << '\n';
            break;
        }
        
        if(i == word.length())
            cout << "YES" << '\n';
    }
    
    return 0;
}
