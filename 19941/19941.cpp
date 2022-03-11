/*
Title   : BOJ_19941 [햄버거 분배]
Author  : Hoseok Lee
Date    : 2022/03/13
https://www.acmicpc.net/problem/19941
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k, result = 0;
    string str;
    bool hamburger[20000] = {false, };
    
    cin >> n >> k >> str;
    for (int i = 0; i < n; i++) {
        if (str[i] == 'H')
            hamburger[i] = true;
    }
    
    for (int i = 0; i < n; i++) {
        if (str[i] == 'P') {
            int start = i - k, end = i + k;
            if (i - k < 0)
                start = 0;
            if (i + k > n - 1)
                end = n - 1;
            for (int j = start; j <= end; j++) {
                if (hamburger[j] == true) {
                    hamburger[j] = false;
                    result++;
                    break;
                }
            }
        }
    }
    cout << result << '\n';
    return 0;
}
