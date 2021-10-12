/*
Title   : BOJ_11286 [절댓값 힙]
Author  : Hoseok Lee
Date    : 2021/10/12
https://github.com/hoshogi
https://www.acmicpc.net/problem/11286
*/

#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    int n;
    
    cin >> n;
    while (n--) {
        int num;
        
        cin >> num;
        if (num == 0) {
            if (pq.empty())
                cout << 0 << '\n';
            else {
                cout << pq.top().second << '\n';
                pq.pop();
            }
        }
        else
            pq.push({abs(num), num});
    }
    return 0;
}
