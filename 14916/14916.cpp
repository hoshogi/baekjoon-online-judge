/*
Title   : BOJ_14916 [거스름돈]
Author  : Hoseok Lee
Date    : 2022/03/23
https://www.acmicpc.net/problem/14916
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, result = 0;
    
    cin >> n;
    while (true) {
        if (n == 0)
            break;
        if (n < 0) {
            result = -1;
            break;
        }
        if (n % 5 == 0) {
            result += n / 5;
            break;
        }
        else {
            n -= 2;
            result++;
        }
    }
    cout << result << '\n';
    return 0;
}
