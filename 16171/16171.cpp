/*
Title   : BOJ_16171 [나는 친구가 적다 (Small)]
Author  : Hoseok Lee
Date    : 2021/09/27
https://github.com/hoshogi
https://www.acmicpc.net/problem/16171
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// string의 find함수를 사용한 풀이
bool Check(string book, string keyword) {
    string word = "";
    
    for (char c : book) {
        if (!(c >= '0' && c <= '9'))
            word += c;
    }
    
    if (word.find(keyword) == string::npos)
        return false;
    else
        return true;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string book, keyword;
    cin >> book >> keyword;
    if (Check(book, keyword))
        cout << 1 << '\n';
    else
        cout << 0 << '\n';
    return 0;
}

// 맨 처음으로 풀었을때 풀이
// find함수를 사용하지 않은 풀이
/*
 #include <iostream>
 #include <string>
 #include <algorithm>
 using namespace std;

 bool Check(string book, string keyword) {
     string word = "";
     
     for (char c : book) {
         if (!(c >= '0' && c <= '9'))
             word += c;
     }

     for (int i = 0;i <= word.length() - keyword.length();i++)
     {
         string temp = word.substr(i, keyword.length());
         if (temp == keyword)
             return true;
     }
     return false;
 }

 int main(void) {
     ios_base::sync_with_stdio(false);
     cin.tie(nullptr);
     
     string book, keyword;
     cin >> book >> keyword;
     if (Check(book, keyword))
         cout << 1 << '\n';
     else
         cout << 0 << '\n';
     return 0;
 }
 */
