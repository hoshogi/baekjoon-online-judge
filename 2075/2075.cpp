/*
Title   : BOJ_2075 [N번째 큰 수]
Author  : Hoseok Lee
Date    : 2022/10/15
https://www.acmicpc.net/problem/2075
https://github.com/hoshogi
*/

#include <iostream>
#include <queue>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n;
    priority_queue<int, vector<int>, greater<int>> pq;
    
    cin >> n;
    for (int i = 0; i < n * n; i++) {
        int num;
        
        cin >> num;
        if (pq.size() < n)
            pq.push(num);
        else {
            if (num > pq.top()) {
                pq.pop();
                pq.push(num);
            }
        }
    }
    cout << pq.top() << '\n';
    return 0;
}
