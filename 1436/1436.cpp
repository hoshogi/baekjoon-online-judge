/*
Title   : BOJ_1436 [영화감독 숌]
Author  : Hoseok Lee
Date    : 2022/10/18
https://www.acmicpc.net/problem/1436
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n;
    
    cin >> n;
    for (int i = 666; ; i++) {
        string str = to_string(i);
        
        for (int j = 0; j < str.length() - 2; j++) {
            if (str.substr(j, 3) == "666") {
                n--;
                break;
            }
        }
        
        if (n == 0) {
            cout << i << '\n';
            break;
        }
    }
    return 0;
}
