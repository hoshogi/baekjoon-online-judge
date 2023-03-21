/*
Title   : BOJ_1238 [파티]
Author  : Hoseok Lee
Date    : 2023/03/21
https://www.acmicpc.net/problem/1238
https://github.com/hoshogi
*/

#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#define INF 1e9
using namespace std;

int vertex;
int len[1001];
vector<pair<int, int>> graph[1001];

void dijkstra(int start) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    fill_n(len, vertex + 1, INF);
    len[start] = 0;
    pq.push({0, start});
    
    while (!pq.empty()) {
        int cost = pq.top().first;
        int now = pq.top().second;
        pq.pop();
        
        if (cost > len[now])
            continue;
        
        for (auto it : graph[now]) {
            int dist = cost + it.second;
            
            if (dist < len[it.first]) {
                len[it.first] = dist;
                pq.push({dist, it.first});
            }
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int edge, mid, answer = 0;
    int result[1001] = {0, };
    
    cin >> vertex >> edge >> mid;
    for (int i = 0; i < edge; i++) {
        int from, to, weight;
        
        cin >> from >> to >> weight;
        graph[from].push_back({to, weight});
    }
    
    dijkstra(mid);
    for (int i = 1; i <= vertex; i++)
        result[i] += len[i];
    for (int i = 1; i <= vertex; i++) {
        dijkstra(i);
        result[i] += len[mid];
    }
    for (int i = 1; i <= vertex; i++)
        answer = max(answer, result[i]);
    cout << answer << '\n';
    return 0;
}
