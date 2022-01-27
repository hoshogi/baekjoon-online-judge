/*
Title   : BOJ_1541 [잃어버린 괄호]
Author  : Hoseok Lee
Date    : 2022/01/26
https://www.acmicpc.net/problem/1541
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string str, num = "";
    int minus_num = 0, result = 0;
    bool minus = false;
    
    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != '+' && str[i] != '-') {
            num += str[i];
        }
        
        if (str[i] == '+') {
            if (minus) {
                minus_num += stoi(num);
                num = "";
            }
            else {
                result += stoi(num);
                num = "";
            }
        }
        
        if (str[i] == '-') {
            if (minus) {
                minus_num += stoi(num);
                num = "";
                result -= minus_num;
                minus_num = 0;
            }
            else {
                minus = true;
                result += stoi(num);
                num = "";
            }
        }
        
        if (i == str.length() - 1) {
            if (minus) {
                minus_num += stoi(num);
                result -= minus_num;
            }
            else {
                result += stoi(num);
            }
        }
    }
    cout << result << '\n';
    return 0;
}
