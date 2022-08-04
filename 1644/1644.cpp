/*
Title   : BOJ_1644 [소수의 연속합]
Author  : Hoseok Lee
Date    : 2022/08/05
https://www.acmicpc.net/problem/1644
https://github.com/hoshogi
*/

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n, sum = 0, result = 0;
    bool check[4000001] = {true, true, false, };
    vector<int> v;
    queue<int> q;
    
    cin >> n;
    for (int i = 2; i <= n; i++) {
        if (!check[i]) {
            v.push_back(i);
            for (int j = 2 * i; j <= n; j += i)
                check[j] = true;
        }
    }
    
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
        q.push(v[i]);
        
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
