/*
Title   : BOJ_1504 [특정한 최단 경로]
Author  : Hoseok Lee
Date    : 2023/03/20
https://www.acmicpc.net/problem/1504
https://github.com/hoshogi
*/

#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#define INF 1e9
using namespace std;

int vertex;
int len[801];
vector<pair<int, int>> graph[801];

void dijkstra(int start) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    fill_n(len, vertex + 1, INF);
    len[start] = 0;
    
    pq.push({0, start});
    while(!pq.empty()) {
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
    
    int edge, mid1, mid2;
    long long answer, result1 = 0, result2 = 0;
    cin >> vertex >> edge;
    for (int i = 0; i < edge; i++) {
        int v1, v2, weight;
        
        cin >> v1 >> v2 >> weight;
        graph[v1].push_back({v2, weight});
        graph[v2].push_back({v1, weight});
    }
    cin >> mid1 >> mid2;
    
    dijkstra(1);
    result1 += len[mid1];
    result2 += len[mid2];
    dijkstra(mid1);
    result1 += len[mid2];
    result2 += len[vertex];
    dijkstra(mid2);
    result1 += len[vertex];
    result2 += len[mid1];
    
    answer = min(result1, result2);
    if (answer >= INF)
        cout << -1 << '\n';
    else
        cout << answer << '\n';
    return 0;
}
