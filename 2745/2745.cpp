/*
Title   : BOJ_2745 [진법 변환]
Author  : Hoseok Lee
Date    : 2022/07/18
https://www.acmicpc.net/problem/2745
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int convert(char c) {
    if (c >= 'A' && c <= 'Z')
        return 10 + c - 'A';
    return c - '0';
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int b, mul = 1, result = 0;
    string n;
    
    cin >> n >> b;
    reverse(n.begin(), n.end());
    for (int i = 0; i < n.length(); i++) {
        int num = convert(n[i]);
        result += num * mul;
        mul *= b;
    }
    
    cout << result << '\n';
    return 0;
}
