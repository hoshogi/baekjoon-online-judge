/*
Title   : BOJ_1439 [뒤집기]
Author  : Hoseok Lee
Date    : 2021/10/06
https://github.com/hoshogi
https://www.acmicpc.net/problem/1439
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string str;
    int count = 0;
    
    cin >> str;
    char temp = str[0];
    for (int i = 1; i < str.length(); i++) {
        if (temp != str[i])
            count++;
        temp = str[i];
    }
    
    cout << round((double)count / 2) << '\n';
    return 0;
}
