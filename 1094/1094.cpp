/*
Title   : BOJ_1094 [막대기]
Author  : Hoseok Lee
Date    : 2023/08/30
https://www.acmicpc.net/problem/1094
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int x, result = 0;

    cin >> x;
    while (x != 0) {
        if (x % 2 == 1)
            result++;
        x /= 2;
    }
    cout << result << '\n';
    return 0;
}