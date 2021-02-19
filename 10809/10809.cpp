/*
Title   : BOJ_10809 [알파벳 찾기]
Author  : Hoseok Lee
Date    : 2021/02/19

https://www.acmicpc.net/problem/10809
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string word;
    int alphabet[26];
    
    //  배열 초기화
    // int array[100] = { [0 ... 99] = -1 };
    // std::fill_n(초기화 하려는 배열 이름, 배열의 자리 수, 초기화 하려는 값);
    fill_n(alphabet, 26, -1);
    
    getline(cin, word);
    for(int i = 0;i < word.length();i++)
        if (alphabet[word[i]-97] == -1)
            alphabet[word[i]-97] = i;
    
    for(int i = 0;i < 26;i++)
        cout << alphabet[i] << " ";
    
    return 0;
}
