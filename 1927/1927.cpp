/*
Title   : BOJ_1927 [최소 힙]
Author  : Hoseok Lee
Date    : 2021/10/12
https://github.com/hoshogi
https://www.acmicpc.net/problem/1927
*/

#include <iostream>
#include <queue>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    priority_queue<int, vector<int>, greater<>> pq;
    int n;
    
    cin >> n;
    while (n--) {
        int num;
        
        cin >> num;
        if (num == 0) {
            if (pq.empty())
                cout << 0 << '\n';
            else {
                cout << pq.top() << '\n';
                pq.pop();
            }
        }
        else
            pq.push(num);
    }
    return 0;
}
