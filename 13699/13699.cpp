/*
Title   : BOJ_13699 [점화식]
Author  : Hoseok Lee
Date    : 2021/10/02
https://github.com/hoshogi
https://www.acmicpc.net/problem/13699
*/

#include <iostream>
using namespace std;

// Dynamic Programming
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    long long result[36] = {1, 1, 0, };
    
    for (int i = 2; i <= 35; i++) {
        for (int j = 0; j < i; j++)
            result[i] += result[j] * result[i - j - 1];
    }
    cin >> n;
    cout << result[n] << '\n';
    return 0;
}
