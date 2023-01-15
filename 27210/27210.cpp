/*
Title   : BOJ_27210 [신을 모시는 사당]
Author  : Hoseok Lee
Date    : 2023/01/15
https://www.acmicpc.net/problem/27210
https://github.com/hoshogi
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n, maxLeft = -1e9, maxRight = -1e9;
    int left[100001] = {0, };
    int right[100001] = {0, };
    
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int num;
        
        cin >> num;
        if (num == 1) {
            left[i] = max(left[i - 1] + 1, 1);
            right[i] = max(right[i - 1] - 1, 0);
        }
        if (num == 2) {
            left[i] = max(left[i - 1] - 1, 0);
            right[i] = max(right[i - 1] + 1, 1);
        }
    }
    
    for (int i = 1; i <= n; i++) {
        maxLeft = max(maxLeft, left[i]);
        maxRight = max(maxRight, right[i]);
    }
    cout << max(maxLeft, maxRight) << '\n';
    return 0;
}
