/*
Title   : BOJ_26005 [나뭇잎 학회]
Author  : Hoseok Lee
Date    : 2022/11/29
https://www.acmicpc.net/problem/26005
https://github.com/hoshogi
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n;
    
    cin >> n;
    if (n == 1) {
        cout << 0 << '\n';
        exit(0);
    }
    
    cout << ceil(n * n / 2.0) << '\n';
    return 0;
}
