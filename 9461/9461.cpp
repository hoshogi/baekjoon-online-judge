/*
Title   : BOJ_9461 [파도반 수열]
Author  : Hoseok Lee
Date    : 2022/02/24
https://www.acmicpc.net/problem/9461
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    long long p[101] = {0, 1, 1, 1, 2, 2, 3, 4, 5, };
    
    for (int i = 9; i <= 100; i++)
        p[i] = p[i - 5] + p[i - 1];
    
    cin >> t;
    while (t--) {
        int n;

        cin >> n;
        cout << p[n] << '\n';
    }

    return 0;
}
