/*
Title   : BOJ_13241 [최소공배수]
Author  : Hoseok Lee
Date    : 2022/08/08
https://www.acmicpc.net/problem/13241
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    long long a, b;
    
    cin >> a >> b;
    cout << a * b / gcd(a, b) << '\n';
    return 0;
}
