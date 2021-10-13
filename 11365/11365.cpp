/*
Title   : BOJ_11365 [!밀비 급일]
Author  : Hoseok Lee
Date    : 2021/10/13
https://github.com/hoshogi
https://www.acmicpc.net/problem/11365
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    while (true) {
        string str;
        
        getline(cin, str);
        if (str == "END")
            break;
        reverse(str.begin(), str.end());
        cout << str << '\n';
    }
    return 0;
}
