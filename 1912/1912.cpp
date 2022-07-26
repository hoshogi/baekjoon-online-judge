/*
Title   : BOJ_1912 [연속합]
Author  : Hoseok Lee
Date    : 2022/07/26
https://www.acmicpc.net/problem/1912
https://github.com/hoshogi
*/

#include <iostream>
#define INF 100000000
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n, result = -INF;
    int num[100000];
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
        if (i != 0)
            num[i] = max(num[i], num[i] + num[i - 1]);
        result = max(result, num[i]);
    }
    
    cout << result << '\n';
}
