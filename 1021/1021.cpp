/*
Title   : BOJ_1021 [회전하는 큐]
Author  : Hoseok Lee
Date    : 2022/02/04
https://www.acmicpc.net/problem/1021
https://github.com/hoshogi
*/

#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m, result = 0;
    deque<int> dq;
    deque<int> pick;
    
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        dq.push_back(i + 1);
    
    for (int i = 0; i < m; i++) {
        int num;
        
        cin >> num;
        pick.push_back(num);
    }
    
    for (int i = 0; i < m; i++) {
        int pickNum = pick.front();
        pick.pop_front();
        
        int count = 0;
        while (true) {
            if (pickNum == dq.front()) {
                dq.pop_front();
                result += min(count, n - count);
                n--;
                break;
            }
            dq.push_back(dq.front());
            dq.pop_front();
            count++;
        }
    }
    cout << result << '\n';
    return 0;
}
