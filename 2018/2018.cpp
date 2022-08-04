/*
Title   : BOJ_2018 [수들의 합 5]
Author  : Hoseok Lee
Date    : 2022/08/05
https://www.acmicpc.net/problem/2018
https://github.com/hoshogi
*/

#include <iostream>
#include <queue>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n, sum = 0, result = 0;
    queue<int> q;
    
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sum += i;
        q.push(i);
        
        while (sum > n) {
            if (!q.empty()) {
                sum -= q.front();
                q.pop();
            }
        }
        
        if (sum == n)
            result++;
    }
    
    cout << result << '\n';
    return 0;
}
