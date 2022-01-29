/*
Title   : BOJ_11091 [알파벳 전부 쓰기]
Author  : Hoseok Lee
Date    : 2022/01/27
https://www.acmicpc.net/problem/11091
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    
    cin >> n;
    cin.ignore();
    while (n--) {
        string str;
        bool alphabet[26] = {false, };
        
        getline(cin, str);
        for (auto c : str) {
            if (c >= 'a' && c <= 'z')
                alphabet[c - 'a'] = true;
            if (c >= 'A' && c <= 'Z')
                alphabet[c - 'A'] = true;
        }
        
        string missing = "";
        for (int i = 0; i < 26; i++) {
            if (alphabet[i] == false) {
                char c = i + 'a';
                missing += c;
            }
        }
        
        if (missing == "")
            cout << "pangram" << '\n';
        else
            cout << "missing " << missing << '\n';
    }
    return 0;
}
