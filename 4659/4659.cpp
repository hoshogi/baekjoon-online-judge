/*
Title   : BOJ_4659 [비밀번호 발음하기]
Author  : Hoseok Lee
Date    : 2021/09/26
https://github.com/hoshogi
https://www.acmicpc.net/problem/4659
*/

#include <iostream>
#include <string>
using namespace std;

bool Check(string str) {
    bool check_vowel = false;
    char temp = '0';
    int count_vowel = 0, count_consonant = 0;
    
    for (int i = 0;i < str.length();i++) {
        switch(str[i]) {
            case 'a':
            case 'i':
            case 'u':
            case 'o':
            case 'e':
                check_vowel = true;
                count_consonant = 0;
                count_vowel++;
                if (count_vowel > 2)
                    return false;
                if (str[i] == temp)
                {
                    switch(str[i])
                    {
                        case 'a':
                        case 'i':
                        case 'u':
                            return false;
                    }
                }
                temp = str[i];
                break;
            default:
                count_vowel = 0;
                count_consonant++;
                if (count_consonant > 2)
                    return false;
                if (str[i] == temp)
                    return false;
                temp = str[i];
                break;
        }
    }
    if (!check_vowel)
        return false;
    return true;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    while (true) {
        string str;
        
        cin >> str;
        if (str == "end")
            break;
        
        if (Check(str))
            cout << '<' << str << "> is acceptable." << '\n';
        else
            cout << '<' << str << "> is not acceptable." << '\n';
    }
    return 0;
}
