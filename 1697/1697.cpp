/*
Title   : BOJ_1697 [숨바꼭질]
Author  : Hoseok Lee
Date    : 2022/09/20
https://www.acmicpc.net/problem/1697
https://github.com/hoshogi
*/

#include <iostream>
#include <queue>
#include <algorithm>
#define MAX 100000
using namespace std;

bool visited[MAX + 1];

int bfs(int n, int k) {
    queue<pair<int, int> > q;
    q.push({n, 0});
    visited[n] = true;
    
    if (n == k)
        return 0;
    
    while (!q.empty()) {
        int num = q.front().first;
        int count = q.front().second + 1;
        q.pop();
        
        if (num - 1 == k || num + 1 == k || num * 2 == k)
            return count;

        if (num - 1 >= 0 && !visited[num - 1]) {
            q.push({num - 1, count});
            visited[num - 1] = true;
        }
        
        if (num * 2 <= MAX && !visited[num * 2]) {
            q.push({num * 2, count});
            visited[num * 2] = true;
        }
    
        if (num + 1 <= MAX && !visited[num + 1]) {
            q.push({num + 1, count});
            visited[num + 1] = true;
        }
    }
    
    return 0;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n, k;
    
    cin >> n >> k;
    cout << bfs(n, k) << '\n';
    return 0;
}
