/*
Title   : BOJ_15988 [1, 2, 3 더하기 3]
Author  : Hoseok Lee
Date    : 2022/08/05
https://www.acmicpc.net/problem/15988
https://github.com/hoshogi
*/

#include <iostream>
#define MOD 1000000009
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    long long d[1000001] = {0, 1, 2, 4, };
    
    for (int i = 4; i <= 1000000; i++) {
        d[i] = d[i - 1] + d[i - 2] + d[i - 3];
        d[i] %= MOD;
    }
    
    cin >> t;
    while (t--) {
        int n;
        
        cin >> n;
        cout << d[n] << '\n';
    }
    return 0;
}
