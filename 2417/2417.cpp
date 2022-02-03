/*
Title   : BOJ_2417 [정수 제곱근]
Author  : Hoseok Lee
Date    : 2022/02/03
https://www.acmicpc.net/problem/2417
https://github.com/hoshogi
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long n, result;
    
    cin >> n;
    result = sqrt(n);
    if (result * result < n)
        result++;
    cout << result << '\n';
    return 0;
}
