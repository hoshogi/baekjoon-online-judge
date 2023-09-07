/*
Title   : BOJ_10282 [해킹]
Author  : Hoseok Lee
Date    : 2023/09/07
https://www.acmicpc.net/problem/10282
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#define MAX 1e9
using namespace std;

vector<pair<int, int>> graph[10001];
int dist[10001];

void dijkstra(int start) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    
    dist[start] = 0;
    pq.push({dist[start], start});
    while(!pq.empty()) {
        int nowDist = pq.top().first;
        int now = pq.top().second;
        pq.pop();

        if (nowDist > dist[now])
            continue;

        for (auto it : graph[now]) {
            int cost = nowDist + it.second;
            int temp = it.first;

            if (cost < dist[temp]) {
                dist[temp] = cost;
                pq.push({cost, temp});
            }
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;

    cin >> t;
    while (t--) {
        int n, d, c, count = 0, time = 0;

        cin >> n >> d >> c;
        for (int i = 1; i <= n; i++) 
            graph[i].clear();
        for (int i = 0; i < d; i++) {
            int a, b, s;

            cin >> a >> b >> s;
            graph[b].push_back({a, s});
        }
        fill_n(dist, n + 1, MAX);

        dijkstra(c);
        for (int i = 1; i <= n; i++) {
            if (dist[i] != MAX) {
                count++;
                time = max(time, dist[i]);
            }
        }
        cout << count << ' ' << time << '\n';
    }
    return 0;
}