/*
Title   : BOJ_4583 [거울상]
Author  : Hoseok Lee
Date    : 2022/01/27
https://www.acmicpc.net/problem/4583
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    while (true) {
        string word;
        bool valid = true;
        
        cin >> word;
        if (word == "#")
            break;
        
        reverse(word.begin(), word.end());
        for (int i = 0; i < word.length(); i++) {
            if (word[i] == 'b')
                word[i] = 'd';
            else if (word[i] == 'd')
                word[i] = 'b';
            else if (word[i] == 'p')
                word[i] = 'q';
            else if (word[i] == 'q')
                word[i] = 'p';
            else if (word[i] != 'i' && word[i] != 'o' && word[i] != 'v' && word[i] != 'w' && word[i] != 'x') {
                valid = false;
                break;
            }
        }
        
        if (valid)
            cout << word << '\n';
        else
            cout << "INVALID" << '\n';
    }
    return 0;
}
