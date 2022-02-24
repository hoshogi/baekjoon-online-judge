/*
Title   : BOJ_2193 [이친수]
Author  : Hoseok Lee
Date    : 2022/02/24
https://www.acmicpc.net/problem/2193
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    long long zero[91] = {0, 0};
    long long one[91] = {0, 1};
    long long result[91] = {0, 1};
    
    for (int i = 2; i <= 90; i++) {
        zero[i] = zero[i - 1] + one[i - 1];
        one[i] = zero[i - 1];
        result[i] = zero[i] + one[i];
    }
    
    cin >> n;
    cout << result[n] << '\n';
    return 0;
}
