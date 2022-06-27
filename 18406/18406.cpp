/*
Title   : BOJ_18406 [럭키 스트레이트]
Author  : Hoseok Lee
Date    : 2022/06/27
https://www.acmicpc.net/problem/18406
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string str;
    int left = 0, right = 0;
    
    cin >> str;
    for (int i = 0; i < str.length() / 2; i++)
        left += str[i] - '0';
    for (int i = str.length() / 2; i < str.length(); i++)
        right += str[i] - '0';
    
    if (left == right)
        cout << "LUCKY" << '\n';
    else
        cout << "READY" << '\n';
    
    return 0;
}
