/*
Title   : BOJ_23303 [이 문제는 D2 입니다.]
Author  : Hoseok Lee
Date    : 2021/11/4
https://github.com/hoshogi
https://www.acmicpc.net/problem/23303
*/

#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string str;
    
    getline(cin, str);
    if (str.find("d2") != string::npos || str.find("D2") != string::npos)
        cout << "D2" << '\n';
    else
        cout << "unrated" << '\n';
    
    return 0;
}
