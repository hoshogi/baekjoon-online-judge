/*
Title   : BOJ_13549 [숨바꼭질 3]
Author  : Hoseok Lee
Date    : 2022/10/18
https://www.acmicpc.net/problem/13549
https://github.com/hoshogi
*/

#include <iostream>
#include <queue>
#define INF 1e9
#define MAX 100000
using namespace std;

int bfs(int n, int k) {
    int distance[MAX + 1];
    queue<pair<int, int>> q;
    
    fill_n(distance, MAX + 1, INF);
    distance[n] = 0;
    q.push({n, 0});
    
    while (!q.empty()) {
        int now = q.front().first;
        int len = q.front().second;
        q.pop();
        
        if (now - 1 >= 0 && len + 1 < distance[now - 1]) {
            distance[now - 1] = len + 1;
            q.push({now - 1, len + 1});
        }
        if (now + 1 <= MAX && len + 1 < distance[now + 1]) {
            distance[now + 1] = len + 1;
            q.push({now + 1, len + 1});
        }
        if (now * 2 <= MAX && len < distance[2 * now]) {
            distance[2 * now] = len;
            q.push({2 * now, len});
        }
    }
    return distance[k];
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
