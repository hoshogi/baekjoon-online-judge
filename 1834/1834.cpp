/*
Title   : BOJ_1834 [나머지와 몫이 같은 수]
Author  : Hoseok Lee
Date    : 2021/10/10
https://github.com/hoshogi
https://www.acmicpc.net/problem/1834
*/

#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long n, sum = 0;
    
    cin >> n;
    for (int i = 1;i < n;i++)
        sum += i * n + i;
    
    cout << sum << '\n';
    return 0;
}
