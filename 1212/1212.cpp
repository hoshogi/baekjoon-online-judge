/*
Title   : BOJ_1212 [8진수 2진수]
Author  : Hoseok Lee
Date    : 2022/07/11
https://www.acmicpc.net/problem/1212
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
using namespace std;

string calculate(char c) {
    switch (c) {
        case '0':
            return "000";
        case '1':
            return "001";
        case '2':
            return "010";
        case '3':
            return "011";
        case '4':
            return "100";
        case '5':
            return "101";
        case '6':
            return "110";
        case '7':
            return "111";
    }
    return 0;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    string num;
    string result = "";
    
    cin >> num;
    for (int i = 0; i < num.length(); i++)
        result += calculate(num[i]);
    
    int count = 0;
    for (int i = 0; i < result.length(); i++) {
        if (result[i] == '0') {
            count++;
        }
        else {
            if (count > 0) {
                result = result.substr(count);
            }
            break;
        }
        if (i == result.length() - 1)
            result = "0";
    }
    
    cout << result << '\n';
    return 0;
}
