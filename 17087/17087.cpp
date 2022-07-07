/*
Title   : BOJ_17087 [숨바꼭질 6]
Author  : Hoseok Lee
Date    : 2022/07/06
https://www.acmicpc.net/problem/17087
https://github.com/hoshogi
*/

#include <iostream>
#include <cmath>
using namespace std;

int Gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n, s, num, result;
    
    cin >> n >> s >> num;
    
    result = abs(s - num);
    
    for (int i = 1; i < n; i++) {
        cin >> num;
        result = Gcd(result, abs(s - num));
    }
    
    cout << result << '\n';
    return 0;
}
